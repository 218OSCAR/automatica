## for computation and display
import cv2
import numpy as np
import math
import open3d as o3d
from scipy.optimize import fsolve

## for transformation
from scipy.spatial.transform import Rotation

############################################################
##   (1) CONSTANTS              ##   6   constants        ##
##   (2) INITIALIZATIONS        ##   5   initializations  ##
##   (3) HELPERS                ##   13  functions        ##
##   (4) INTERFACE              ##   1   mian function    ##
##   (4.1) PART OF 4 CLICKS                               ##
##   (4.2) PART OF TEMPORARY RESULTS                      ##
##   (4.3) PART OF TRANSFORMATION-FUNCTION                ##
##   (4.4) PART OF 2 FINAL RESULTS                        ##
############################################################


################################################## (0) RUN IN _3_ ##############################################

# ######## (click-demo) ###################################################################################################
# import data/archive/clickdemo as cde                                                                                                #
# gps_yxrz, gps_order = cde.main()                                                                                        #
# gp_z = 0.577                                                                                                            #
# dbg.images_workflow(cfg.PATHS, IN_mask=None, IN_skeletons=None, IN_gpCoords=gps_yxrz, IN_gpOrder=gps_order)             #
#     #####################################################################################################################

################################################## (1) CONSTANTS  ##############################################

## parameter of camera
HEIGHT_2D = 960
WIDTH_2D = 1280
HEIGHT_3D = 480
WIDTH_3D = 640

## rectified focal length [px]
FOCAL_FACTOR = 1083.18994140625

## distance of both camera lenses [m]
STEREO_DISTANCE = 0.065

################################################## (2) INITIALIZATIONS   ########################################

## define a matrix named "line" to store the mouse points and initialize some values
line = np.zeros((4,2), dtype=int)
counter = 0
tangent_wert = 0
out_real = 0
quaternion = 0

np.set_printoptions(precision=4, sign=' ')

################################################## (3) HELPERS ##################################################

# function to get the distance betwween 2 points in [px]
def getOeffnung(p11,p12,p21,p22):
    return math.sqrt(((p11-p21)**2)+((p12-p22)**2))

# function to display the coordinates of the points clicked on the image
def mousePoint(event, x, y, flags, param):
    global counter
    # checking for mouse clicks
    if event == cv2.EVENT_LBUTTONDOWN:
        line[counter] = x,y
        counter += 1

        # displaying the coordinates on the image window
        """ font = cv2.FONT_HERSHEY_SIMPLEX
        cv2.putText(img, str(x) + ',' +
                    str(y), (x,y), font,
                    1, (255, 0, 0), 2)
        cv2.imshow('Original Image', img) """

# the following 4 functions caculate 4 points, in order to display the the gripper-finger
def func1(p):
        x, y = p
        return [(line[1][0] - x)/(line[1][1] - y) - tangent_wert,
                math.sqrt(((x-line[1][0])**2)+((y-line[1][1])**2)) - 20
               ]
def func2(p):
        x, y = p
        return [(line[1][0] - x)/(line[1][1] - y) - tangent_wert,
                math.sqrt(((x-line[1][0])**2)+((y-line[1][1])**2)) - 20
               ]
def func3(p):
        x, y = p
        return [(line[2][0] - x)/(line[2][1] - y) - tangent_wert,
                math.sqrt(((x-line[2][0])**2)+((y-line[2][1])**2)) - 20
               ]
def func4(p):
        x, y = p
        return [(line[2][0] - x)/(line[2][1] - y) - tangent_wert,
                math.sqrt(((x-line[2][0])**2)+((y-line[2][1])**2)) - 20
               ]

