import numpy as np
from roboticstoolbox import tools as rtb_tools

# Step 1: 读取 traj.txt 中的纯关节值（每行7个浮点数）
traj_list = []
with open('/root/ros_ws/src/cable_detection_picking/script/traj.txt', 'r') as file:
    for line in file:
        line = line.strip()
        if line:  # 非空行
            values = [float(x) for x in line.split()]
            if len(values) == 7:
                traj_list.append(values)

# Step 2: 插值处理
traj = np.array(traj_list)
smooth_traj = rtb_tools.mstraj(traj, dt=0.001, tacc=0.1, qdmax=0.5)

# Step 3: 保存回原始文件
with open('/root/ros_ws/src/cable_detection_picking/script/traj.txt', 'w') as file:
    for point in smooth_traj.q:
        line = ' '.join(f'{x:.15f}' for x in point)
        file.write(line + '\n')

print(" 插值后的轨迹已保存到原始 traj.txt 文件中。")
