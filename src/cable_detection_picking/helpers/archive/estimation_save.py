import cv2
import numpy as np
import open3d as o3d
import skimage.morphology as morphology
from glob import glob
from scipy import signal
from scipy import spatial
from scipy import ndimage
import config as cfg


############################################### (1) HELPERS FOR SKELETON ###############################################

def unbranch_skeleton(IN_skeleton):
    """
    Removes (due to intersections) small unwanted branches of skeleton

    Args:
        IN_skeleton: image (3d resolution) of a cables' initially obtained center line (=skeleton)

    Returns:
        OUT_skeleton: Image (3d resolution) of the unbranched center line
    """
    OUT_skeleton = np.copy(IN_skeleton)
    ## calculate number of neighboring skeleton pixels for each skeleton pixel
    n_neighbors = signal.convolve2d(IN_skeleton, np.ones((3, 3), np.uint8), boundary='fill', mode='same') - 1
    ## remove skeleton pixels without any neighbors (=isolated)
    pixels_iso = np.argwhere(OUT_skeleton * (n_neighbors==0))
    for y,x in pixels_iso:
        OUT_skeleton[y,x] = 0
    ## extract skeleton pixels with n_neighbors=1 (endpoint) or >=3 (intersection) neighboring skeleton pixels
    pixels_end = np.argwhere(OUT_skeleton * (n_neighbors==1))
    pixels_isc = np.argwhere(OUT_skeleton * (n_neighbors>=3))
    ## extract coordinates of all skeleton pixels
    pixels_all = np.argwhere(OUT_skeleton)
    ## find two endpoints with maximum distance to each other (assuming that all other form unwanted branches)
    n_endpoints = len(pixels_end)
    distance_matrix_endpoints = spatial.distance.cdist(pixels_end, pixels_end, 'euclidean')
    arg_max_distance = np.argmax(distance_matrix_endpoints)
    idx_ep1 = arg_max_distance // n_endpoints
    idx_ep2 = arg_max_distance % n_endpoints
    ## only run unbranching if there even are branches (=if there is any intersection pixel) 
    if pixels_isc:
        ## iterate endpoints except those two with maximum distance to each other
        branch_endpoints = np.delete(pixels_end, [idx_ep1,idx_ep2], axis=0)
        for i in range(len(branch_endpoints)):
            ## choose endpoint with min. distance to an intersection (min. distance = smallest/most irrelevant branch)
            distance_matrix_end2isc = spatial.distance.cdist(branch_endpoints, pixels_isc, 'euclidean')
            arg_min_end2isc = np.argmin(distance_matrix_end2isc)
            idx_end2isc = arg_min_end2isc // len(pixels_isc)  # =index of branch endpoint
            ## prepare iterative removal of branch pixels
            pixel_next = branch_endpoints[idx_end2isc].reshape((1,2))
            pixels_to_remove = list()
            ## make sure that not the same branch endpoint is chosen in next iteration by deleting
            branch_endpoints = np.delete(branch_endpoints, idx_end2isc, axis=0)
            ## iteratively remove the nearest skeleton pixel until intersection pixel or iteration limit is reached
            while True:
                ## find the nearest skeleton pixel
                pixel_iter = pixel_next
                distance_matrix_iteration = spatial.distance.cdist(pixel_iter, pixels_all, 'euclidean')
                idx_next = np.argmin(distance_matrix_iteration)
                pixel_next = pixels_all[idx_next].reshape((1,2))
                ## remove the nearest skeleton pixel from list of all remaining skeleton pixels (to avoid infinite loop)
                pixels_all = np.vstack((pixels_all[:idx_next], pixels_all[idx_next+1:]))
                ## add the nearest skeleton pixel to list of all assumed branch pixels that should be removed
                pixels_to_remove.append(pixel_next[0])
                ## prepare exit conditions
                intersection_reached = (pixel_next==pixels_isc[:,None]).all(-1).any(-1).any(-1)
                endpoint_reached = (pixel_next==pixels_end[:,None]).all(-1).any(-1).any(-1)
                n_removals = len(pixels_to_remove)
                distance_iter2next = np.linalg.norm(pixel_iter-pixel_next)
                ## exit while-loop and remove skeleton pixels depending on exit condition
                if intersection_reached:
                    ## iteration reaches an intersection from which the branch presumably originates from
                    for y,x in np.array(pixels_to_remove):
                        OUT_skeleton[y,x] = 0
                    # print('intersection reached')
                    break
                elif endpoint_reached & (n_removals > 1) & (n_removals < 25):
                    ## iteration reaches another endpoint of the skeleton
                    ##    n_removal>1:  pixel_iter at iter==1 is starting endpoint itself (-> endpoint_reached==True)
                    ##    n_removal<25: prevent deleting an entire (reasonable-sized) section of an interrupted skeleton
                    for y,x in np.array(pixels_to_remove):
                        OUT_skeleton[y,x] = 0
                    # print('endpoint reached')
                    break
                elif n_removals > 100:
                    ## presumably iterated over main skeleton instead of a short branch, therefore no removal
                    pixels_all = np.vstack((pixels_all,np.array(pixels_to_remove)))
                    # print('too many removals')
                    break
                elif distance_iter2next > 5:
                    ## iteration jumped between branches / sections
                    pixels_all = np.vstack((pixels_all,np.array(pixels_to_remove)))
                    # print('branch left')
                    break
    ## output
    return OUT_skeleton


