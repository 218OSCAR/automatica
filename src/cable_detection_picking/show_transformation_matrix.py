# import numpy as np
# import matplotlib.pyplot as plt
# from mpl_toolkits.mplot3d import Axes3D

# # Define the transformation matrix (from user input)
# # T = np.array([
# #     [-0.04008,  0.98342,  0.17688, -74.52176],
# #     [-0.99842, -0.03244, -0.04586,  58.41246],
# #     [-0.03936, -0.17844,  0.98316, -98.41952],
# #     [0.0,      0.0,      0.0,       1.0]
# # ])
# T = np.array([[  -0.00955,    0.99995,    0.00344,  -95.28284],
#  [  -0.999,     -0.00939,   -0.04372,   56.60873],
#  [  -0.04369,   -0.00386,    0.99904,   84.6757 ],
#  [   0.,         0. ,        0. ,        1.     ]
# ])
# T =  np.linalg.inv(T)

# # Extract rotation and translation
# R = T[:3, :3]
# t = T[:3, 3]

# # Define axis length
# axis_length = 20

# # Origin coordinate system
# origin = np.array([0, 0, 0])
# x_axis = np.array([axis_length, 0, 0])
# y_axis = np.array([0, axis_length, 0])
# z_axis = np.array([0, 0, axis_length])

# # Transformed coordinate system
# transformed_origin = t
# transformed_x = R @ x_axis + t
# transformed_y = R @ y_axis + t
# transformed_z = R @ z_axis + t

# # Plotting
# fig = plt.figure()
# ax = fig.add_subplot(111, projection='3d')
# ax.set_title("Coordinate Frame Transformation")

# # Plot original coordinate frame (world)
# ax.quiver(*origin, *x_axis, color='r', label='World X')
# ax.quiver(*origin, *y_axis, color='g', label='World Y')
# ax.quiver(*origin, *z_axis, color='b', label='World Z')

# # Plot transformed coordinate frame
# ax.quiver(*transformed_origin, *(transformed_x - transformed_origin), color='r', linestyle='dashed', label='Transformed X')
# ax.quiver(*transformed_origin, *(transformed_y - transformed_origin), color='g', linestyle='dashed', label='Transformed Y')
# ax.quiver(*transformed_origin, *(transformed_z - transformed_origin), color='b', linestyle='dashed', label='Transformed Z')

# # Set limits for better visualization
# ax.set_xlim([-100, 50])
# ax.set_ylim([-100, 100])
# ax.set_zlim([-150, 50])
# ax.set_xlabel('X')
# ax.set_ylabel('Y')
# ax.set_zlabel('Z')

# # Show plot
# plt.legend()
# plt.tight_layout()
# plt.show()


import numpy as np
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

# Transformation matrix: Flange → Camera
# T = np.array([
#     [  -0.00955,    0.99995,    0.00344,  -95.28284],
#     [  -0.999,     -0.00939,   -0.04372,   56.60873],
#     [  -0.04369,   -0.00386,    0.99904,   84.6757 ],
#     [   0.,         0. ,        0. ,        1.     ]
# ])

T = np.array([
[ 9.550000e-03, -9.999500e-01,  3.440000e-03, 9.528284e+01],
 [ 9.990000e-01,  9.390000e-03, -4.372000e-02,  -5.660873e+01],
 [ 4.369000e-02,  3.860000e-03,  9.990400e-01,  8.467570e+01],
 [ 0.000000e+00,  0.000000e+00,  0.000000e+00,  1.000000e+00]
])

# Convert from mm to m
T[:3, 3] = T[:3, 3] / 1000  # Now T in meters

# Extract rotation and translation
R = T[:3, :3]
t = T[:3, 3]

# Axis length for visualization
axis_length = 0.1  # 10 cm

# Define origin coordinate system (flange frame)
origin = np.array([0, 0, 0])
x_axis = np.array([axis_length, 0, 0])
y_axis = np.array([0, axis_length, 0])
z_axis = np.array([0, 0, axis_length])

# Transformed coordinate system (camera frame)
transformed_origin = t
transformed_x = R @ x_axis + t
transformed_y = R @ y_axis + t
transformed_z = R @ z_axis + t

# Grasp point in camera frame (unit: m)
point_cam = np.array([-0.0408, -0.0034, 0.5463, 1.0])

# Compute inverse of T: Camera → Flange
T_inv = np.linalg.inv(T)
point_flange = T @ point_cam
point_flange = point_flange[:3]  # Drop homogeneous component

# Print coordinates
print("Grasp point in camera frame:", point_cam[:3])
print("Grasp point in flange frame:", point_flange)

# Plotting
fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')
ax.set_title("Coordinate Frame Transformation and Grasp Point")

# Plot flange frame
ax.quiver(*origin, *x_axis, color='r', label='Flange X')
ax.quiver(*origin, *y_axis, color='g', label='Flange Y')
ax.quiver(*origin, *z_axis, color='b', label='Flange Z')

# Plot camera frame
ax.quiver(*transformed_origin, *(transformed_x - transformed_origin), color='r', linestyle='dashed', label='Camera X')
ax.quiver(*transformed_origin, *(transformed_y - transformed_origin), color='g', linestyle='dashed', label='Camera Y')
ax.quiver(*transformed_origin, *(transformed_z - transformed_origin), color='b', linestyle='dashed', label='Camera Z')

# Plot grasp point
ax.scatter(*point_cam[:3], color='orange', s=50, label='Grasp (Cam frame)')
ax.scatter(*point_flange, color='purple', s=50, label='Grasp (Flange frame)')

# Draw lines from origins to the grasp point
ax.plot([*origin[0:1], point_flange[0]], [*origin[1:2], point_flange[1]], [*origin[2:3], point_flange[2]], 'm--', label='Vec: Flange → Grasp')
ax.plot([*transformed_origin[0:1], point_cam[0]], [*transformed_origin[1:2], point_cam[1]], [*transformed_origin[2:3], point_cam[2]], 'c--', label='Vec: Camera → Grasp')

# Axis settings
ax.set_xlim([-0.2, 0.2])
ax.set_ylim([-0.2, 0.2])
ax.set_zlim([-0.1, 0.7])
ax.set_xlabel('X (m)')
ax.set_ylabel('Y (m)')
ax.set_zlabel('Z (m)')
ax.legend()
plt.tight_layout()
plt.show()
