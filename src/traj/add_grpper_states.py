import numpy as np


input_path = "/root/ros_ws/src/traj/place_traj.txt"  
output_path = "/root/ros_ws/src/traj/place_traj_with_gripper.txt"  


data = np.loadtxt(input_path, delimiter=",")


gripper_values = np.full((data.shape[0], 2), 0.000000)


new_data = np.hstack((data, gripper_values))


np.savetxt(output_path, new_data, fmt="%.7f", delimiter=",")

print(f"Saved extended trajectory to: {output_path}")