# Smoothes data via centered moving average (edge values are extrapolated)
def smoothe(IN_array):
    """
    Smoothes data via centered moving average (edge values are extrapolated).

    Args:
        IN_array: data array (1d), mainly coordinates

    Hyperparameters:
        HALF_WINDOWSIZE: half of windowsize for moving average algorithm (default: 5)
        EXT_ORDER: order for extrapolation of edge values (default: 1)
        
    Returns:
        A smoothed and extrapolated data array.
    """
    ## hyperparameters
    HALF_WINDOWSIZE = 5
    EXT_ORDER = 1
    ## smoothe via centered moving average
    kernel = np.ones(2*HALF_WINDOWSIZE) / (2*HALF_WINDOWSIZE)
    OUT_array = np.convolve(IN_array, kernel, mode='same')
    ## extrapolate at first boundary
    ix_itp = np.arange(HALF_WINDOWSIZE)
    ix_train = np.arange(HALF_WINDOWSIZE, 2*HALF_WINDOWSIZE)
    interp_fun = np.poly1d(np.polyfit(ix_train, OUT_array[ix_train] , EXT_ORDER))
    OUT_array[ix_itp] = interp_fun(ix_itp)
    ## extrapolate at second boundary
    # n = len(IN_array)
    n = 1
    ix_itp = np.arange(n-HALF_WINDOWSIZE, n)
    ix_train = np.arange(n-2*HALF_WINDOWSIZE, n-HALF_WINDOWSIZE)
    interp_fun = np.poly1d(np.polyfit(ix_train, OUT_array[ix_train] , EXT_ORDER))
    OUT_array[ix_itp] = interp_fun(ix_itp)
    return OUT_array

# function for reading point cloud data
def read_pcd(file_path):
	pcd = o3d.io.read_point_cloud(file_path)
	# print(np.asarray(pcd.points))
	# colors = np.asarray(pcd.colors) * 255
	points = np.asarray(pcd.points)
	# print(points.shape, colors.shape)
	return np.concatenate([points], axis=-1)

# function of (pcl ---> depth)
def real2pixel(pcl_points):
    """
    Transforms real coordinates (3d) into depth image. Rounds pixel coordinates to integer values and assigns the value 0 to all leftover pixels.

    Args:
        pcl_points: array containing the x-, y- and z-coordinate of all points of a point cloud
        
    Returns:
        Depth image (in 3d-resolution).
    """
    img_d = np.zeros((HEIGHT_3D,WIDTH_3D))
    for x,y,z in pcl_points:
        pixY = (FOCAL_FACTOR/WIDTH_2D*WIDTH_3D) * y/z
        pixX = (FOCAL_FACTOR/WIDTH_2D*WIDTH_3D) * x/z
        pixY = np.rint(pixY +HEIGHT_3D/2 -0.5)
        pixX = np.rint(pixX +WIDTH_3D/2 -0.5)
        img_d[int(pixY), int(pixX)] = z
    return img_d

# function of (pixel frame ---> camera frame)
def pixel2real(IN_xpixels, IN_xdepths):
    """
    Transforms pixel coordinates (2d) and depth values into real coordinates (3d).

    Args:
        IN_xpixels: list of arrays (Nx2), where each array contains the pixel coordinates of all center line points of a specific cable
        IN_xdepths: list of arrays (Nx1), where each array contains the depth values of all center line points of a specific cable
        
    Returns:
        List of arrays (Nx3), where each array contains the real coordinates of all center line points of a specific cable.
    """
    OUT_xreals = list()
    # i here always equal to 0; because we only have one TCP here
    for i in range(len(IN_xpixels)):
        y = IN_xpixels[i][0] -HEIGHT_3D/2 +0.5
        x = IN_xpixels[i][1] -WIDTH_3D/2  +0.5
        
        y = y*IN_xdepths[i] / (FOCAL_FACTOR/WIDTH_2D*WIDTH_3D)
        x = x*IN_xdepths[i] / (FOCAL_FACTOR/WIDTH_2D*WIDTH_3D)
        
        x = smoothe(x)
        y = smoothe(y)
        # multiplying with 10 to achieve correct dimension
        x = 10*x
        y = 10*y
        
        OUT_xreals = x[0],y[0],IN_xdepths[i]
    return OUT_xreals

