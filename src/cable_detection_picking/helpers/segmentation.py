import cv2
import json
import numpy as np
from scipy.spatial.distance import cdist
import config as cfg
import matplotlib.pyplot as plt
import matplotlib.image as mpimg
from shapely.geometry import Point, LineString, MultiLineString, LinearRing
from shapely.geometry.polygon import Polygon
from shapely.geometry.multipolygon import MultiPolygon
from shapely.geometry.collection import GeometryCollection
from shapely import wkt, difference
from shapely.ops import linemerge, unary_union, polygonize
from helpers.estimation import get_depthimage
import warnings

#################################################### (1) INTERFACES ####################################################

#Split SOLO masks at intersection points (PP Part 1)
def split_masks(json_data,IN_path="-",visualize=True):
    intersection_path=cfg.PATHS['rtdlo_intersections']
    if visualize:
        plt.imshow(mpimg.imread(IN_path.replace("json","png")))
        plt.title(str(IN_path.split("/")[-1]))
        
    edited_json_data=json_data.copy()
        
    file = open(intersection_path)
    intersections = json.load(file)
    file.close()
    intersections_scaled=[]
    for key, intersection in intersections.items():
        
        #print(intersection)
        ip=np.array(intersection['ip'])*np.array([1280/640,960/360])
        u=np.array(intersection['u'])*np.array([1280/640,960/360])
        v=np.array(intersection['v'])*np.array([1280/640,960/360])
        s=np.array(intersection['s'])*np.array([1280/640,960/360])
        t=np.array(intersection['t'])*np.array([1280/640,960/360])
        if visualize:
            plt.plot([ip[0]+50*s[0],ip[0],ip[0]+50*t[0]],[ip[1]+50*s[1],ip[1],ip[1]+50*t[1]],color='r')
            plt.plot([ip[0]+50*v[0],ip[0],ip[0]+50*u[0]],[ip[1]+50*v[1],ip[1],ip[1]+50*u[1]],color='m')
        #print(intersection['neighs'])
        neighs=[]
        for nb in intersection['neighs']:
            point=np.array(nb)*np.array([1280/640,960/360])
            point=ip+2*(point-ip) #*2
            neighs.append(point)            
            if visualize:
                plt.plot(point[0],point[1],'mo')
                
        intersections_scaled.append({"ip":ip, "u":u, "v":v, "s":s, "t":t, "neighs":neighs})
            
            
        
    #Check and split all masks
    holes=[]
    for key, mask in edited_json_data.items():
        polygons = mask['data']
        polygon_remove_indices=set()
        hole_indices=[]
        new_polygons=[] 
        #print("Length before: "+str(len(polygons)))
        for j,polygon in enumerate(polygons):
            #print(len(polygon))
            if len(polygon) <4 or (j in hole_indices): #Skip small parts or holes   #TODO. Skip even more small parts?
                continue
            poly=Polygon(polygon)
            if j< len(polygons)-1:
                if len(polygons[j+1]) <4:
                    contains_n=False
                else:
                    next_poly=Polygon(polygons[j+1])
                    try:
                        contains_n=poly.contains(next_poly)  
                    except:
                        contains_n=False
                if contains_n: #next_poly is hole in mask
                    #print("HOlE of size: "+str(next_poly.area)+" in poly of size: "+str(poly.area))
                    holes=[]
                    for idx,poly_n in enumerate(polygons[j+1:]): #Check if more holes follow
                        if len(poly_n) <4:
                            contains_n=False
                        else:
                            next_poly_=Polygon(poly_n)
                            try:
                                contains_n=poly.contains(next_poly_)  
                            except:
                                contains_n=False
                        if contains_n:
                            #print("Also contains!!!!!!!!!!!!!!!!!!!!!!!"+str(next_poly_.area))
                            hole_indices.append(j+1+idx)
                            polygon_remove_indices.add(j+1+idx)
                            if visualize:
                                plt.plot(*zip(*poly_n),color="r")
                            if next_poly_.area > 100:  #Ignore small holes                                
                                holes.append(poly_n)
                            else:
                                continue
                        else:
                            break                     
                              
                    if visualize:
                        plt.plot(*zip(*polygons[j+1]),color="r")
                    #Add hole to polygon:
                    if len(holes)>0: 
                        poly=Polygon(polygon, holes=holes) 
            dif=None
            new_polygons_=[]            
            for intersection in intersections_scaled:
                ipP=Point(intersection['ip'])
                try:
                    contains = poly.contains(ipP) 
                except Exception as error:
                    warnings.warn("Contains failed: at "+str(ipP)+": "+str(error))  
                    contains=False 
                if contains:
                    count=0
                    for n in intersection['neighs']:
                        if poly.contains(Point(n)):
                            count+=1
                    if count>=3:
                        ip=intersection['ip']
                        u=intersection['u']
                        v=intersection['v'] 
                        s=intersection['s']
                        t=intersection['t']                           
                        #print(str(count)+": "+str(ip))
                        line1=LineString([ip+50*u,ip,ip+50*v])                        
                        if len(poly.interiors)>0: #Hole in polygon
                            #print("interior!")
                            lineStrings=[poly.exterior]
                            for interior in poly.interiors:
                                lineStrings.append(interior)
                            intersection1 = MultiLineString(lineStrings).intersection(line1) #Add hole to intersection check
                        else:
                            intersection1 = poly.exterior.intersection(line1)
                        if intersection1.is_empty:
                            warnings.warn("Empty intersection1 at: "+str(ip))
                            #plt.show()
                            continue
                        elif intersection1.geom_type.startswith('Multi') or intersection1.geom_type == 'GeometryCollection':
                            #print("i1: "+str(intersection1))
                            if len(intersection1.geoms)==2:
                                c1=intersection1.geoms[0]
                                c2=intersection1.geoms[1]
                                if visualize:
                                    plt.plot([c1.x,c2.x],[c1.y,c2.y],color='b')
                                    
                            else:
                                warnings.warn("Too many ("+str(len(intersection1.geoms))+") intersection1 at: "+str(ip))
                                c1=None
                                c1_dist=float('inf')
                                c2=None
                                c2_dist=float('inf')
                                ipp=Point(ip)
                                for point in intersection1.geoms: #Find intersections closest to intersection point
                                    if point.distance(Point(ip+50*u))<point.distance(Point(ip+50*v)):
                                        if point.distance(ipp) < c1_dist:
                                            c1=point
                                            c1_dist=point.distance(ipp)
                                    else:
                                        if point.distance(ipp) < c2_dist:
                                            c2=point
                                            c2_dist=point.distance(ipp)
                                            
                                if c1 is None or c2 is None:
                                  warnings.warn("None after intersection selection!")
                                  #plt.show()
                                  continue
             
                            #for shp in intersection1:
                                #print("c1"+str(shp))
                        else:
                            #print("i1: "+str(intersection1)) 
                            warnings.warn(str(intersection1.geom_type)+" at intersection1 at: "+str(ip))
                            #plt.show()
                            continue
                            
                        line2=LineString([ip+50*s,ip,ip+50*t])
                        if len(poly.interiors)>0: #Hole in polygon
                            #print("interior!")
                            lineStrings=[poly.exterior]
                            for interior in poly.interiors:
                                lineStrings.append(interior)
                            intersection2 = MultiLineString(lineStrings).intersection(line2) #Add hole to intersection check
                        else:
                            intersection2 = poly.exterior.intersection(line2)
                        if intersection2.is_empty:
                            warnings.warn("Empty intersection2 at: "+str(ip))
                            #plt.show() 
                            continue                           
                        elif intersection2.geom_type.startswith('Multi') or intersection2.geom_type == 'GeometryCollection':
                            #print("i2: "+str(intersection2))
                            if len(intersection2.geoms)==2:
                                c3=intersection2.geoms[0]
                                c4=intersection2.geoms[1]
                                if visualize:
                                    plt.plot([c3.x,c4.x],[c3.y,c4.y],color='b')
                            else:
                                warnings.warn("Too many ("+str(len(intersection2.geoms))+") intersection2 at: "+str(ip))
                                c3=None
                                c3_dist=float('inf')
                                c4=None
                                c4_dist=float('inf')
                                ipp=Point(ip)
                                for point in intersection2.geoms: #Find intersections closest to intersection point
                                    if point.distance(Point(ip+50*s))<point.distance(Point(ip+50*t)):
                                        if point.distance(ipp) < c3_dist:
                                            c3=point
                                            c3_dist=point.distance(ipp)
                                    else:
                                        if point.distance(ipp) < c4_dist:
                                            c4=point
                                            c4_dist=point.distance(ipp)
                                if c3 is None or c4 is None:
                                    warnings.warn("None after intersection selection!")
                                    #plt.show()
                                    continue
                            
                            #for shp in intersection1:
                                #print("c1"+str(shp))
                        else:
                            #print("i2: "+str(intersection2)) 
                            warnings.warn(str(intersection2.geom_type)+" at intersection2 at: "+str(ip))
                            #plt.show()
                            continue
                            
                        
                        middle_coords=[]
                        for ratio in np.linspace(0, 1, num=500):  #TODO: adjust 500 according to distance
                            middle_coords.append((ratio*np.array([c1.x,c1.y])+(1-ratio)*np.array([c3.x,c3.y])).tolist())
                        for ratio in np.linspace(0, 1, num=500):     
                            middle_coords.append((ratio*np.array([c3.x,c3.y])+(1-ratio)*np.array([c2.x,c2.y])).tolist())
                        for ratio in np.linspace(0, 1, num=500):    
                            middle_coords.append((ratio*np.array([c2.x,c2.y])+(1-ratio)*np.array([c4.x,c4.y])).tolist())
                        for ratio in np.linspace(0, 1, num=500):     
                            middle_coords.append((ratio*np.array([c4.x,c4.y])+(1-ratio)*np.array([c1.x,c1.y])).tolist())
                        #middle=Polygon([c1,c3,c2,c4])
                        #print(middle)
                        middle=Polygon(middle_coords)
                        try:
                            if dif is None:
                                dif = poly.difference(middle)#polygonize(borders) 
                            else:
                                dif = dif.difference(middle)
                        except Exception as error:
                            warnings.warn("Difference failed: at "+str(ip)+": "+str(error))  
                            continue  
                        
                        if visualize:
                            colors=['y','m','b',"k","g","m","r"] 
                            if type(dif)==Polygon:
                                plt.plot(*dif.exterior.xy,color=colors[0])
                            else:                            
                                for i,p in enumerate(dif.geoms):
                                    if(type(p)==Polygon):
                                        plt.plot(*p.exterior.xy,color=colors[i%len(colors)]) 
                        

                        polygon_remove_indices.add(j)
                        new_polygons_=[]
                        if type(dif)==Polygon:
                            coords=list(dif.exterior.coords)          
                            new_polygons_.append(coords)
                            for interior in dif.interiors:
                                if type(interior)==LinearRing:
                                    new_polygons_.append(list(interior.coords))
                                elif type(interior)==Polygon:
                                    coords=list(interior.exterior.coords)          
                                    new_polygons_.append(coords)
                                elif type(interior)==MultiPolygon or type(interior)==GeometryCollection:                            
                                    for p in interior.geoms:
                                        if(type(p)==Polygon): #TODO: do something with LineString (else)?
                                            coords=list(p.exterior.coords)          
                                            new_polygons_.append(coords)
                                else:
                                    warnings.warn("Unexpected type in interior: "+str(type(interior)))  
                                    continue
                        elif type(dif)==MultiPolygon or type(dif)==GeometryCollection:                            
                            for p in dif.geoms:
                                if(type(p)==Polygon): #TODO: do something with LineString (else)?
                                    coords=list(p.exterior.coords)          
                                    new_polygons_.append(coords) 
                                    for interior in p.interiors:
                                        if type(interior)==LinearRing:
                                            new_polygons_.append(list(interior.coords))
                                        elif type(interior)==Polygon:
                                            coords=list(interior.exterior.coords)          
                                            new_polygons_.append(coords)
                                        elif type(interior)==MultiPolygon or type(interior)==GeometryCollection:                            
                                            for p in interior.geoms:
                                                if(type(p)==Polygon): #TODO: do something with LineString (else)?
                                                    coords=list(p.exterior.coords)          
                                                    new_polygons_.append(coords)
                                        else:
                                            warnings.warn("Unexpected type in interior: "+str(type(interior)))  
                                            continue
                                
                        else:
                            warnings.warn("Unexpected type: "+str(type(dif)))  
                            continue
            new_polygons+=new_polygons_
            if visualize:
                #print(new_polygons_)
                colors=['y','m','b',"k","g","m","r"]                                             
                for i,p in enumerate(new_polygons_):
                    plt.plot(*zip(*p),color=colors[i%len(colors)])               
        for index in sorted(polygon_remove_indices, reverse=True):
            del polygons[index]
        
        polygons+=new_polygons
        mask['data']=polygons
        #print("Length after: "+str(len(polygons)))                                           
                        
    if visualize:
        #plt.show()
        plt.savefig(cfg.PATHS['visu_split'],dpi=200) 
        plt.close()

    return edited_json_data