def connect_skeletons(IN_skeleton):
    """
    Connects a (due to intersections) interrupted center line by linear interpolation of nearby skeleton endpoints

    Args:
        IN_skeleton: image (3d resolution) of a cables' initially obtained center line (=skeleton)

    Returns:
        OUT_skeleton: Image (3d resolution) of the connected center line
    """
    OUT_skeleton = np.copy(IN_skeleton) 
    ## get (neighbors of) endpoints
    n_neighbors = signal.convolve2d(IN_skeleton, np.ones((3,3), np.uint8), boundary='fill', mode='same')
    middlepoints = np.argwhere((n_neighbors==3)*IN_skeleton)
    endpoints = np.argwhere((n_neighbors==2)*IN_skeleton)
    neighbors = middlepoints[[np.argmin([np.linalg.norm(ep-mp) for mp in middlepoints]) for ep in endpoints]]
    ## get indices of nearest endpoints
    while len(endpoints)>2 and not len(endpoints)%2:
        mindist = np.inf
        for i in range(len(endpoints)):
            for j in range(i+1, len(endpoints)):
                dist_endpoints = np.linalg.norm(endpoints[i]-endpoints[j])
                dist_neighbors = np.linalg.norm(neighbors[i]-neighbors[j])
                ## find endpoints with the smallest distance that are not on the same skeleton piece
                if dist_endpoints<mindist and dist_endpoints<dist_neighbors:
                    minidx = [i,j]
                    mindist = dist_endpoints
                    ep_mindist = [endpoints[i], endpoints[j]]
        ## connect endpoints (if not too far away) and thin new skeleton (to prevent mistakes near connected endpoints)
        if mindist < cfg.MAX_SKEL_DISTANCE:
            OUT_skeleton = cv2.line(OUT_skeleton, ep_mindist[0][::-1], ep_mindist[1][::-1], (1), 1)
            OUT_skeleton = morphology.thin(OUT_skeleton).astype(np.uint8)
        ## eliminate connected endpoints from list of remaining endpoint 
        endpoints = np.delete(endpoints, minidx, axis=0)
        neighbors = np.delete(neighbors, minidx, axis=0)
    return OUT_skeleton


def get_skeletonpixels(IN_skeleton, IN_ordered=False):
    """
    Extracts the pixel coordinates of skeleton pixels from an image. Offers the possibility to sort the coordinates along the center line such that the first and last point refer to the endpoints of the skeleton. 

    Args:
        IN_skeleton: image (3d resolution) of a cables' center line (=skeleton)
        IN_ordered: boolean variable that triggers the (time-consuming) sorting of the skeleton pixels (default: False)
    
    Returns:
        OUT_xpixels: (ordered) list of the skeletons' pixel coordinates.  
    """
    ## get skeleton's pixel coordinates
    OUT_xpixels = np.argwhere(IN_skeleton)
    ## order (starting/ending with endpoint)       
    if IN_ordered:            
        ## get distance matrix
        distances = spatial.distance.cdist(OUT_xpixels, OUT_xpixels, 'euclidean')
        dmax = distances.max()*2
        distances = distances + np.identity(len(OUT_xpixels))*dmax
        ## get endpoints
        n_neighbors = signal.convolve2d(IN_skeleton, np.ones((3,3), np.uint8), boundary='fill', mode='same')
        endpoints = np.argwhere((n_neighbors==2)*IN_skeleton)
        # connect neighboring pixels starting from endpoint
        OUT_xpixels_ordered = [endpoints[0]]
        while True:
            ## find index of current endpoint
            ix_endpoint = np.argwhere(np.logical_and(OUT_xpixels[:,0]==OUT_xpixels_ordered[-1][0], OUT_xpixels[:,1]==OUT_xpixels_ordered[-1][1]))[0][0]
            if distances[ix_endpoint].min()<2:
                ## find index of nearest pixel
                ix_nearest = distances[ix_endpoint].argmin()
                ## manipulate pixel's row/col in distance matrix (to avoid repeated consideration) and append pixel to ordered list
                distances[:,ix_endpoint] = dmax
                distances[ix_endpoint,:] = dmax
                OUT_xpixels_ordered.append(OUT_xpixels[ix_nearest])
            else:
                break
        return np.array(OUT_xpixels_ordered)

    else:
        return OUT_xpixels


################################################# (2) HELPER FOR DEPTH #################################################