# function of (euler ---> quaternion)
def euler2quaternion(roll, pitch, yaw):
    quaternion_koor = np.zeros((1,3))
    x=math.sin(pitch/2)*math.sin(yaw/2)*math.cos(roll/2)+math.cos(pitch/2)*math.cos(yaw/2)*math.sin(roll/2)
    y=math.sin(pitch/2)*math.cos(yaw/2)*math.cos(roll/2)+math.cos(pitch/2)*math.sin(yaw/2)*math.sin(roll/2)
    z=math.cos(pitch/2)*math.sin(yaw/2)*math.cos(roll/2)-math.sin(pitch/2)*math.cos(yaw/2)*math.sin(roll/2)
    w=math.cos(pitch/2)*math.cos(yaw/2)*math.cos(roll/2)-math.sin(pitch/2)*math.sin(yaw/2)*math.sin(roll/2)
    quaternion_koor = x, y, z, w
    return quaternion_koor

# function of (camera frame ---> robot frame)
def pc_cam_to_pc_world(pc, extrinsic):
    # extrinsic is Camera Position and Quaternion
    # pc is the point coordinate in camera frame
    # dimension of 'pc' is: (1x3)
    # dimension of 'extrinsic' (4x4)
    extr_inv = np.linalg.inv(extrinsic)  # get inverse matrix
    R = extr_inv[:3, :3]
    T = extr_inv[:3, 3]
    pc_transformed = (R @ pc.T).T + T
    return pc_transformed

# function: returns gripper orientation depending on robot pose
def get_gripper_orientation_wrt_robot(degree_gripper_camera_coordi):
    ## predefine orientations
    ori_0 = [3.141021945200231, 0.004124204262248658, 0.0005468417978999624]
    ori_15 = [3.1148143124263172, -0.4058333361036812, 0.0005676400723523314]
    ori_30 = [3.035352823130049, -0.808934979873496, 0.0006116768377594687]
    ori_45 = [2.9037565988831004, -1.198278751468265, 0.0006685147332419302]
    ori_60 = [2.7226084261192165, -1.5670599706916168, 0.000714584257404122]
    ori_75 = [2.494848958105025, -1.9090826895839694, 0.0007587538983617771]
    ori_90 = [2.2243965807020105, -2.2183585882850987, 0.0007242304137283921]
    ori_105 = [-1.9158130840534995, 2.489784036087023, -0.0006947413522143555]
    ori_120 = [-1.5743037498580121, 2.718519390917814, -0.0005838608562621836]
    ori_135 = [-1.2060848181978396, 2.9007591280955656, -0.0006957355629396542]
    ori_150 = [0.816778477305923, -3.033372440179364, -0.0006911347503889877]
    ori_165 = [0.4139308473008705, -3.1140191825101504, -0.0006950554052120449]
    ori_180 = [0.0038776422662948184, -3.1413271134468324, -0.0005781272205993981]
    ## select orientation
    if degree_gripper_camera_coordi >= 90 and degree_gripper_camera_coordi < 97.5:
        gripper_orientation = ori_90
    if degree_gripper_camera_coordi >= 97.5 and degree_gripper_camera_coordi < 112.5:
        gripper_orientation = ori_105
    if degree_gripper_camera_coordi >= 112.5 and degree_gripper_camera_coordi < 127.5:
        gripper_orientation = ori_120
    if degree_gripper_camera_coordi >= 127.5 and degree_gripper_camera_coordi < 142.5:
        gripper_orientation = ori_135
    if degree_gripper_camera_coordi >= 142.5 and degree_gripper_camera_coordi < 157.5:
        gripper_orientation = ori_150
    if degree_gripper_camera_coordi >= 157.5 and degree_gripper_camera_coordi < 172.5:
        gripper_orientation = ori_165
    if degree_gripper_camera_coordi >= 172.5 and degree_gripper_camera_coordi < 187.5:
        gripper_orientation = ori_180
    if degree_gripper_camera_coordi >= 187.5 and degree_gripper_camera_coordi < 202.5:
        gripper_orientation = ori_15
    if degree_gripper_camera_coordi >= 202.5 and degree_gripper_camera_coordi < 217.5:
        gripper_orientation = ori_30
    if degree_gripper_camera_coordi >= 217.5 and degree_gripper_camera_coordi < 232.5:
        gripper_orientation = ori_45
    if degree_gripper_camera_coordi >= 232.5 and degree_gripper_camera_coordi < 247.5:
        gripper_orientation = ori_60
    if degree_gripper_camera_coordi >= 247.5 and degree_gripper_camera_coordi < 262.5:
        gripper_orientation = ori_75
    if degree_gripper_camera_coordi >= 262.5 and degree_gripper_camera_coordi <= 270:
        gripper_orientation = ori_90
    ## output
    return gripper_orientation

