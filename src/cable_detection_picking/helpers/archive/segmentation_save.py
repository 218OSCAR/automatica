import cv2
import json
import numpy as np
from scipy.spatial.distance import cdist
import config as cfg


#################################################### (1) INTERFACES ####################################################

# creates instance mask from SOLO polygons (DEPRECTAED SINCE 2023-06-26)
def get_instancemask_SOLO(IN_path):
    """
    Creates instance mask based on polygons obtained from mmdetection.
    
    Args:
        IN_path: path to the polygons stored as *.json-file
        
    Returns:
        img: instance mask where value 0=background, 1=Cable1, 2=Cable2, ... stored as np.array
    """
    ## create image template
    img = np.zeros((cfg.HEIGHT_2D,cfg.WIDTH_2D), int)-1
    ## read polygons
    file = open(IN_path)
    json_data = json.load(file)
    file.close()
    ## read keys (one key per cable)
    keys = list(json_data.keys())
    ## iterate keys (one key per cable)
    for i,key in enumerate(keys):
        ## iterate polygons forming one cable
        polygons = json_data[key]
        for polygon in polygons:
            ## draw only big polygons (as small polygons are probably result of segmentation failure)
            if len(polygon) > cfg.MIN_PIXEL_NUMBER:
                ## draw contour of polygon
                for xy in polygon:
                    x,y = int(xy[0]), int(xy[1])
                    img[y,x] = i
        ## find & fill contours of iterated cable
        mask = cv2.inRange(img, i, i)
        cons, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
        for idx in range(len(cons)):
            img = cv2.drawContours(img.astype(np.int32), contours=cons, contourIdx=idx, color=(i), thickness=-1)
    ## output
    # print(f'{len(cons)} cables out of {len(polygons)} polygons')
    return img


# creates instance mask from SOLO polygons
def get_instancemask_SOLO(IN_path):
    """
    Creates instance mask based on polygons obtained from mmdetection.
    
    Args:
        IN_path: path to the polygons stored as *.json-file
        
    Returns:
        img: instance mask where value 0=background, 1=Cable1, 2=Cable2, ... stored as np.array
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
    ## read & iterate keys from SOLO segmentation (one key per cable)
    keys = list(json_data.keys())                                                                                                   [::-1]  # !TODO
    for i,key in enumerate(keys):
        ## iterate polygons forming currently iterated cable
        polygons = json_data[key]['data']
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
                ## draw contour of polygon
                for xy in polygon:
                    x,y = int(xy[0]), int(xy[1])    
                    ij_mask[y,x] = 1
                ## fill contour of polygon 
                inranges = cv2.inRange(ij_mask, 1, 1)
                contours, _ = cv2.findContours(inranges, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_NONE)
                for idx in range(len(contours)):
                    ij_mask = cv2.drawContours(ij_mask.astype(np.int32), contours=contours, contourIdx=idx, color=1, thickness=-1)          # !TODO move astype to definition
                ## add iterated mask to previously iterated masks
                mask_all[ij_mask==1] = i
                ## add dict element to list of all polygons
                dict_element['mask'] = (ij_mask!=-1)
                data.append(dict_element)
    ## iterate polygons and draw them onto output mask if they are not redundant
    n_elements = len(data)
    for i in range(n_elements):
        # cv2.imwrite(f'data/_mask_{i}.png', 255*data[i]['mask'])
        ## create binary mask of all (except the currently iterated and the previously removed) other polygons 
        ignore = removed_polygons+[i]
        mask_allothers = np.any([data[j]['mask'] for j in range(n_elements) if not (j in ignore)], axis=0)
        ## in case of only one cable, the line above wrongly results in "mask_allothers=False" instead of "mask_allothers=np.zeros((HEIGHT_2D,WIDTH_2D), dtype=BOOL)"
        if np.sum(mask_allothers)==0:
            mask_allothers = np.copy(template)
        ## count pixel values for other- and all-mask
        _, counts_others = np.unique(mask_allothers, return_counts=True)
        _, counts_all = np.unique(mask_all, return_counts=True)
        ## use iterated polygon if a significant amount of its pixels is not covered by any other polygon as well (--> contains unique information)
        if counts_others[0]-counts_all[0] > cfg.UNIQUE_PIXELS:
            ## draw only where iterated mask is True and no other cable was drawn before
            draw_here = np.logical_and(data[i]['mask'], OUT_mask==-1)
            ## draw
            OUT_mask[draw_here] = data[i]['i_cable']
        else:
            ## remember which polygons were of bad quality and ignore them for future iterations
            removed_polygons.append(i)
    ## make sure that -1=background, 0=cableA, 1=cableB, ... (is violated if all polygons of one SOLO-cable were removed)
    vals = np.unique(OUT_mask)
    for i,v in enumerate(vals[1:]):
        OUT_mask[OUT_mask==v] = i

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

    return OUT_mask