def get_depthimage(IN_path):
    """
    Creates depth image based on pointcloud obtained from step1_capture.py.
    
    Args:
        IN_path: path to the pointcloud stored as *.ply-file
        
    Returns:
        img: depth image with distance from pixel to sensor plane [m] stored as np.array
    """
    ## get pointcloud data
    pcd = o3d.io.read_point_cloud(IN_path)
    pcd = np.array(pcd.points)
    ## create image template
    img = np.zeros((cfg.HEIGHT_3D,cfg.WIDTH_3D))
    ## add points to image
    for x,y,z in pcd:
        ## convert to real coordinates
        px_y = (cfg.FOCAL_FACTOR/cfg.HEIGHT_2D*cfg.HEIGHT_3D) * y/z
        px_x = (cfg.FOCAL_FACTOR/cfg.WIDTH_2D*cfg.WIDTH_3D) * x/z
        ## shift offspring to
        px_y = int(np.rint(px_y +cfg.HEIGHT_3D/2 -0.5))
        px_x = int(np.rint(px_x +cfg.WIDTH_3D/2 -0.5))
        ## assign to image array
        img[px_y, px_x] = z
    ## output
    return img

    
#################################################### (3) INTERFACES ####################################################

def get_skeletons(IN_masks):
    """
    Calls the previously defined helper functions to extract the center line of a cable. 
    
    Args:
        IN_masks: merged image (3d resolution) of a scenes' object masks
    
    Returns:
        OUT_skeletons_all: images in which value 0 refers to a non-cable pixel, value 1 refers to skeleton pixels of the 1st cable, value 2 refers to skeleton pixels of the 2nd cable, ...
        OUT_skeletons_individual: list of images each containing a single skeleton of the scene (background=0, skeleton=1)
        OUT_coordinates_individual: list of lists each containig the ordered pixel coordinates [yx] of a cable's skeleton
    """
    OUT_skeletons_all = np.zeros(IN_masks.shape, dtype=np.int8)-1
    OUT_raw = np.zeros(IN_masks.shape, dtype=np.uint8)
    OUT_skeletons_individual = list()
    OUT_coordinates_individual = list()
    for i in range(IN_masks.max()+1):
        try:
            ## extract mask
            mask = (IN_masks==i).astype('uint8')
            ## get skeleton
            skeleton = morphology.skeletonize(mask, method='lee')
            OUT_raw[skeleton==1] = i+cfg.GRAYSHADE_OFFSET_VISUALIZATION
            xpixels_unordered = get_skeletonpixels(skeleton, IN_ordered=False)
            ## remove unwanted branches of skeleton (e.g. due to low mask quality)
            skeleton_unbranched = unbranch_skeleton(skeleton)
            ## repair disrupted skeleton (e.g. due to intersections)
            skeleton_connected = connect_skeletons(skeleton_unbranched)
            xpixels_ordered_connected = get_skeletonpixels(skeleton_connected, IN_ordered=True)
            xvalids_ordered = np.array([np.any(np.logical_and(y==xpixels_unordered[:,0], x==xpixels_unordered[:,1]))
                                        for y,x in xpixels_ordered_connected])
            xpixels_ordered = xpixels_ordered_connected[xvalids_ordered]
            ## output
            OUT_skeletons_all[skeleton_connected!=0] = i
            OUT_skeletons_individual.append(skeleton_connected)
            OUT_coordinates_individual.append(xpixels_ordered)
        except Exception as e:
            continue  # skip cable if algorithm raises an error
    ## output
        cv2.imwrite(cfg.PATHS['visu_skeletons_raw'], OUT_raw)
    return OUT_skeletons_all, OUT_skeletons_individual, OUT_coordinates_individual


