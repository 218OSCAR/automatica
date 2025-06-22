import numpy as np

panda_flange_cam = np.array([
    [  -0.00955,    0.99995,    0.00344,  -95.28284],
    [  -0.999,     -0.00939,   -0.04372,   56.60873],
    [  -0.04369,   -0.00386,    0.99904,   84.6757 ],
    [   0.,         0. ,        0. ,        1.     ]
])

Rz_180 = np.array([
    [-1,  0,  0,  0],
    [ 0, -1,  0,  0],
    [ 0,  0,  1,  0],
    [ 0,  0,  0,  1]
])

# Rotate in local frame
rotated_matrix = np.dot(Rz_180, panda_flange_cam)
print(rotated_matrix)