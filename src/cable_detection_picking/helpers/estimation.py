import cv2
import numpy as np
import open3d as o3d
import skimage.morphology as morphology
from glob import glob
from scipy import signal
from scipy import spatial
from scipy import ndimage
from scipy.ndimage import convolve
import config as cfg
import time
import open3d as o3d
import math
import networkx
import matplotlib.pyplot as plt
import traceback
from scipy.ndimage import label, convolve
import os.path


##################################################### (1) HELPERS ######################################################

def unbranch_skeleton(IN_skeleton):
    """
    Removes (due to intersections) small unwanted branches of skeleton and completely removes skeltons that can't be unbranched (e.g. skelotns with> 2 arms)

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
    if pixels_isc.size!=0: 
        #print(pixels_isc)
        intersection_num = pixels_isc.shape[0]
        #print(intersection_num)
        handeled_intersections = set()
        ## iterate endpoints except those two with maximum distance to each other
        branch_endpoints = pixels_end  # np.delete(pixels_end, [idx_ep1,idx_ep2], axis=0)
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
                    ## add intersection as handled/resolved
                    handeled_intersections.add(tuple(pixel_next[0]))
                    ## also add neighbouring intersections as handeled
                    for i in [-1,0+1]:
                        for j in [-1,0+1]:
                            if ((pixel_next+np.array([[i,j]]))==pixels_isc[:,None]).all(-1).any(-1).any(-1):
                                handeled_intersections.add(tuple(pixel_next[0]+np.array([i,j])))   
                elif endpoint_reached & (n_removals > 1) & (n_removals < 25): 
                    ## iteration reaches another endpoint of the skeleton
                    ##    n_removal>1:  pixel_iter at iter==1 is starting endpoint itself (-> endpoint_reached==True)
                    ##    n_removal<25: prevent deleting an entire (reasonable-sized) section of an interrupted skeleton
                    for y,x in np.array(pixels_to_remove):
                        OUT_skeleton[y,x] = 0
                    break
                elif n_removals > 35:
                    ## iterated over a long branch -> no removal
                    pixels_all = np.vstack((pixels_all,np.array(pixels_to_remove)))
                    break
                elif distance_iter2next > 5:
                    ## iteration jumped between branches / sections -> no removal
                    pixels_all = np.vstack((pixels_all,np.array(pixels_to_remove)))
                    break
        ## debugging
        # print(pixels_isc)
        # print(handeled_intersections)
        # print("handled "+str(len(handeled_intersections))+" of "+str(pixels_isc.shape[0])+" intersections")
        ## only save sekleton if all intersections are handeled:
        if len(handeled_intersections)!=pixels_isc.shape[0]:
            return None
    ## output
    return OUT_skeleton


def get_skeletonpixels(IN_skeleton, IN_ordered=False):
    """
    Extracts the pixel coordinates of skeleton pixels from an image. Offers the possibility to sort the coordinates along the center line such that the first and last point refer to the endpoints of the skeleton. 

    Args:
        IN_skeleton: image (3d resolution) of a cables' center line (=skeleton)
        IN_ordered: boolean variable that triggers the (time-consuming) sorting of the skeleton pixels (default: False)
    
    Returns:
        OUT_xpixels: (ordered) list of the skeletons' pixel coordinates.
        OUT_gaps: list of lists with coordinates for start- and enpoint of gap  
    """
    ## get skeleton's pixel coordinates
    OUT_xpixels = np.argwhere(IN_skeleton)
    ## order only if requested (time consuming)  
    if IN_ordered:           
        ## get distance matrix
        distances = spatial.distance.cdist(OUT_xpixels, OUT_xpixels, 'euclidean')
        dmax = distances.max()*2
        distances = distances + np.identity(len(OUT_xpixels))*dmax
        ## get endpoints
        n_neighbors = signal.convolve2d(IN_skeleton, np.ones((3,3), np.uint8), boundary='fill', mode='same')
        endpoints = np.argwhere((n_neighbors==2)*IN_skeleton)
        ## connect neighboring pixels starting from one endpoint
        endpoint_list=list(endpoints)
        OUT_xpixels_ordered = [endpoint_list.pop()]   
        OUT_gaps=[]     
        while True:
            ## find index of current endpoint
            ix_endpoint = np.argwhere(np.logical_and(OUT_xpixels[:,0]==OUT_xpixels_ordered[-1][0], OUT_xpixels[:,1]==OUT_xpixels_ordered[-1][1]))[0][0]
            ## if endpoint not reached --> add closest pixel to ordered list
            if distances[ix_endpoint].min() < 2:
                ## find index of nearest pixel
                ix_nearest = distances[ix_endpoint].argmin()
                ## manipulate pixel's row/col in distance matrix (to avoid repeated consideration) and append pixel to ordered list
                distances[:,ix_endpoint] = dmax
                distances[ix_endpoint,:] = dmax
                OUT_xpixels_ordered.append(OUT_xpixels[ix_nearest])
            ## if endpoint reached
            else:
                ## remove resolved endpoints
                for idx,ep in enumerate(endpoint_list.copy()):
                    if ep[0]==OUT_xpixels_ordered[-1][0] and ep[1]==OUT_xpixels_ordered[-1][1]:
                          endpoint_list.pop(idx)
                ## continue with closest unresolved endpoint
                if len(endpoint_list)>0:
                    ## find smallest endpoint distance
                    i_min = -1
                    j_min = -1
                    dist_min = float('inf')
                    for i,uEP in enumerate([OUT_xpixels_ordered[0],OUT_xpixels_ordered[-1]]):
                        for j,EP in enumerate(endpoint_list):
                            dist = np.sqrt(np.sum((uEP - EP) ** 2))
                            if dist<dist_min:
                                dist_min = dist
                                i_min = i
                                j_min = j
                    if i_min==0:
                        OUT_xpixels_ordered.reverse()
                    ## dave gap
                    gap_start = OUT_xpixels_ordered[-1]
                    OUT_xpixels_ordered.append(endpoint_list.pop(j_min))
                    gap_end = OUT_xpixels_ordered[-1]
                    OUT_gaps.append([gap_start,gap_end])
                else:
                    break                        
        return np.array(OUT_xpixels_ordered), OUT_gaps
    else:
        return OUT_xpixels, None


#################################################### (2) INTERFACES ####################################################

def get_skeletons(IN_masks, IN_cable_types):
    """
    Calls the previously defined helper functions to extract the center line of a cable. 
    
    Args:
        IN_masks: images in which value -1 refers to a non-cable pixel, value 0 refers to pixels of the 1st cable, value 1 refers to pixels of the 2nd cable, ...
    
    Returns:
        OUT_skeletons_all: images in which value -1 refers to a non-cable pixel, value 0 refers to skeleton pixels of the 1st cable, value 1 refers to skeleton pixels of the 2nd cable, ... 
            warning: if skeletons get removed the colors/values are not adjusted since the colors should match the IN_mask colors!
        OUT_skeletons_individual: list of images each containing a single skeleton of the scene (background=0, skeleton=1)
        OUT_coordinates_individual: list of lists each containig the ordered pixel coordinates [yx] of a cable's skeleton
        OUT_gaps: list of lists each containig the [yx] of the 2 Endpoints of a gap
        OUT_cable_types: list of cable_types
    """
    ## initialize outputs
    OUT_skeletons_all = np.zeros(IN_masks.shape, dtype=np.int8) - 1
    OUT_raw = np.zeros(IN_masks.shape, dtype=np.uint8)
    OUT_skeletons_individual = list()
    OUT_coordinates_individual = list()
    OUT_gaps = list()
    OUT_cable_types = list()
    ## iterate instances/cables
    for i in range(IN_masks.max()+1):
        try:
            ## extract mask
            mask = (IN_masks==i).astype('uint8')
            ## get skeleton
            skeleton = morphology.skeletonize(mask, method='lee')
            OUT_raw[skeleton==1] = i+cfg.GRAYSHADE_OFFSET_VISUALIZATION
            xpixels_unordered,_ = get_skeletonpixels(skeleton, IN_ordered=False)
            ## remove unwanted branches of skeleton (e.g. due to low mask quality)
            skeleton_unbranched = unbranch_skeleton(skeleton)
            ## skip/remove unfixed skeletons
            if skeleton_unbranched is None:
                continue
            skeleton_connected = skeleton_unbranched
            ## order skeleton pixels and find gaps
            xpixels_ordered_connected, gaps = get_skeletonpixels(skeleton_connected, IN_ordered=True)
            ## remove small/short skeletons
            if len(xpixels_ordered_connected) > cfg.MIN_SEGMENT_LENGTH:                
                xvalids_ordered = np.array([np.any(np.logical_and(y==xpixels_unordered[:,0], x==xpixels_unordered[:,1])) for y,x in xpixels_ordered_connected])
                xpixels_ordered = xpixels_ordered_connected[xvalids_ordered]
                ## output
                OUT_skeletons_all[skeleton_connected!=0] = i
                OUT_skeletons_individual.append(skeleton_connected)
                OUT_coordinates_individual.append(xpixels_ordered)
                OUT_gaps.append(gaps)
                if IN_cable_types is not None:
                    OUT_cable_types.append(IN_cable_types[i])
        ## skip cable if algorithm raises an error
        except Exception as e:
            traceback.print_exc()            
            continue  # skip cable if algorithm raises an error
        ## save image of raw skeletons (required only for debugging)
        # cv2.imwrite(cfg.PATHS['visu_skeletons_raw'], OUT_raw)
    ## ?
    if len(OUT_cable_types)==0:
            OUT_cable_types = None
    ## output
    return OUT_skeletons_all, OUT_skeletons_individual, OUT_coordinates_individual, OUT_gaps, OUT_cable_types

def get_grasppoints_DLO(IN_mask, IN_skeletons, IN_coordinates, IN_gaps, IN_cable_types):                                         
    '''                                                                                                                
    First part finds best grasp point of each cable, second part ranks cables according to their graspability.

    Args:
        IN_mask: images in which value -1 refers to a non-cable pixel, value 0 refers to pixels of the 1st cable, value 1 refers to pixels of the 2nd cable, ...
        IN_skeletons: images in which value -1 refers to a non-cable pixel, value 0 refers to skeleton pixels of the 1st cable, value 1 refers to skeleton pixels of the 2nd cable, ...
        IN_coordinates: list of lists each containig the ordered pixel coordinates [yx] of a cable's skeleton
        IN_gaps: list of lists each containig the [yx] of the 2 Endpoints of a gap
        IN_cable_types: list of cable_types

    Returns:
        best_gps, cable_order
        
        best_gps: list of best grasp point [y x angle] per cable
        cable_order: priority order of indices of best GPs
    '''
    ##################################################################################################################################################
    ###   PART 0   ### preparations                                                                                                                  #
    ##################################################################################################################################################

    ## deactivate runtime warning caused by division by 0 in np.reciproca (@priority2, mask_circular)
    np.seterr(divide='ignore')
    ## template
    grasp_options = np.zeros((cfg.ZIVID_HEIGHT_2D,cfg.ZIVID_WIDTH_2D,3), np.uint8)

    ###################################################################################################################### VISUALIZATION - START #####
    ## import
    v_output = np.zeros((cfg.ZIVID_HEIGHT_2D,cfg.ZIVID_WIDTH_2D,3), np.uint8)
    v_masks = np.copy(IN_mask)
    v_skeletons = np.copy(IN_skeletons)
    ## settings
    v_gs_mask = (100,100,100)
    v_thickness_skel = 3
    ## transform mask into gray binary mask
    v_output[v_masks!=-1] = v_gs_mask
    ## transform skeletons such that 0=background, 1=skeleton1, 2=skeleton2, ...
    v_skeletons = (v_skeletons+1).astype(np.uint8)
    ## make skeletons thicker
    v_skeletons = cv2.dilate(v_skeletons, np.ones((3,3), np.uint8), iterations=v_thickness_skel)
    ## get grayshades of skeletons (not 0, as 0=background)
    v_grayshades_skeletons = np.unique(v_skeletons)[1:]
    ## iterate skeletons
    for i,v_gs in enumerate(v_grayshades_skeletons):
        v_output[v_skeletons==v_gs] = cfg.RBG[i]
    ## masks
    vals = np.unique(IN_mask)
    for i,v in enumerate(vals[1:]):
        for v in range(np.max(IN_mask)+1):
            grasp_options[IN_mask==i] = cfg.RBG[i]
    ## skeletons
    for i,gs in enumerate(np.unique(IN_skeletons)[1:]):
                #print(np.unique(IN_skeletons))
                skel=IN_skeletons.copy().astype(np.uint8)
                skel[IN_skeletons!=gs]=0
                skel[IN_skeletons==gs]=1                
                skel_dil = cv2.dilate(skel, np.ones((3,3), np.uint8), iterations=3)
                grasp_options[skel_dil==1] = (255,255,  255)
    ## gaps           
    for j,gaps in enumerate(IN_gaps):
        for gapS,gapE in gaps:
            cv2.circle(grasp_options, tuple(gapS[::-1]), radius=3, color=(0,  0,  0), thickness=-1)
            cv2.circle(grasp_options, tuple(gapE[::-1]), radius=3, color=(0,  0,  0), thickness=-1)                                                         
    ###################################################################################################################### VISUALIZATION - END #######

    ## ??? throw error if coordinates do not match skeleton ???
    if len(IN_coordinates) != len(np.unique(IN_skeletons))-1:
        0 / 0
    ## count masks/skeletons
    n_skeletons = len(IN_coordinates)
    n_cablemasks = np.max(IN_mask+1)
    ## extract grayshades from mask/skeletons
    grayshades_mask = np.unique(IN_mask).astype(np.uint8)[1:]
    grayshades_skeletons = np.unique(IN_skeletons).astype(np.uint8)[1:]
    grayshades_failed_skeletonization = grayshades_mask[~np.isin(grayshades_mask,grayshades_skeletons)]

    ##################################################################################################################################################
    ###   PART 1   ### identify preferred grasp point per cable (via collision with intersection, distance to other masks, and distance_to_centroid) #
    ##################################################################################################################################################

    ## initialize output
    best_gps = list()

    ## init list for cables to exclude
    exclude_cables_idx = list()
    ## iterate skeletons
    for i1 in range(n_skeletons):
        len_cable = len(IN_coordinates[i1])

        ### CENTROID
        ## find center of gravity (=centroid) for HV cables (closer to end cap)
        if IN_cable_types is not None and IN_cable_types[i1]=="HV" and (cfg.POSTPROCESS_METRIC==1):
            ## find on which end the HV endcap is by calculating the diameter perpendicular to the cable at both ends
            ## 1st end
            endcap1_coord1 = IN_coordinates[i1][20]
            endcap1_coord2 = IN_coordinates[i1][30]
            vect = endcap1_coord1-endcap1_coord2
            vect_perp = np.array([-vect[1], vect[0]]).astype('float64') #perpendicular
            vect_perp /= np.sqrt(np.sum(vect_perp**2)) #normalize
            color = IN_mask[tuple(np.rint(endcap1_coord1).astype('int64'))]
            diameter1 = 1
            j = 1
            while True:
                diameter_before = diameter1
                if (IN_mask[tuple(np.rint(endcap1_coord1+j*vect_perp).astype('int64'))]==color).all():
                    diameter1 += 1
                if (IN_mask[tuple(np.rint(endcap1_coord1-j*vect_perp).astype('int64'))]==color).all():
                    diameter1 += 1
                if diameter1==diameter_before:
                    break
                j += 1
            ## 2nd end   
            endcap2_coord1 = IN_coordinates[i1][-20]
            endcap2_coord2 = IN_coordinates[i1][-30]
            vect = endcap2_coord1-endcap2_coord2
            vect_perp = np.array([-vect[1], vect[0]]).astype('float64') #perpendicular
            vect_perp /= np.sqrt(np.sum(vect_perp**2)) #normalize
            diameter2 = 1
            j = 1
            while True:
                diameter_before=diameter2
                if (IN_mask[tuple(np.rint(endcap2_coord1+j*vect_perp).astype('int64'))]==color).all():
                    diameter2 += 1
                if (IN_mask[tuple(np.rint(endcap2_coord1-j*vect_perp).astype('int64'))]==color).all():
                    diameter2 += 1
                if diameter2==diameter_before:
                    break
                j += 1
            ## locate endcap by comparing diameters at both ends   
            if diameter1>=2*diameter2:
                ## end cap at start --> centroid at cfg.HV_CENTROID
                idx_centroid=int(len_cable*cfg.HV_CENTROID)
                centroid = IN_coordinates[i1][idx_centroid]
            elif diameter2>=2*diameter1:
                ## end cap at end --> centroid at 1-cfg.HV_CENTROID
                idx_centroid=int(len_cable*(1-cfg.HV_CENTROID))
                centroid = IN_coordinates[i1][idx_centroid]
            else:
                ## no end cap found --> centroid at middle (50%)
                idx_centroid = int(len_cable*0.5)
                centroid = IN_coordinates[i1][idx_centroid]
        ## find center of gravity (=centroid) for all other DLOs (at middle)
        else:
            idx_centroid=int(len_cable*0.5)
            centroid = IN_coordinates[i1][idx_centroid]
        
        ### POTENTIAL GRASP POINTS
        ## find 10 evenly distributed potential grasppoints for HV cables (20..60 % on side with endcap)
        if (IN_cable_types is not None) and (IN_cable_types[i1] == "HV") and (cfg.POSTPROCESS_METRIC==1):
            if idx_centroid < int(len_cable*0.5):
                pct_candidates = np.linspace(0.20 if 0.20*len_cable>160 else 160/len_cable , 0.6 if (1-0.6)*len_cable>160 else (len_cable-160)/len_cable, num=cfg.N_CANDIDATES) #prevent GPs on the endcap
            elif idx_centroid > int(len_cable*0.5):
                pct_candidates = np.linspace(0.4 if 0.4*len_cable>160 else 160/len_cable , 0.8 if (1-0.8)*len_cable>160 else (len_cable-160)/len_cable, num=cfg.N_CANDIDATES) #prevent GPs on the endcap
            else:
                pct_candidates = np.linspace(0.25, 0.75, num=cfg.N_CANDIDATES)
        ## find 10 evenly distributed potential grasppoints for all other DLOs (40..60 %)
        else:
            pct_candidates = np.linspace(0.4, 0.6, num=cfg.N_CANDIDATES)
        
        ## format potential grasppoints
        idx_candidates = (pct_candidates*len_cable).astype(np.uint)
        idx_candidates = np.sort(idx_candidates)
        coords_candidates = IN_coordinates[i1][idx_candidates]

        ### MAP MASK TO SKELETON
        ## make sure to map the correct mask to the iterated skeleton (indices might differ if any skeletonization fails) (np.unique(IN_skeletons)[1:][i1])
        i_skeleton = grayshades_skeletons[i1]
        grayshades, counts = np.unique((IN_skeletons==i_skeleton)*(IN_mask+1), return_counts=True)
        grayshades, counts = grayshades[1:]-1, counts[1:]
        i_cable = grayshades[np.argmax(counts)]
        mask_otherCables = np.logical_and(IN_mask!=-1, IN_mask!=i_cable)
        
        ### 1st PRIORITY METRIC   (= collision, if distance from grasppoint candidate to gap is <=cfg.PIXELRADIUS_COLLISION)
        ## initialize
        is_colliding = np.zeros(coords_candidates.shape[0], dtype=np.uint8)
        ## check for each candidate if it is close tog ap and if the gap belongs to the same cable
        for i,yx_cand in enumerate(coords_candidates):
            bounding_box = [[cfg.IMAGE_BOX_EDGE, cfg.IMAGE_BOX_EDGE/2], [cfg.ZIVID_HEIGHT_2D-cfg.IMAGE_BOX_EDGE, cfg.ZIVID_WIDTH_2D-cfg.IMAGE_BOX_EDGE/2]]
            if not ((yx_cand>=bounding_box[0]).all() and (yx_cand<=bounding_box[1]).all()):
                is_colliding[i] = 1  # gripper would collide with box
                continue
            done = False
            for j,gaps in enumerate(IN_gaps):
                for gapS,gapE in gaps:
                    if np.linalg.norm(yx_cand-gapS) < cfg.PIXELRADIUS_COLLISION or np.linalg.norm(yx_cand-gapE) < cfg.PIXELRADIUS_COLLISION: #candidate close to gap
                        ## only set colliding=True if the gap belongs to the same cable
                        if j==i1:
                            ## gap in same cable
                            is_colliding[i] = 1
                            done = True
                            break
                        else:
                            ## check if gap is an overpass of the same cable (= mid of gap has color of same skeleton)
                            gap_mid = (0.5*gapS +0.5*gapE).astype(np.uint)
                            ## visualize
                            cv2.circle(grasp_options, tuple(gap_mid[::-1]), radius=3, color=(255,  0,255), thickness=-1)
                            mask_ = IN_mask.copy().astype(np.uint8)
                            ## calculate mask color/idx from i1 (adjust for deleted skeletons)
                            skeleton_idx = i1
                            for fail_idx in grayshades_failed_skeletonization:
                                if i1 >= fail_idx:
                                    skeleton_idx += 1
                            mask_[IN_mask!=skeleton_idx] = 0
                            mask_[IN_mask==skeleton_idx] = 1              
                            contains = mask_[int(gap_mid[0]),int(gap_mid[1])]
                            if contains==1:
                                ## overpass of same cable
                                is_colliding[i] = 1
                                done = True
                                break
                ## exit loop if gaps are processed
                if done:
                    break

        ### 2nd PRIORITY METRIC   (= weighted (1/distance) distance of all pixels of other masks in radius=cfg.PIXELRADIUS_COLLISION)
        ## initialize
        weightedCollisionDist = list()
        ## iterate grasppoint coordinates
        for yx_cand in coords_candidates:
            zeros = np.zeros(IN_mask.shape, dtype=np.uint8)
            ## save weight per pixel
            for i in range(cfg.PIXELRADIUS_COLLISION)[::-1]:
                mask_circular = cv2.circle(zeros, (yx_cand[1],yx_cand[0]), i+1, i+1, 2)            
            mask_circular = np.reciprocal(mask_circular.astype(np.float32))
            mask_circular[mask_circular>1.] = 0
            ## sum of weights per pixel that is in other mask
            weightedCollisionDist.append(np.sum(mask_circular*mask_otherCables))
        
        ### 3rd PRIORITY METRIC   (= distance to centroid/center of mass)
        ## initialize
        dist2centroid = np.zeros(is_colliding.shape)
        ## distance between grasppoint candidate and centroid 
        for i,idx_cand in enumerate(idx_candidates):
            dist2centroid[i] = np.absolute(idx_cand-idx_centroid)

        ### FIND BEST GRASPPOINT   (according to priority metrics) 
        ## format
        is_colliding = np.array(is_colliding, dtype=np.uint8)
        weightedCollisionDist = np.array(weightedCollisionDist)
        ## sort by priority metrics (is_colliding > weightedCollisionDist > dist2centroid)
        gp_order = np.lexsort((dist2centroid, weightedCollisionDist, is_colliding))
        ## take best gp
        if is_colliding.all():  # ignore cables that have only collision points
            best_gp_idx = np.NAN
        else:
            best_gp_idx = gp_order[0]

        ### PROCESS BEST GRASPPOINT
        ## find orientation of cable at best grasp point via line between skeleton pixels at idx=+-30 compared to grasp point idx
        if best_gp_idx is not np.NAN:
            idx_gp = idx_candidates[best_gp_idx]
            idx_earlier = int(max(idx_gp-30, 0))
            idx_later = int(min(idx_gp+30, len(IN_coordinates[i1])-1))
            y_earlier,x_earlier = IN_coordinates[i1][idx_earlier]
            y_later,x_later = IN_coordinates[i1][idx_later]

            ## orientation of cable [°]
            rz_cable = np.arctan2(y_earlier-y_later, x_earlier-x_later) * 180/np.pi
            ## orientation of gripper [°] is perpendicular to cable axis
            rz_gripper = rz_cable + 90
            ## make sure that orientation is specified between -90..90° 8see mapping in get_gripper_orientation_wrt_robot)            
            if -180<=rz_gripper<=-90:
                rz_gripper += 180
            elif 90<rz_gripper<180:
                rz_gripper -= 180
            elif 180<rz_gripper<270:
                rz_gripper -= 180
            elif rz_gripper<-180 or rz_gripper>270:
                raise ValueError('Cable orientation out of boundaries.')
            ## add cable's grasp point to list of scene's grasp points
            best_gp = np.append(coords_candidates[best_gp_idx], rz_gripper)
            best_gps.append(best_gp)


            ################################################################################################################## VISUALIZATION - START #####
            ## centroid
            cv2.circle(grasp_options, tuple(centroid[::-1].astype('int64')), radius=7, color=(  0,0,  0), thickness=-1)
            ## grasppoints in red (is_colliding), orange (weightedCollisionDist>0), blue (free of collisions)
            for i,candidate in enumerate(coords_candidates):
                if is_colliding[i]:
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=5, color=(0,  0,  255), thickness=-1)
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=cfg.PIXELRADIUS_COLLISION, color=(0,  0,  255), thickness=1)
                elif weightedCollisionDist[i] > 0:
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=5, color=(  0,120,  255), thickness=-1)
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=cfg.PIXELRADIUS_COLLISION, color=(0,120,  255), thickness=1)
                else:
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=5, color=(  255,0,  0), thickness=-1)
                    cv2.circle(grasp_options, tuple(candidate[::-1]), radius=cfg.PIXELRADIUS_COLLISION, color=(255,0,  0), thickness=1)
            ## iterate candidates
            for v_i,v_cand in enumerate(coords_candidates):
                ## 
                v_coordinates = tuple(v_cand[::-1])
                if v_i==best_gp_idx:
                    v_radius = 10
                    v_color_center = (  0,  0,  0)  # best gp: black
                    v_color_circle = (255,255,255)  # best gp: white
                elif is_colliding[v_i]:
                    v_radius = 7
                    v_color_center = (200,200,200)  # colliding: gray
                    v_color_circle = (  0,  0,255)  # colliding: red
                elif weightedCollisionDist[v_i] > 0:
                    v_radius = 7
                    v_color_center = (200,200,200)  # intermediate: gray
                    v_color_circle = (  0,120,255)  # intermediate: orange
                else:
                    v_radius = 7
                    v_color_center = (200,200,200)  # collision-free: gray
                    v_color_circle = (  0,255,  0)  # collision-free: green
                ## draw
                cv2.circle(v_output, v_coordinates, radius=v_radius,                  color=v_color_center, thickness=-1)
                cv2.circle(v_output, v_coordinates, radius=cfg.PIXELRADIUS_COLLISION, color=v_color_circle, thickness=1)
            ## export
            cv2.imwrite(cfg.PATHS['visu_graspsearch'], v_output)
            ################################################################################################################## VISUALIZATION - END #######
        else:
            exclude_cables_idx.append(i1)

    ##################################################################################################################################################
    ###   PART 2   ### identify preferred cable (via min. underpasses and min. overpasses)                                                           #                                                          
    ##################################################################################################################################################
    
    ## initialize variables
    gap_num = list()                                    # number of gaps per cable
    length = list()                                     # length per cable
    length_cutoff = list()                              # is cable > length cutoff  [unused]
    underpass = np.zeros(len(IN_gaps), dtype=np.int8)   # number of underpasses per cable
    overpass = np.zeros(n_cablemasks, dtype=np.int8)    # number of overpasses per cable
    ## find for each gap if it is also an under-/overpass
    for i,gaps in enumerate(IN_gaps):
        len_coords=len(IN_coordinates[i])
        length.append(len_coords)
        if len_coords>=550:
            length_cutoff.append(0)
        else:
            length_cutoff.append(1)
        gap_num.append(len(gaps))
        for gap in gaps:             
            gap_coords=[0.5*(gap[0]+gap[1])]
            for coord in gap_coords: 
                color = IN_mask[int(coord[0]),int(coord[1])]
                ## if middlepoint of gap is not background --> add under- and overpass to corresponding cables
                if color!=-1:
                    overpass[color] += 1 
                    underpass[i] += 1 
    ## format/finish priority metrics
    length = np.array(length)
    length_cutoff = np.array(length_cutoff)
    overpass = np.delete(overpass, grayshades_failed_skeletonization)
    gap_num = np.array(gap_num)
    ## sort best GPs by priority: min underpass, min gap, max overpass, max length
    if cfg.POSTPROCESS_METRIC == 1:
        cable_order = np.lexsort((-length, -overpass, gap_num, underpass)) 
    else:
        cable_order = np.argsort(-length)
    ## format output from part 1
    ## remove all cables that have no valid grasp points
    for i, idx in enumerate(exclude_cables_idx):
        del_idx = np.argwhere(cable_order==idx)
        cable_order = np.delete(cable_order, del_idx)
    cable_order = np.argsort(cable_order)
    ## output
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
    ## get depth image (only if it has not already been processed)
    start_time = time.time()
    if os.path.isfile(cfg.PATHS['depth_image']):
        img_depth = np.load(cfg.PATHS['depth_image'])['img']
    else:
        img_depth = get_depthimage(IN_path_pcl)
    end_time = time.time()
    execution_time = end_time - start_time
    print(f"Execution time get_depthimage: {execution_time:.6f} seconds")
    
    img_depth = cv2.resize(img_depth, (cfg.ZIVID_WIDTH_2D,cfg.ZIVID_HEIGHT_2D))
    ## get confidence image (quantifies quality of pixels in captured depth image)
    img_conf = cv2.imread(IN_path_confidence, 0) / 255
    img_conf = cv2.resize(img_conf, (cfg.ZIVID_WIDTH_2D,cfg.ZIVID_HEIGHT_2D))
    ## get pixel coordinates of grasp point (convenience variables)
    y,x,_ = np.array(IN_gp_coordinates).astype(int)
    ## get binary mask from semantic mask
    id_mask = IN_semantic_mask[y,x]
    mask_binary = (IN_semantic_mask==id_mask).astype(int)
    ## reduce binary mask to circle around grasp point
    mask_gp = np.zeros((cfg.ZIVID_HEIGHT_2D,cfg.ZIVID_WIDTH_2D), int)
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
    depths_weighted[depths_weighted==0] = np.nan
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
        px_y = (cfg.FOCAL_FACTOR/cfg.ZIVID_HEIGHT_2D*cfg.HEIGHT_3D) * y/z
        px_x = (cfg.FOCAL_FACTOR/cfg.ZIVID_WIDTH_2D*cfg.WIDTH_3D) * x/z
        ## shift offspring to
        px_y = int(np.rint(px_y +cfg.HEIGHT_3D/2 -0.5))
        px_x = int(np.rint(px_x +cfg.WIDTH_3D/2 -0.5))
        ## assign to image array
        img[px_y, px_x] = z
    ## output
    np.savez_compressed(cfg.PATHS['depth_image'], img=img)
    return img


####################################################### SAM21 ########################################################
def get_skeletons_from_sam_masks2(seg_map, branch_length_threshold=50):
    """
    Extract separate skeletons from a segmentation map, prune small branches,
    and discard skeletons shorter than a given threshold. Only the longest skeleton
    is retained and returned.

    Parameters:
        seg_map (2D numpy array): The segmentation map with different pixel values for each semantic instance mask.
        branch_length_threshold (int): The threshold for pruning small branches and discarding short skeletons.

    Returns:
        skeleton_masks (list of 2D numpy arrays): List containing only the longest skeleton's binary mask.
        occupancy_grid (2D numpy array): A binary mask where 255 represents any pixel of the longest skeleton.
        skeleton_coords (list of tuples): List of coordinates (y, x) for the longest skeleton, starting at one endpoint.
    """

    # Kernel to count neighbors (8-connected)
    kernel = np.array([[1, 1, 1],
                       [1, 0, 1],
                       [1, 1, 1]])

    # Get unique labels (excluding 0, which is background)
    unique_labels = np.unique(seg_map)
    unique_labels = unique_labels[unique_labels > 0]

    # Initialize the list to hold each skeleton as a binary mask
    skeleton_masks = []

    # Initialize the occupancy grid (for combined skeletons)
    occupancy_grid = np.zeros_like(seg_map, dtype=np.uint8)

    # Dictionary to store skeletons and their lengths
    skeletons_with_length = []

    # Iterate through each unique label (i.e., each semantic instance)
    for label in unique_labels:
        # Extract the semantic mask for the current instance (i.e., binary mask for this label)
        instance_mask = (seg_map == label).astype(np.uint8)

        # Skeletonize the mask (convert to a 1-pixel thick skeleton)
        skeleton = morphology.skeletonize(instance_mask)  # Returns a binary skeleton (1-pixel thick)

        # Count neighbors for each pixel in the skeleton (to find endpoints and junctions)
        neighbor_count = convolve(skeleton.astype(int), kernel, mode='constant', cval=0)

        # Find endpoints: pixels with exactly one neighbor (a leaf node of the skeleton)
        endpoints = (skeleton & (neighbor_count == 1))

        # Initialize the modified skeleton (pruned version)
        pruned_skeleton = skeleton.copy()

        # Identify endpoints for the current skeleton
        skeleton_endpoints = np.argwhere(endpoints)

        # Iterate through each endpoint of the current skeleton
        for y, x in skeleton_endpoints:
            branch = [(y, x)]  # Start with the endpoint
            visited = set(branch)

            # Trace the branch from the endpoint
            while True:
                cy, cx = branch[-1]

                # Find neighbors of the current pixel
                neighbors = [(ny, nx) for ny in range(cy - 1, cy + 2)
                            for nx in range(cx - 1, cx + 2)
                            if (ny, nx) != (cy, cx) and (ny, nx) not in visited]

                # Check which neighbors are part of the skeleton
                skeleton_neighbors = [(ny, nx) for ny, nx in neighbors
                                      if 0 <= ny < skeleton.shape[0]
                                      and 0 <= nx < skeleton.shape[1]
                                      and skeleton[ny, nx]]

                # If no more skeleton neighbors, we've reached the branch's end
                if not skeleton_neighbors:
                    break

                # Add the first skeleton neighbor to the branch
                next_pixel = skeleton_neighbors[0]
                branch.append(next_pixel)
                visited.add(next_pixel)

                # Stop if we reach a junction (neighbor count > 2)
                if neighbor_count[next_pixel] > 2:
                    break

            # Prune the branch if it's too short
            if len(branch) < branch_length_threshold:
                len_counter = 0
                for py, px in branch:
                    if len_counter < len(branch):  # do not remove last pixel because it is on the main skeleton
                        len_counter+=1
                        pruned_skeleton[py, px] = 0  # Remove pixels of the small branch

        # Check the length of the pruned skeleton
        skeleton_length = np.sum(pruned_skeleton)

        # If the skeleton is long enough, store it with its length
        if skeleton_length >= branch_length_threshold:
            skeletons_with_length.append((pruned_skeleton, skeleton_length))

    # Now we choose the longest skeleton
    if not skeletons_with_length:
        return [], occupancy_grid, []  # No valid skeletons found

    # Find the skeleton with the maximum length
    longest_skeleton, _ = max(skeletons_with_length, key=lambda x: x[1])

    # Create a binary mask for the longest skeleton (255 for skeleton pixels)
    skeleton_mask = np.zeros_like(seg_map, dtype=np.uint8)
    skeleton_mask[longest_skeleton == 1] = 255  # Set pixels of the skeleton to 255
    skeleton_masks.append(skeleton_mask)

    # Update the occupancy grid (combine all skeletons)
    occupancy_grid[longest_skeleton == 1] = 255

    # Find the coordinates of the longest skeleton, starting from one endpoint
    skeleton_coords = []

    # Find the endpoints of the longest skeleton
    endpoints = np.argwhere(longest_skeleton == 1)
    endpoint_count = convolve(longest_skeleton.astype(int), kernel, mode='constant', cval=0)
    endpoints = [tuple(p) for p in endpoints if endpoint_count[p[0], p[1]] == 1]

    # If there are no endpoints, return empty list
    if not endpoints:
        return skeleton_masks, occupancy_grid, []

    # Start from the first endpoint (choose the first one)
    start_point = endpoints[0]
    skeleton_coords.append(start_point)

    # Trace the skeleton from this endpoint
    visited = set(skeleton_coords)
    current_point = start_point

    while True:
        cy, cx = current_point
        neighbors = [(ny, nx) for ny in range(cy - 1, cy + 2)
                    for nx in range(cx - 1, cx + 2)
                    if (ny, nx) != (cy, cx) and (ny, nx) not in visited]

        # Check which neighbors are part of the skeleton
        skeleton_neighbors = [(ny, nx) for ny, nx in neighbors
                              if 0 <= ny < longest_skeleton.shape[0]
                              and 0 <= nx < longest_skeleton.shape[1]
                              and longest_skeleton[ny, nx]]

        if not skeleton_neighbors:
            break  # No more connected points, end of the skeleton

        # Add the first skeleton neighbor to the list
        next_pixel = skeleton_neighbors[0]
        skeleton_coords.append(next_pixel)
        visited.add(next_pixel)

        # Move to the next point
        current_point = next_pixel

    return skeleton_masks, occupancy_grid, skeleton_coords


def get_skeletons_from_sam_masks3(seg_map, branch_length_threshold=50):
    """
    Extract separate skeletons from a segmentation map, prune small branches,
    remove excessive branches while preserving connectivity, and discard skeletons
    shorter than a given threshold. Only the longest skeleton is retained.

    Parameters:
        seg_map (2D numpy array): The segmentation map with different pixel values for each semantic instance mask.
        branch_length_threshold (int): The threshold for pruning small branches and discarding short skeletons.

    Returns:
        skeletons_sam (list of numpy arrays): List containing coordinates of each skeleton's pixels (sorted).
        skeleton_masks (list of 2D numpy arrays): List containing the longest skeleton's binary mask.
        occupancy_grid (2D numpy array): A binary mask where 255 represents any pixel of the longest skeleton.
    """

    # Kernel to count neighbors (8-connected)
    kernel = np.array([[1, 1, 1],
                       [1, 0, 1],
                       [1, 1, 1]])

    # Get unique labels (excluding 0, which is background)
    unique_labels = np.unique(seg_map)
    unique_labels = unique_labels[unique_labels > 0]

    # Initialize the list to hold skeleton coordinates
    skeletons_sam = []

    # Initialize the occupancy grid (for combined skeletons)
    occupancy_grid = np.zeros_like(seg_map, dtype=np.uint8)

    # Dictionary to store skeletons and their lengths
    skeletons_with_length = []

    # Iterate through each unique label (i.e., each semantic instance)
    for label in unique_labels:
        # Extract the semantic mask for the current instance (i.e., binary mask for this label)
        instance_mask = (seg_map == label).astype(np.uint8)

        # Skeletonize the mask (convert to a 1-pixel thick skeleton)
        skeleton = morphology.skeletonize(instance_mask)  # Returns a binary skeleton (1-pixel thick)

        # Count neighbors for each pixel in the skeleton (to find endpoints and junctions)
        neighbor_count = convolve(skeleton.astype(int), kernel, mode='constant', cval=0)

        # Keep only pixels that have 1 or 2 neighbors (valid skeleton pixels)
        valid_skeleton = (neighbor_count == 1) | (neighbor_count == 2)
        pruned_skeleton = skeleton * valid_skeleton  # Remove pixels that have more than 2 neighbors

        # Find the length of the skeleton after pruning
        skeleton_length = np.sum(pruned_skeleton)

        # If the skeleton is long enough, store it with its length
        if skeleton_length >= branch_length_threshold:
            skeletons_with_length.append((pruned_skeleton, skeleton_length))

    # Now we choose the longest skeleton
    if not skeletons_with_length:
        return [], occupancy_grid, []  # No valid skeletons found

    # Find the skeleton with the maximum length
    longest_skeleton, _ = max(skeletons_with_length, key=lambda x: x[1])

    # We now need to remove excessive branches (pixels with more than 2 neighbors)
    # but ensure connectivity is preserved

    # Function to check if a pixel is part of the main connected skeleton
    def is_connected_after_removal(skeleton, y, x, neighbor_count):
        """
        Check if the skeleton remains connected after removing the pixel (y, x).
        """
        # Temporarily remove the pixel
        skeleton_copy = skeleton.copy()
        skeleton_copy[y, x] = 0

        # Check if the skeleton is still connected by doing a flood fill or connected components check
        labeled, num_features = label(skeleton_copy)
        return num_features == 1  # Only one connected component should remain

    # Prune excessive branches while preserving connectivity
    for y, x in zip(*np.where(longest_skeleton == 1)):
        # Skip if pixel has 1 or 2 neighbors (valid skeleton pixel)
        if neighbor_count[y, x] <= 2:
            continue

        # If the pixel has more than 2 neighbors, check if removing it still keeps the skeleton connected
        if not is_connected_after_removal(longest_skeleton, y, x, neighbor_count):
            # Keep the pixel if its removal disconnects the skeleton
            continue

        # Otherwise, remove the pixel
        longest_skeleton[y, x] = 0

    # Function to trace the skeleton from an endpoint
    def trace_skeleton_from_endpoint(skeleton, start_point):
        """Trace the skeleton from a given endpoint, returning the ordered list of coordinates."""
        visited = set()  # To track visited pixels
        path = []  # To store the trace path

        current = start_point
        path.append(current)
        visited.add(current)

        # Directions to move in 8-connected neighborhood
        directions = [(-1, 0), (1, 0), (0, -1), (0, 1), (-1, -1), (-1, 1), (1, -1), (1, 1)]

        while True:
            cy, cx = current
            neighbors = [(cy + dy, cx + dx) for dy, dx in directions if 0 <= cy + dy < skeleton.shape[0] and 0 <= cx + dx < skeleton.shape[1]]
            # Filter out already visited points and keep only skeleton pixels
            valid_neighbors = [(ny, nx) for ny, nx in neighbors if skeleton[ny, nx] == 1 and (ny, nx) not in visited]

            if not valid_neighbors:
                break  # No more valid neighbors, we have reached the other endpoint

            # Move to the next valid neighbor
            next_point = valid_neighbors[0]
            path.append(next_point)
            visited.add(next_point)
            current = next_point

        return path

    # Find the endpoints (pixels with only 1 neighbor)
    endpoints = np.argwhere(neighbor_count == 1)
    if len(endpoints) >= 2:
        # Start from the first endpoint
        start_point = tuple(endpoints[0])
        sorted_skeleton_path = trace_skeleton_from_endpoint(longest_skeleton, start_point)
    else:
        # If no endpoints, return empty
        sorted_skeleton_path = []

    # Append the coordinates of the longest skeleton to the list
    skeleton_coords_sorted = np.array(sorted_skeleton_path)

    skeletons_sam.append(skeleton_coords_sorted)

    # Create a binary mask for the longest skeleton (255 for skeleton pixels)
    skeleton_mask = np.zeros_like(seg_map, dtype=np.uint8)
    skeleton_mask[longest_skeleton == 1] = 255  # Set pixels of the skeleton to 255
    skeleton_masks = [skeleton_mask]

    # Update the occupancy grid (combine all skeletons)
    occupancy_grid[longest_skeleton == 1] = 255

    return skeleton_masks, occupancy_grid, skeletons_sam

#### not used because very slow due to graph building ####
def get_skeletons_from_sam_masks(seg_map):
    skeletons_sam = list()
    ## initialize outputs
    skeletons_occupancy = np.zeros(seg_map.shape, dtype=np.uint8)
    midpoint_list = list()
    for i in range(np.max(seg_map)):
        raw_skeleton = np.zeros(seg_map.shape, dtype=np.uint8)
        # get sam mask
        sam_mask = seg_map==i+1
        ## get skeleton
        skeleton = morphology.skeletonize(sam_mask, method='lee')

        # Convert skeleton to coordinates
        coords = np.transpose(np.nonzero(skeleton))

        # Graph erstellen
        G = networkx.Graph()
        for y, x in coords:
            neighbors = [(y + i, x + j) for i in [-1, 0, 1] for j in [-1, 0, 1] if not (i == 0 and j == 0)]
            for ny, nx in neighbors:
                if (ny, nx) in coords:
                    G.add_edge((y, x), (ny, nx))

        # Endpunkte finden und längsten Pfad berechnen (dieser Teil bleibt gleich)
        endpoints = [node for node, degree in G.degree() if degree == 1]
        if len(endpoints) >= 2:
            longest_path = []
            for start in endpoints:
                lengths = networkx.single_source_shortest_path_length(G, start)
                farthest_point, max_length = max(lengths.items(), key=lambda x: x[1])
                if max_length > len(longest_path):
                    longest_path = networkx.shortest_path(G, start, farthest_point)

            # Mittelpunkt des längsten Pfades berechnen
            mid_index = len(longest_path) // 2
            midpoint = longest_path[mid_index]  # Koordinaten des Mittelpunkts

            # Visualisierung des Mittelpunkts auf dem Skelett
            cleaned_skeleton = np.zeros_like(skeleton, dtype=np.uint8)
            for (y, x) in longest_path:
                cleaned_skeleton[y, x] = 255

            midpoint_list.append(midpoint)

            skeletons_occupancy[cleaned_skeleton==255] = 255  # assign value to occupancy grid
        
            ## append to others
            skeletons_sam.append(np.transpose(np.where(cleaned_skeleton == 255)).tolist())
        else:
            print("Did not find enough endpoints for path.")

    return skeletons_sam, skeletons_occupancy, midpoint_list


def save_gp_img(gp, save_path):
    """
    Plots coordinate system of grasping pose on rgb image and saves it.

    Args:
        gp: grasping point
        rgb_image: rgb image of the scene
    
    Returns:
        -
    """
    ## load rgb image
    rgb_image = cv2.imread(cfg.PATHS['image'])
    ## read grasp point
    y, x, z = gp
    ## prepare grasp point drawing
    arrow_length = 70 * (1 - 5*0.3)
    y_arrow_parallel = int(y + arrow_length * math.sin(math.pi*(z-90)/180))
    x_arrow_parallel = int(x + arrow_length * math.cos(math.pi*(z-90)/180))
    y_arrow_normal = int(y + arrow_length * math.sin(math.pi*(z-180)/180))
    x_arrow_normal = int(x + arrow_length * math.cos(math.pi*(z-180)/180))
    ## draw contour in black
    cv2.circle(rgb_image, (x.astype(int),y.astype(int)), radius=5, color=(0,0,0), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_parallel,y_arrow_parallel), color=(0,0,0), thickness=3+6)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_normal,y_arrow_normal), color=(0,0,0), thickness=3+6)
    ## draw grasp point in white white 
    cv2.circle(rgb_image, (x.astype(int),y.astype(int)), radius=5, color=(255,255,255), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_parallel,y_arrow_parallel), color=(255,255,255), thickness=3)
    cv2.arrowedLine(rgb_image, (x.astype(int),y.astype(int)), (x_arrow_normal,y_arrow_normal), color=(255,255,255), thickness=3)
    ## export
    cv2.imwrite(save_path, rgb_image)
    
def draw_gp_img(gp):
    """
    Draws grasp pose on RGB image and returns the image (without saving).
    """
    rgb_image = cv2.imread(cfg.PATHS['image'])
    y, x, z = gp

    arrow_length = 70 * (1 - 5*0.3)
    y_arrow_parallel = int(y + arrow_length * math.sin(math.pi*(z-90)/180))
    x_arrow_parallel = int(x + arrow_length * math.cos(math.pi*(z-90)/180))
    y_arrow_normal = int(y + arrow_length * math.sin(math.pi*(z-180)/180))
    x_arrow_normal = int(x + arrow_length * math.cos(math.pi*(z-180)/180))

    # draw black base
    cv2.circle(rgb_image, (x.astype(int), y.astype(int)), radius=5, color=(0, 0, 0), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int), y.astype(int)), (x_arrow_parallel, y_arrow_parallel), color=(0, 0, 0), thickness=9)
    cv2.arrowedLine(rgb_image, (x.astype(int), y.astype(int)), (x_arrow_normal, y_arrow_normal), color=(0, 0, 0), thickness=9)

    # draw white overlay
    cv2.circle(rgb_image, (x.astype(int), y.astype(int)), radius=5, color=(255, 255, 255), thickness=-1)
    cv2.arrowedLine(rgb_image, (x.astype(int), y.astype(int)), (x_arrow_parallel, y_arrow_parallel), color=(255, 255, 255), thickness=3)
    cv2.arrowedLine(rgb_image, (x.astype(int), y.astype(int)), (x_arrow_normal, y_arrow_normal), color=(255, 255, 255), thickness=3)

    return rgb_image


def get_grasp_pose(skeleton_coords):
    """

    """
    best_gp = list()

    ## bounding box for box with walls 
    bounding_box = [[cfg.IMAGE_BOX_EDGE, cfg.IMAGE_BOX_EDGE/2], [cfg.ZIVID_HEIGHT_2D-cfg.IMAGE_BOX_EDGE, cfg.ZIVID_WIDTH_2D-cfg.IMAGE_BOX_EDGE/2]]
    bb_y_min, bb_x_min = bounding_box[0]
    bb_y_max, bb_x_max = bounding_box[1]

    ## add the middle point first (preferred GP)
    mid_index = len(skeleton_coords) // 2
    pt_grasp = skeleton_coords[mid_index]
    if (bb_y_min <= pt_grasp[0] <= bb_y_max) and (bb_x_min <= pt_grasp[1] <= bb_x_max):
        x_earlier, y_earlier = skeleton_coords[mid_index-15]
        x_later, y_later = skeleton_coords[mid_index+15]

        rz_cable = np.arctan2(x_earlier-x_later, y_earlier-y_later) * 180/np.pi
        
        rz_gripper = rz_cable + 90
        
        if -180<=rz_gripper<=-90:
                rz_gripper += 180
        elif 90<rz_gripper<180:
            rz_gripper -= 180
        elif 180<rz_gripper<270:
            rz_gripper -= 180
        elif rz_gripper<-180 or rz_gripper>270:
            raise ValueError('Cable orientation out of boundaries.')
        best_gp.append(np.append(pt_grasp, rz_gripper))
        return best_gp
    else:  # if mid point is not a valid grasp point, try other points
        print("Middle point not graspable -> Search other grasp point")
        for idx in range(int(len(skeleton_coords)*0.5), int(len(skeleton_coords)*0.8)):
            pt_grasp = skeleton_coords[idx]
            if (bb_y_min <= pt_grasp[0] <= bb_y_max) and (bb_x_min <= pt_grasp[1] <= bb_x_max):
                x_earlier, y_earlier = skeleton_coords[idx-15]
                x_later, y_later = skeleton_coords[idx+15]

                ## orientation of cable [°]
                rz_cable = np.arctan2(x_earlier-x_later, y_earlier-y_later) * 180/np.pi
                ## orientation of gripper [°] is perpendicular to cable axis
                rz_gripper = rz_cable + 90
                ## make sure that orientation is specified between 90..270°
                if -180<=rz_gripper<=-90:
                    rz_gripper += 180
                elif 90<rz_gripper<180:
                    rz_gripper -= 180
                elif 180<rz_gripper<270:
                    rz_gripper -= 180
                elif rz_gripper<-180 or rz_gripper>270:
                    raise ValueError('Cable orientation out of boundaries.')
                best_gp.append(np.append(pt_grasp, rz_gripper))
                return best_gp
        for idx in range(int(len(skeleton_coords)*0.5), int(len(skeleton_coords)*0.2), -1):
            pt_grasp = skeleton_coords[idx]
            if (bb_y_min <= pt_grasp[0] <= bb_y_max) and (bb_x_min <= pt_grasp[1] <= bb_x_max):
                x_earlier, y_earlier = skeleton_coords[idx-15]
                x_later, y_later = skeleton_coords[idx+15]

                ## orientation of cable [°]
                rz_cable = np.arctan2(x_earlier-x_later, y_earlier-y_later) * 180/np.pi
                ## orientation of gripper [°] is perpendicular to cable axis
                rz_gripper = rz_cable + 90
                ## make sure that orientation is specified between 90..270°
                if -180<=rz_gripper<=-90:
                    rz_gripper += 180
                elif 90<rz_gripper<180:
                    rz_gripper -= 180
                elif 180<rz_gripper<270:
                    rz_gripper -= 180
                elif rz_gripper<-180 or rz_gripper>270:
                    raise ValueError('Cable orientation out of boundaries.')
                best_gp.append(np.append(pt_grasp, rz_gripper))
                return best_gp
    raise ValueError('No grasp point found without box collision. Try again.')


####################################################### ARCHIVE ########################################################
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
    conf = cv2.resize(conf, (cfg.ZIVID_WIDTH_2D, cfg.ZIVID_HEIGHT_2D), interpolation=cv2.INTER_LINEAR)
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