def get_grasppoints_DLO(IN_mask, IN_skeletons, IN_coordinates, IN_confidence):                                          # !TODO unify loop of 1st & 2nd part (sync iterated cables)
    '''
    First part finds best grasp point of each cable, second part ranks cables according to their graspability.

    Args:
        ...

    Returns:
        ...
    '''
    ### init
    conf = cv2.imread(IN_confidence, cv2.IMREAD_GRAYSCALE)
    conf = cv2.resize(conf, (cfg.WIDTH_2D, cfg.HEIGHT_2D), interpolation=cv2.INTER_LINEAR)
    n_skeletons = len(IN_coordinates)
    n_cablemasks = np.max(IN_mask+1)
    grayshades_mask = np.unique(IN_mask).astype(np.uint8)[1:]
    grayshades_skeletons = np.unique(IN_skeletons).astype(np.uint8)[1:]
    grayshades_failed_skeletonization = grayshades_mask[~np.isin(grayshades_mask,grayshades_skeletons)]
    ### (part 1) identify preferred grasp point per cable (via mask_collision, depth_confidence and distance_to_centroid)
    best_gps = list()
    secure_gps = list()
    for i1 in range(n_skeletons):
        ## sample n evenly spaced potential grasp point candidates along skeleton (excluding first and last quarter of skeleton)
        len_cable = len(IN_coordinates[i1])
        pct_candidates = np.linspace(0.25, 0.75, num=cfg.N_CANDIDATES)
        idx_candidates = (pct_candidates*len_cable).astype(np.uint)
        coords_candidates = IN_coordinates[i1][idx_candidates]
        ## make sure to map the correct mask to the iterated skeleton (indices might differ if any skeletonization fails) (np.unique(IN_skeletons)[1:][i1])
        i_skeleton = grayshades_skeletons[i1]
        grayshades, counts = np.unique((IN_skeletons==i_skeleton)*(IN_mask+1), return_counts=True)
        grayshades, counts = grayshades[1:]-1, counts[1:]
        i_cable = grayshades[np.argmax(counts)]
        ## 1st & 3nd criteria: potential collision of gripper with another cable & depth confidence of grasp point
        mask_otherCables = np.logical_and(IN_mask!=-1, IN_mask!=i_cable)
        is_colliding = list()
        is_inconfident = list()
        is_onshortsegment = list()
        for yx_cand in coords_candidates:
            ## 1st criteria: potential collision of gripper with another cable
            zeros = np.zeros(IN_mask.shape, dtype=np.uint8)
            mask_circular = cv2.circle(zeros, (yx_cand[1],yx_cand[0]), cfg.PIXELRADIUS_COLLISION, (255), -1)
            is_colliding.append(np.any(mask_circular*mask_otherCables))
            ## 3rd criteria: depth confidence of grasp point
            zeros = np.zeros(IN_mask.shape, dtype=np.uint8)
            mask_nearby = cv2.circle(zeros, (yx_cand[1],yx_cand[0]), cfg.PIXELRADIUS_CONFIDENCE, (1), -1)
            avg_confidence = np.sum(mask_nearby*conf) / np.sum(mask_nearby)
            is_inconfident.append(avg_confidence < cfg.THRESHOLD_CONFIDENCE)
        is_colliding = np.array(is_colliding, dtype=np.uint8)
        is_inconfident = np.array(is_inconfident, dtype=np.uint8)
        ## 2nd criteria: skeleton segment has minimum length 
        dist_to_previous_pixel = np.sum(np.sqrt(np.diff(IN_coordinates[i1], axis=0)**2), axis=1)
        idx_gaps = np.array([0]+ [jj for jj in np.arange(len_cable-1) if dist_to_previous_pixel[jj]>2] + [len_cable-1])
        for idx_cand in idx_candidates:
            idx_gap_higher = idx_gaps[np.nonzero((idx_gaps-idx_cand)>0)[0][0]]
            idx_gap_lower = idx_gaps[np.nonzero((idx_gaps-idx_cand)<0)[0][-1]]
            on_short = (idx_gap_higher - idx_gap_lower) < cfg.MIN_SEGMENT_LENGTH
            is_onshortsegment.append(on_short)
        is_onshortsegment = np.array(is_onshortsegment, dtype=np.uint8)
        # print(is_colliding, '\n', is_onshortsegment, idx_gaps, idx_candidates, '\n', is_inconfident, '\n')
        ## 4th criteria: closeness to centroid
        centroid = IN_coordinates[i1][int(len_cable/2)]
        dist2centroid = np.linalg.norm(coords_candidates-centroid, axis=1).astype(np.uint8)
        ## create criteria matrix where 1st_column=causes_collision, 2nd_column=on_short_skeleton_segment, 3rd_column=confidence_is_inacceptable and 4th_column=distance_to_centroid
        criteria_matrix = np.column_stack((is_colliding, is_onshortsegment, is_inconfident, dist2centroid))
        ## get order by sorting criteria matrix (asc.) by 1st (0=no_collision), then 2nd (0=on_long_segment), then 3rd (0=acceptable_confidence) & then 4th column (min_distance_to_centroid)
        gp_order = np.lexsort((criteria_matrix[:,3], criteria_matrix[:,2], criteria_matrix[:,1], criteria_matrix[:,0]))   # @lexsort: asc=arr[:,i], desc=arr[::-1,i]
        ## take best gp
        best_gp_idx = gp_order[0]
        ## find orientation of cable at best grasp point via line between skeleton pixels at idx=+-30 compared to grasp point idx
        idx_gp = idx_candidates[best_gp_idx]
        idx_earlier = int(max(idx_gp-30, 0))
        idx_later = int(min(idx_gp+30, len(IN_coordinates[i1])-1))
        y_earlier,x_earlier = IN_coordinates[i1][idx_earlier]
        y_later,x_later = IN_coordinates[i1][idx_later]
        ## orientation of cable [°]
        rz_cable = np.arctan2(y_earlier-y_later, x_earlier-x_later) * 180/np.pi
        ## orientation of gripper [°] is perpendicular to cable axis
        rz_gripper = rz_cable + 90
        ## make sure that orientation is specified between 90..270°
        if -180<=rz_gripper<=-90:
            rz_gripper += 360
        elif -90<rz_gripper<90:
            rz_gripper += 180
        elif rz_gripper<-180 or 270<rz_gripper:
            raise ValueError('Cable orientation out of boundaries.')
        ## add cable's grasp point to list of scene's grasp points
        best_gp = np.append(coords_candidates[best_gp_idx], rz_gripper)
        best_gps.append(best_gp)
        ## add information if grasp point is either colliding, on short segment or inconfident
        is_ungraspable = np.sum(criteria_matrix[best_gp_idx][:3])
        secure_gps.append(is_ungraspable==0)
    best_gps = np.array(best_gps)
    secure_gps = np.array(secure_gps)

    ### (part 2) identify preferred cable (via min. underpasses and min. overpasses)
    ## initialize intersection matrix (value 1: column_index is underneath row_index, therefore: sum(col)=col_is_n_times_underneath_another_cable)
    isect_matrix = np.zeros((n_cablemasks,n_cablemasks), dtype=np.uint8)
    for i2 in range(n_cablemasks):
        ## cable for which skeletonization failed
        if i2 in grayshades_failed_skeletonization:
            ## get coordinates of i2-iterated cable's mask (can be any cable with a mask)
            coords_mask_without_skel = np.argwhere(IN_mask==i2)
            for gsm in grayshades_skeletons:
                ## get coordinates of gsm-iterated cable's mask (can be any cable with a skeleton)
                coords_mask_othercable = np.argwhere(np.logical_and(IN_mask!=-1, IN_mask==gsm))
                ## check if any pixel of the i2-iterated cable's mask is very close to any pixel of the gsm-iterated cable's mask
                dists = spatial.distance.cdist(coords_mask_without_skel, coords_mask_othercable, 'euclidean')
                if np.any(dists < 5):
                    isect_matrix[gsm, i2] = 1
        ## cable for which skeletonization worked
        else:
            ## get all grayshades of the instance mask that are crossed by the iterated skeleton (temporarily add 1 to IN_mask to set background to 0)
            skeleton = IN_skeletons==i2
            grayshades, counts = np.unique(skeleton*(IN_mask+1), return_counts=True)
            ## remove background (grayshade=-1) from list of grayshades and their counts
            grayshades, counts = grayshades[1:]-1, counts[1:]
            ## identify grayshade of the instance mask that belongs to the iterated skeleton
            gs_skeleton = grayshades[np.argmax(counts)]
            ## identify grayshades of the instance mask that belong to cables that are above the iterated skeleton
            gs_unders = np.delete(grayshades, np.argmax(counts))
            ## add underpasses to isect_matrix
            for gs in gs_unders:
                isect_matrix[gs, i2] = 1
    ## create metric matrix where 1st column is n_underpass and 2nd column is n_overpass (and ignore/delete cables for which skeletonization failed)
    c_sum = np.sum(isect_matrix, axis=0)
    r_sum = np.sum(isect_matrix, axis=1)
    c_sum = np.delete(c_sum, grayshades_failed_skeletonization)
    r_sum = np.delete(r_sum, grayshades_failed_skeletonization)
    metric_matrix = np.column_stack((c_sum, r_sum))
    ## get order by sorting metric matrix by 1st column (asc. --> min_underpass), then by 2nd column (asc. --> min_overpass)
    # cable_order = np.lexsort((metric_matrix[:,1], metric_matrix[:,0]))      # TODO @jonas: min_underpass -> min_overpass
    cable_order = np.lexsort((metric_matrix[::-1,1], metric_matrix[:,0]))   # TODO @jonas: min_underpass -> max_overpass
    ## eliminate insecure grasp points
    # print(best_gps, cable_order, secure_gps, sep='\n')
    best_gps = best_gps[secure_gps]
    cable_order = cable_order[secure_gps]
    ### output
    return best_gps, cable_order