# creates instance mask from SOLO polygons
def get_instancemask_SOLO(IN_path, enable_split_masks=False):
    """
    Creates instance mask based on polygons obtained from mmdetection.
    
    Args:
        IN_path: path to the polygons stored as *.json-file
        enable_split_masks: Enable splitting Masks with >2 Arms at intersection
        
    Returns:
        OUT_mask, OUT_cable_types
        
        OUT_mask: instance mask where value 0=background, 1=Cable1, 2=Cable2, ... stored as np.array
        OUT_cable_types: dictionary of cable types("HV"/"PNEUMATIC"/"cable") with: OUT_cable_types[cable_color_index]=cabel_type
    """
    ## create templates
    template = np.zeros((cfg.HEIGHT_2D,cfg.WIDTH_2D), np.int8)-1
    OUT_mask = np.copy(template)
    mask_all = np.copy(template)
    data = list()
    removed_polygons = list()
    ## read polygons from SOLO segmentation
    file = open(IN_path)
    json_data = json.load(file)
    file.close()
    #Split Masks with more than 2 Arms:
    if enable_split_masks:
        json_data = split_masks(json_data,IN_path,visualize=True)
    ## read & iterate keys from SOLO segmentation (one key per cable)
    cable_types=[]
    keys = list(json_data.keys())                                                                                                   [::-1]  # !TODO
    for i,key in enumerate(keys):
        ## iterate polygons forming currently iterated cable
        polygons = json_data[key]['data']
        #TODO: Use json_data[key]['score']
        cable_type=json_data[key]['label']
        #Iterate through all mask parts in mask and add parts that are > cfg.MIN_PIXEL_NUMBER and their holes to data and hole_indices
        hole_indices=[]
        check_holes=True
        for j,polygon in enumerate(polygons):
            dict_element = {'i_cable': i,
                            'j_polygon': j,
                            'size': 0,
                            'mask': None}
            ij_mask = np.copy(template)
            ## focus on big polygons (as small polygons are probably result of segmentation failure)
            if len(polygon) > cfg.MIN_PIXEL_NUMBER:
                ## store size of polygon
                dict_element['size'] = len(polygon)
                # Find polygons that are holes of earlier polygons -> add them to hole_indices
                if check_holes:
                    poly=Polygon(polygon)
                    if j+1>=len(polygons) or len(polygons[j+1]) <4:
                        contains_n=False
                    else:
                        next_poly=Polygon(polygons[j+1])
                        try:
                            contains_n=poly.contains(next_poly)  
                        except:
                            contains_n=False       
                    if contains_n: #next_poly is hole in mask
                        #print("HOlE of size: "+str(next_poly.area)+" in poly of size: "+str(poly.area))
                        holes=[]
                        for idx,poly_n in enumerate(polygons[j+1:]): #Check if more holes follow
                            if len(poly_n) <4:
                                contains_n=False
                            else:
                                next_poly_=Polygon(poly_n)
                                try:
                                    contains_n=poly.contains(next_poly_)  
                                except:
                                    contains_n=False
                            if contains_n:
                                #print("Also contains "+str(next_poly_.area))
                                hole_indices.append(j+1+idx)
                            else:
                                break                     
                ## draw contour of polygon                
                for xy in polygon:
                    x,y = int(xy[0]), int(xy[1])    
                    ij_mask[y,x] = 1
                ## fill contour of polygon 
                inranges = cv2.inRange(ij_mask, 1, 1)
                contours, _ = cv2.findContours(inranges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
                # IF the polygon is a hole THEN remove it from earlier polygon ELSE draw the polygon
                if j in hole_indices:
                    ij_mask_fixed=data[-1]['mask']
                    for idx in range(len(contours)):
                        ij_mask_fixed = cv2.drawContours(ij_mask_fixed.astype(np.int32), contours=contours, contourIdx=idx, color=0, thickness=-1)          # !TODO move astype to definition   
                    ij_mask_fixed[ij_mask_fixed==0]=-1              
                else:
                    for idx in range(len(contours)):
                        ij_mask = cv2.drawContours(ij_mask.astype(np.int32), contours=contours, contourIdx=idx, color=1, thickness=-1)                
                if j in hole_indices:
                    data[-1]['mask'] = (ij_mask_fixed!=-1)
                else:
                    ## add iterated mask to previously iterated masks
                    mask_all[ij_mask==1] = i                    
                    ## add dict element to list of all polygons
                    dict_element['mask'] = (ij_mask!=-1)
                    data.append(dict_element)
                    cable_types.append(cable_type)
    ## iterate polygons and draw them onto output mask if they are not redundant
    n_elements = len(data)
    for i in range(n_elements):
        # cv2.imwrite(f'data/_mask_{i}.png', 255*data[i]['mask'])
        ## create binary mask of all (except the currently iterated and the previously removed) other polygons 
        ignore = removed_polygons+[i]
        mask_allothers = np.any([data[j]['mask'] for j in range(n_elements) if not (j in ignore)], axis=0)
        if np.sum(mask_allothers)==0:
            mask_allothers = np.copy(template)
        ## count pixel values for other- and all-mask
        _, counts_others = np.unique(mask_allothers, return_counts=True)
        _, counts_all = np.unique(mask_all, return_counts=True)
        ## use iterated polygon if a significant amount of its pixels is not covered by any other polygon as well (--> unique information)
        if counts_others[0]-counts_all[0] > 1000:  #1000
            ## draw only where iterated mask is True and no other cable was drawn before
            draw_here = np.logical_and(data[i]['mask'], OUT_mask==-1)
            draw_here = draw_here.astype(np.uint8)
            ## draw            
            #Use Opening to remove drwawing borders:
            kernel = np.ones((5,5),np.uint8)
            draw_here = cv2.morphologyEx(draw_here, cv2.MORPH_OPEN, kernel)
            #draw_here = cv2.erode(draw_here, kernel, iterations=1)
            #draw_here = cv2.dilate(draw_here, kernel, iterations=1)
            if np.count_nonzero(draw_here) > 1000:#Only add big enough parts
                OUT_mask[draw_here==1] = data[i]['i_cable']
            else:
                # remember which polygons were of bad quality and ignore them for future iterations
                removed_polygons.append(i)
        else:
            # remember which polygons were of bad quality and ignore them for future iterations
            removed_polygons.append(i)
            
    ## make sure that -1=background, 0=cableA, 1=cableB, ... (is violated if all polygons of one SOLO-cable were removed)
    cable_types=list(cable_types)
    OUT_cable_types={}
    vals = np.unique(OUT_mask)
    for i,v in enumerate(vals[1:]):
        OUT_mask[OUT_mask==v] = i
        OUT_cable_types[i]=cable_types[v]
    ## (debugging) - comparison to segmentation
    # import datetime
    # folderpath = '/home/demo_dj/Schreibtisch/comp/'
    # timestamp = datetime.datetime.now()
    # timestamp = str(timestamp)[:-7].replace(' ','_').replace('-','').replace(':','')
    # segm = cv2.imread(cfg.PATHS['visu_segmentation'])
    # mask_colored = np.zeros((cfg.HEIGHT_2D,cfg.WIDTH_2D,3), np.uint8)
    # for v in range(np.max(OUT_mask)+1):
    #     mask_colored[OUT_mask==i] = cfg.RBG[i]
    # cv2.imwrite(folderpath+timestamp+'_segmentation.png', segm)
    # cv2.imwrite(folderpath+timestamp+'_mask.png', mask_colored)
    return OUT_mask,OUT_cable_types


def get_reduced_depth_image(img_depth, area_threshold = cfg.AREA_THRESHOLD, stepsize = 0.005, max_cut_off_height = 0.65, min_cut_off_height = 0.45):
    """
    Finds large area in the depth image, which most likely is a pickable structure.

    Args:
        img_depth: Slightly adjusted depth image from get_depthimage()
   
    Returns:
        mask_depth: Mask from the depth image in a certain height
    """
    ## Some parameters for the search of a large area in the depth image
    img_depth[img_depth < min_cut_off_height] = 1  # exclude values which should not be contained
    img_depth[img_depth > max_cut_off_height] = 1
    img_depth_orig = img_depth
    cut_off_height = min_cut_off_height

    ## Loop to find the largest area in the depth image
    object_found = False
    areas = list()
    while not object_found:
        ## Convert depth mask to bw
        mask_depth = img_depth < cut_off_height
        mask_depth = (mask_depth).astype(float)

        # make edges black because of no/bad depth data or Kleinladungsträger
        edge = 140
        mask_depth[:edge+25,:] = 0  # upper border
        mask_depth[-edge-25:-1,:] = 0  # lower border
        mask_depth[:,:edge] = 0  # left border
        mask_depth[:,-edge:-1] = 0  # right border
       
        # Filter using contour area and remove small noise
        cnts, _ = cv2.findContours(mask_depth.astype(np.uint8), cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        idx = 0
        biggest_area = 0
        biggest_area_idx = 0
        for c in cnts:
            area = cv2.contourArea(c)
            # Filter out small areas
            if cut_off_height > max_cut_off_height:
                raise ValueError("No area found!")
            elif area < area_threshold:
                cv2.drawContours(mask_depth, [c], -1, (0,0,0), -1)
            else:
                object_found = True
                if (area > biggest_area):
                    if biggest_area_idx != 0:
                        ## Fill area that is not biggest area anymore
                        cv2.drawContours(mask_depth, cnts, biggest_area_idx, (0,0,0), -1)
                    biggest_area = area
                    biggest_area_idx = idx
            idx = idx + 1
 
        cut_off_height += stepsize
        img_depth = img_depth_orig

    return mask_depth.astype(bool)


def reduce_camera_image(rgb_image_path, pointcloud_path):
    # load depth img from ply
    depth_image = get_depthimage(pointcloud_path)
    depth_image = cv2.resize(depth_image, (cfg.WIDTH_2D, cfg.HEIGHT_2D))

    # load rgb img
    rgb_image = cv2.imread(rgb_image_path)

    # reduce scene with depth img    
    reduced_depth_image = get_reduced_depth_image(depth_image) 

    # paint irrelevant pixels unicolor
    rgb_image[np.bitwise_not(reduced_depth_image)] = (255,255,255)

    # save new img
    cv2.imwrite(cfg.PATHS['image_red'], rgb_image)