################################################## (4) INTERFACE ##################################################

def main():

################################################## (4.1) PART OF 4 CLICKS ##################################################
    # read the image in path:xxx
    img = cv2.imread('data/rcvisard_img_color_rectified_l.png')
    # print("Bitte TCP klicken und dann rechts-Greifer-Point Klicken!")

    while True:
        """
        A total of 4 clicks on the screen.

        The first click:
            on TCP
            
        the second click:
            on right point
            (Attention!!!: with TCP as the origin, the second point can only be clicked in the 'first' and 'fourth' quadrants)

        the third click:
            click on anywhere to compute and display the line

        the forth click:
            click on anywhere to caculate the orientation and öffnung of gripper

        """
        # display the points we clicked on
        for x in range(0,2):
            cv2.circle(img, (line[x][0],line[x][1]), 3, (0,255,0), cv2.FILLED)

        # display the image in new window named "xxx" 
        cv2.imshow("Original Image", img)
        # setting mouse handler for the image and calling the mausPoint() function
        cv2.setMouseCallback("Original Image", mousePoint)

        # display the lines
        if counter == 3:
            # caculate the left point
            horizontal_distance = line[1][0] - line[0][0]
            vertical_distance = line[1][1] - line[0][1]
            global tangent_wert
            tangent_wert = (-vertical_distance) / horizontal_distance
            line[2][0] = line[0][0] - horizontal_distance
            line[2][1] = line[0][1] - vertical_distance

            # display the line from tcp to the left and to the right point
            cv2.line(img, (line[0][0],line[0][1]), (line[1][0],line[1][1]), (255,0,0), 5, 4)
            cv2.line(img, (line[0][0],line[0][1]), (line[2][0],line[2][1]), (255,0,0), 5, 4)
            # display the left point
            cv2.circle(img, (line[2][0],line[2][1]), 3, (0,255,0), cv2.FILLED)

            # disaplay the right line(vertical),represent the gripper-finger
            x1, y1 =  fsolve(func1, (line[1][0]+10, line[1][1]+10))
            x2, y2 =  fsolve(func2, (line[1][0]-10, line[1][1]-10))
            cv2.circle(img, (int(x1),int(y1)), 3, (0,0,255), cv2.FILLED)
            cv2.circle(img, (int(x2),int(y2)), 3, (0,0,255), cv2.FILLED)
            pts = np.array([[x1,y1], [x2,y2]],np.int32)
            cv2.polylines(img, [pts], True, (0,0,255), 1)
            # disaplay the left line(vertical),represent the gripper-finger
            x3, y3 =  fsolve(func3, (line[2][0]+10, line[2][1]+10))
            x4, y4 =  fsolve(func4, (line[2][0]-10, line[2][1]-10))
            cv2.circle(img, (int(x3),int(y3)), 3, (0,0,255), cv2.FILLED)
            cv2.circle(img, (int(x4),int(y4)), 3, (0,0,255), cv2.FILLED)
            pts = np.array([[x3,y3], [x4,y4]],np.int32)
            cv2.polylines(img, [pts], True, (0,0,255), 1)

        # display the orientation and the Greifer-Öffnung
        if counter == 4:
            rad_gripper_pixel_coordi = math.atan(tangent_wert)
            degree_gripper_pixel_coordi = math.degrees(rad_gripper_pixel_coordi)

            degree_gripper_camera_coordi = - (degree_gripper_pixel_coordi + 180) + 360
            degree_tag_camera_coordi = (- (degree_gripper_pixel_coordi + 180) + 360) - 90

            rad_gripper_camera_coordi = math.radians(degree_gripper_camera_coordi)
            rad_tag_camera_coordi = math.radians(degree_tag_camera_coordi)
            print(f"Gripper opening:      {getOeffnung(line[0][0],line[0][1], line[1][0],line[1][1]):.1f} pixel         (in camera frame)")
            print(f"Gripper orientation:  {degree_gripper_camera_coordi:.1f}° = {rad_gripper_camera_coordi:.1f} rad   (in camera frame)")
            print(f"TCP position:         {line[0]} pixel    (in camera frame)")
            break

        # wait for a key to be pressed to exit
        cv2.waitKey(1)