def get_depth(IN_gp_coordinates, IN_semantic_mask, IN_path_pcl, IN_path_confidence):
    """
    Returns depth value for the provided grasp coordinates based on a circular filter kernel applied to the depth image.
    
    Args:
        IN_gp_coordinates: yxrz-coordinates [px,px,°] of a grasp point
        IN_semantic_mask: semantic mask where value -1=background, 0=Cable1, 1=Cable2, ... stored as np.array
        IN_path_pcl: path from project's top-level to pointcloud stored as *.ply-file
        IN_path_confidence: path from project's top-level to confidence image
        
    Returns:
        OUT_depth: depth value [m] for a given grasp point [px]
    """
    ## get depth image
    img_depth = get_depthimage(IN_path_pcl)
    img_depth = cv2.resize(img_depth, (cfg.WIDTH_2D,cfg.HEIGHT_2D))
    ## get confidence image (quantifies quality of pixels in captured depth image)
    img_conf = cv2.imread(IN_path_confidence, 0) / 255
    img_conf = cv2.resize(img_conf, (cfg.WIDTH_2D,cfg.HEIGHT_2D))
    ## get pixel coordinates of grasp point (convenience variables)
    y,x,_ = np.array(IN_gp_coordinates).astype(int)
    ## get binary mask from semantic mask
    id_mask = IN_semantic_mask[y,x]
    mask_binary = (IN_semantic_mask==id_mask).astype(int)
    ## reduce binary mask to circle around grasp point
    mask_gp = np.zeros((cfg.HEIGHT_2D,cfg.WIDTH_2D), int)
    mask_gp[y,x] = 1
    mask_distances = ndimage.distance_transform_edt(~mask_gp.astype(bool))
    mask_binary[mask_distances>cfg.KERNEL_SIZE] = 0
    n_maskedpixels = np.sum(mask_binary)
    ## get 1st weights (high weight if close to grasp point / zero if not on mask)
    weights_dist = mask_distances * mask_binary
    weights_dist = weights_dist.max() - weights_dist
    weights_dist = weights_dist * mask_binary
    ## get 2nd weights (weight of pixel = confidence value of pixel / zero if not on mask)
    weights_conf = img_conf * mask_binary
    ## apply weights on depth values
    # depths_weighted = img_depth
    # depths_weighted = depths_weighted * weights_dist * n_maskedpixels/weights_dist.sum()
    # depths_weighted = depths_weighted * weights_conf * n_maskedpixels/weights_conf.sum()
    depths_weighted = img_depth * mask_binary  #! TODO improve & use above
    ## output & debug
    depths_weighted[depths_weighted==0] = np.NaN
    OUT_depth = np.nanmean(depths_weighted)

    # print()                                                                                                                       # !TODO remove
    # print('----- kernel depths:')
    # u, c = np.unique(depths_weighted, return_counts=True)
    # for i in range(len(u)):
    #     print(f'{c[i]:7d}: {u[i]:.5f}')
    # # print('----- kernel depths: ', print(dict(zip(u, c))))
    # print()
    # print('----- single depth: ', img_depth[y,x])
    # print('----- filter depth: ', OUT_depth)
    # print()

    return OUT_depth
    

################################################## ARCHIVE ##################################################

def get_grasppoints_DLO_old(IN_coordinates_skeletons):  # used until 2023-05-04
    """
    Roughly estimates suitable grasp points based on the provided cable skeleton coordinates for a pneumatic/jaw gripper
    
    Args:
        IN_coordinates_skeletons: list of N lists with coordinates of skeleton pixels of N cables
                                  [[ [y00,x00], [y01,x01], ... ],
                                   [ [y10,x10], [y11,x11], ... ],
                                   ...
                                   [ [yN0,xN0], [yN1,xN1], ... ] ]

    Returns:
        OUT_coordinates_grasppoints: yx-coordinates [px] of grasp point and rz-orientation [°] of the gripper
        OUT_metrics_grasppoints: (Nx3)-array containing metrics evaluating the N grasp points of N detected cables
            1st column = 1st metric = number of skeleton's interruptions (due to bad segmentation or overlapping cable)
            2nd column = 2nd metric = min. distance from grasp point to next skeleton (small value indicates overlapped/nearby cable)
            3rd column = 3rd metric = length of skeleton (assuming short skeletons as a result of a bad segmentation)
        OUT_order: order of grasp points
    """
    OUT_coordinates_grasppoints = list()
    OUT_metrics_grasppoints = list()
    ## iterate over skeletons of scene
    for i,skeleton in enumerate(IN_coordinates_skeletons):
        try:
            ### coordinates
            ## choose center point of skeleton as grasp point
            idx_grasppoint = int(len(skeleton)/2)
            y_grasppoint, x_grasppoint = skeleton[idx_grasppoint]
            ## find orientation of cable via skeleton pixels at idx=+-30 compared to grasp point idx
            idx0 = max(idx_grasppoint-30, 0)
            idx1 = min(idx_grasppoint+30, len(skeleton)-1)
            y0,x0 = skeleton[idx0]
            y1,x1 = skeleton[idx1]
            ## orientation of cable [°]
            rz_cable = np.arctan2(y0-y1, x0-x1) * 180/np.pi
            ## orientation of gripper [°] is perpendicular to cable axis
            rz_gripper = rz_cable + 90
            ## make sure that orientation is specified between 90..270°
            if -180<=rz_gripper<=-90:
                rz_gripper += 360
            elif -90<rz_gripper<90:
                rz_gripper += 180
            elif rz_gripper<-180 or 270<rz_gripper:
                raise ValueError('Cable orientation out of boundaries.')
            ### 1st metric: number of interruptions of skeleton (due to bad segmentation or overlap of another cable)
            ## eucl. distance between consecutive skeleton pixels
            dists = np.linalg.norm(np.diff(skeleton, axis=0), axis=1)
            ## check how many distances are bigger than the max. eucl. distance of two neighboring pixels (=1.414)
            n_interruptions = np.sum(dists > 1.5)
            n_interruptions = np.sum(dists > 5)                                                                                         # !TODO better/different calculation, e.g. how many foreign pixels is skeleton crossing
            ### 2nd metric: distance between grasp point and nearest skeleton of another cable
            ## convenience variable
            skels = IN_coordinates_skeletons
            ## min. distances between current grasp point and closest pixels of other skeletons
            min_dists = [np.min(np.linalg.norm(skeleton[idx_grasppoint]-skel, axis=1)) for skel in skels[:i]+skels[i+1:]]
            ## min. distance to any of the other skeletons serves as metric, rounded to integer value for better readability
            if min_dists:
                min_dist = np.min(min_dists)
                min_dist = np.rint(min_dist).astype(int)
            else:
                ## if only one cable left -> min_dists is an empty list -> set min_dist to any value
                min_dist = 0
            ### 3rd metric: length of skeleton (assuming short skeletons in case of a bad segmentation)
            length = len(skeleton)
            ### output
            OUT_coordinates_grasppoints.append([y_grasppoint, x_grasppoint, rz_gripper])
            OUT_metrics_grasppoints.append([n_interruptions, min_dist, length])
        except:
            continue  # skip cable if algorithm throws an error
    OUT_coordinates_grasppoints = np.array(OUT_coordinates_grasppoints)
    OUT_metrics_grasppoints = np.array(OUT_metrics_grasppoints)
    ## get order by sorting metrics-array by 1st column (asc.), then by 2nd column (desc.), then by 3rd column (desc.)
    OUT_order = np.lexsort((-OUT_metrics_grasppoints[:,2], -OUT_metrics_grasppoints[:,1], OUT_metrics_grasppoints[:,0]))
    return OUT_coordinates_grasppoints, OUT_order