################################################## (4.2) PART OF TEMPORARY RESULTS ##################################################

    # read the point cloud in path:xxx
    pcd_path =  f'data/rcvisard_pointcloud.ply'
    
    # read pcd and write it in variable "plc_point"
    pcl_points = read_pcd(pcd_path)

    # translate the pcd to a 640x480 depth-data
    IN_xdepths = real2pixel(pcl_points)

    # list of array 2x1 pixel coordinate, store it into IN_xpixels_bsp(as List)
    # width_pixel and high_pixel are the pixel coordinate(in form of 640x480) of TCP
    width_pixel = np.rint(line[0][0]/2)
    high_pixel = np.rint(line[0][1]/2)
    IN_xpixels_bsp = [(high_pixel,width_pixel)]

    # list of array 1x1 depth, store it into IN_xdepths_bsp(as List)
    # find the corresponding depth coordinates by locating the pixel coordinates of TCP in the same format of 480x640 coordinate system
    colum_pixel = int(width_pixel)
    row_pixel = int(high_pixel)
    IN_xdepths_bsp = [IN_xdepths[row_pixel,colum_pixel]]

    # with the input of 1) 2x1 pixel coordinate // 2) 1x1 depth ------> result:real x y z koordinate in meter in camera frame
    global out_real
    out_real = pixel2real(IN_xpixels_bsp,IN_xdepths_bsp)
    # print(f"TCP position (in camera frame):         {out_real} m")

    # alpha, betha , gamma translate to quaternion
    global quaternion
    quaternion = euler2quaternion(0,0,rad_tag_camera_coordi)
    # print("Orientation of Object in quaternion in camera frame is: ",quaternion)

################################################## (4.3) PART OF TRANSFORMATION-FUNCTION ##################################################

    ## do tranformation: camera coordinate to world(robot) coordinate
    extr = np.eye(4)

    # extr-parameter: rotation
    # read from hand-eye-calibration
    Q = np.zeros((1, 4))
    Q[0][0] = 0.7076      
    Q[0][1] = 0.7067
    Q[0][2] = 0.0015
    Q[0][3] = 0.0021
    R = Rotation.from_quat(Q).as_matrix()

    # etr-parameter: translation
    # read from hand-eye-calibration(sometimes X Y should be exchanged)
    T = np.zeros((3, 1))
    T[0] = -0.7786
    T[1] = -0.0614
    T[2] = 0.9726

    # rewrite the tranformation in matrix format
    extr[:3, :3] = R
    extr[:3, 3:] = T
    
    # rewrite the real coordinate(camera frame) in form of 1x3 
    pc_cam = np.zeros((1,3))
    pc_cam[0][0] = out_real[0]
    pc_cam[0][1] = out_real[1]
    pc_cam[0][2] = out_real[2]

################################################## (4.4) PART OF 2 FINAL RESULTS ##################################################

    ## get position of TCP
    global pc_world
    pc_world = pc_cam_to_pc_world(pc_cam, extr)

    ## get gripper orientation
    global gripper_orientation
    gripper_orientation = get_gripper_orientation_wrt_robot(degree_gripper_camera_coordi)
    ori0, ori1, ori2 = np.array(gripper_orientation)

    ## print
    print()
    print(f"Gripper orientation:  [{ori0: .4f} {ori1: .4f} {ori2: .4f}] °   (in robot frame)")
    print(f"TCP position:         {pc_world[0]} m   (in robot frame)")

    ## function output
    gps_yxrz = [[line[0][1], line[0][0], degree_gripper_camera_coordi],]
    return np.array(gps_yxrz), np.array([0])


if __name__ == "__main__":
    main()