def get_grasppoints_DLO_withdebug(IN_mask, IN_skeletons, IN_coordinates, IN_confidence):
    '''
    abc
    '''
    # IN_coordinates[1], IN_coordinates[3] = IN_coordinates[3], IN_coordinates[1] ##################################################
    # IN_skeletons[IN_skeletons==1] = 10 ##################################################
    # IN_skeletons[IN_skeletons==3] = 1 ##################################################
    # IN_skeletons[IN_skeletons==10] = 3 ##################################################
    ### init
    conf = cv2.imread(IN_confidence, cv2.IMREAD_GRAYSCALE)
    conf = cv2.resize(conf, (cfg.WIDTH_2D, cfg.HEIGHT_2D), interpolation=cv2.INTER_LINEAR)
    n_cables = len(IN_coordinates)
    ### identify preferred cable (via min. underpasses and min. overpasses)                                                                             # !TODO add 3rd metric
    ## initialize intersection matrix (value 1: column_index is underneath row_index, therefore: sum(col)=col_is_n_times_underneath_another_cable)
    isect_matrix = np.zeros((n_cables,n_cables), dtype=np.uint8)
    # print(np.unique(IN_mask)) ##################################################
    # print(np.unique(IN_skeletons)) ##################################################
    # print() ##################################################
    for i in range(n_cables):
        ## get all grayshades of the instance mask that are crossed by the iterated skeleton (temporarily add 1 to IN_mask to set background to 0)
        skeleton = IN_skeletons==i
        grayshades, counts = np.unique(skeleton*(IN_mask+1), return_counts=True)
        ## remove background (grayshade=-1) from list of grayshades
        grayshades, counts = grayshades[1:]-1, counts[1:]
        # print(f'\n{i}:\nshades: {grayshades}\ncounts: {counts}') ##################################################
        ## identify grayshade of the instance mask that belongs to the iterated skeleton
        gs_skeleton = grayshades[np.argmax(counts)]
        ## identify grayshades of the instance mask that belong to cables that are above the iterated skeleton
        gs_unders = np.delete(grayshades, np.argmax(counts))
        # print(f'skel {gs_skeleton} is underneath {gs_unders}') ##################################################
        ## add underpasses to isect_matrix
        for gs in gs_unders:
            isect_matrix[gs, i] = 1
    #     dbg = (IN_mask==i)*100 ##################################################
    #     dbg[IN_skeletons==i] = 200 ##################################################
    #     cv2.imwrite(f'data/___DEV{i}___.png', dbg) ##################################################
    # print(f'\n\nisect matrix (1=column_idx is underneath row_idx):\n{isect_matrix}') ##################################################
    ## create metric matrix where 1st column is n_underpass and 2nd column is n_overpass
    c_sum = np.sum(isect_matrix, axis=0)
    r_sum = np.sum(isect_matrix, axis=1)
    metric_matrix = np.column_stack((c_sum, r_sum))
    # print(metric_matrix) ##################################################
    ## get order by sorting metric matrix by 1st column (asc. --> min_underpass), then by 2nd column (asc. --> min_overpass)
    cable_order = np.lexsort((metric_matrix[:,1], metric_matrix[:,0]))
    # print('order: ', order) ##################################################

    ### identify preferred grasp point per cable (via mask_collision, distance_to_centroid and depth_confidence)
    best_gps = list()
    for i_cable in range(n_cables):
        n_candidates = 10                                                                                                   # !TODO set in config.py
        ## sample n evenly spaced potential grasp point candidates along skeleton (excluding first and last quarter of skeleton)
        len_cable = len(IN_coordinates[i_cable])
        pct_candidates = np.linspace(0.25, 0.75, num=n_candidates)
        idx_candidates = (pct_candidates*len_cable).astype(np.uint)
        coords_candidates = IN_coordinates[i_cable][idx_candidates]
        # print(f'len: {len_cable} --> idx: {idx_candidates}') ##################################################
        ## 1st & 2nd criteria: potential collision of gripper with another cable & depth confidence of grasp point 
        mask_otherCables = np.logical_and(IN_mask!=-1, IN_mask!=i_cable)                                                    # !TODO sync grayshade_mask with i_cable
        is_colliding = list()
        is_confident = list()
        # dbg = mask_otherCables.copy().astype(np.uint8) ##################################################
        # dbg[dbg!=0] = 100 ##################################################
        # dbg[IN_skeletons==i_cable] = 255 ##################################################
        for yx_cand in coords_candidates:
            ## 1st criteria: potential collision of gripper with another cable
            RADIUS_1 = 50                                                                                                     # !TODO measure & set in config.py
            zeros = np.zeros(IN_mask.shape, dtype=np.uint8)
            mask_circular = cv2.circle(zeros, (yx_cand[1],yx_cand[0]), RADIUS_1, (255), -1)
            is_colliding.append(np.any(mask_circular*mask_otherCables))
            # dbg = cv2.circle(dbg, (yx_cand[1],yx_cand[0]), RADIUS, (200), 1) ##################################################
            ## 2nd criteria: depth confidence of grasp point
            RADIUS_2 = 20                                                                                                     # !TODO measure & set in config.py
            CONF_LIMIT = 200                                                                                                    # !TODO set in conig.py
            zeros = np.zeros(IN_mask.shape, dtype=np.uint8)
            mask_nearby = cv2.circle(zeros, (yx_cand[1],yx_cand[0]), RADIUS_2, (1), -1)
            avg_confidence = np.sum(mask_nearby*conf) / np.sum(mask_nearby)
            is_confident.append(avg_confidence > CONF_LIMIT)
        is_colliding = np.array(is_colliding, dtype=np.uint8)
        is_confident = np.array(is_confident, dtype=np.uint8)
        # mask_circular[yx_cand[0],yx_cand[1]] = 0 ##################################################
        # cv2.imwrite('data/_DEMO_COLLISION.png', dbg) ##################################################
        ## 3rd criteria: closeness to centroid
        centroid = IN_coordinates[i_cable][int(len_cable/2)]
        dist2centroid = np.linalg.norm(coords_candidates-centroid, axis=1).astype(np.uint8)
        # dbg = mask_otherCables.copy().astype(np.uint8) ##################################################
        # dbg[dbg!=0] = 50 ##################################################
        # dbg[IN_skeletons==i_cable] = 150 ##################################################
        # for idbg,yx in enumerate(coords_candidates): ##################################################
        #     dbg[yx[0],yx[1]] = 255 ##################################################
        #     if is_colliding[idbg]: ##################################################
        #         dbg = cv2.circle(dbg, (yx[1],yx[0]), RADIUS_1, (100), 1) ##################################################
        #     else: ##################################################
        #         dbg = cv2.circle(dbg, (yx[1],yx[0]), RADIUS_1, (50), 1) ##################################################
        # cv2.imwrite(f'data/_DEMO_GP_cable{i_cable}.png', dbg) ##################################################
        ## create criteria matrix where 1st_column=causes_collision, 2nd_column=confidence_is_acceptable and 3rd_column=distance_to_centroid
        criteria_matrix = np.column_stack((is_colliding, is_confident, dist2centroid))
        ## get order by sorting criteria matrix by 1st column (asc. --> 0=no_collision), then by 2nd column (desc. --> 1=acceptable_confidence), then by 3rd column (asc. --> min_distance_to_centroid)
        gp_order = np.lexsort((criteria_matrix[:,2], -criteria_matrix[:,1], criteria_matrix[:,0]))
        ## take best gp
        best_gp_idx = gp_order[0]
        ## find orientation of cable at best grasp point via line between skeleton pixels at idx=+-30 compared to grasp point idx
        idx_gp = idx_candidates[best_gp_idx]
        idx_earlier = int(max(idx_gp-30, 0))
        idx_later = int(min(idx_gp+30, len(IN_coordinates[i_cable])-1))
        y_earlier,x_earlier = IN_coordinates[i_cable][idx_earlier]
        y_later,x_later = IN_coordinates[i_cable][idx_later]
        ## orientation of cable [°]
        rz_cable = np.arctan2(y_earlier-y_later, x_earlier-x_later) * 180/np.pi
        ## orientation of gripper [°] is perpendicular to cable axis
        rz_gripper = rz_cable + 90
        ## make sure that orientation is specified between 90..270°
        if -180<=rz_gripper<=-90:
            rz_gripper += 360
        elif -90<rz_gripper<90:
            rz_gripper += 180
        elif rz_gripper<-180 or 270<rz_gripper:
            raise ValueError('Cable orientation out of boundaries.')
        ## add cable's grasp point to list of scene's grasp points
        best_gp = np.append(coords_candidates[best_gp_idx], rz_gripper) 
        best_gps.append(best_gp)
    best_gps = np.array(best_gps)
    # dbg = (IN_mask.copy()+1).astype(np.uint8) ##################################################
    # for i,gs in enumerate(np.unique(dbg)): ##################################################
    #     dbg[dbg==gs] = i*33 ##################################################
    # for i,gp in enumerate(best_gps[cable_order]): ##################################################
    #     dbg = cv2.circle(dbg, (int(gp[1]),int(gp[0])), 25-i*5, (255), -1) ##################################################
    # cv2.imwrite(f'data/_DEMO_FINALGP.png', dbg) ##################################################
    return best_gps, cable_order
