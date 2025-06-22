# !/usr/bin/env python3

import rclpy
from sensor_msgs.msg import JointState
import socket
import pickle


# TARGET_UDP_IP = "172.17.0.1"
# TARGET_UDP_PORT = 5005

TARGET_UDP_IP = "192.168.50.89"
TARGET_UDP_PORT = 12345        


def joint_state_callback(msg):
    """
    Callback to process /joint_states and send valid panda joint positions via UDP.
    """
    # joints states without finger
    filtered_positions = []
    filtered_names = []

    for name, pos in zip(msg.name, msg.position):
        if "finger_joint" not in name:
            filtered_names.append(name)
            filtered_positions.append(pos)

    print(f"[INFO] Joint Names: {filtered_names}")
    print(f"[INFO] Joint Positions: {filtered_positions}")

    # Send the joint states using UDP
    data_bytes = pickle.dumps(filtered_positions)

    udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
    udp_socket.sendto(data_bytes, (TARGET_UDP_IP, TARGET_UDP_PORT))
    print(f"[UDP] Sent joint data to {TARGET_UDP_IP}:{TARGET_UDP_PORT}")


def main(args=None):
    rclpy.init(args=args)

    node = rclpy.create_node('panda_joint_states_udp_sender')
    node.create_subscription(JointState, '/joint_states', joint_state_callback, 10)

    try:
        print("[INFO] Subscribing to /joint_states and sending data via UDP...")
        rclpy.spin(node)
    except KeyboardInterrupt:
        print("\n[INFO] Shutting down.")
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

# #!/usr/bin/env python3

# import rclpy
# from rclpy.node import Node
# from sensor_msgs.msg import JointState

# import socket
# import pickle
# import numpy as np
# from collections import deque
# import roboticstoolbox as rtb
# from threading import Timer


# TARGET_UDP_IP = "192.168.50.89"
# TARGET_UDP_PORT = 12345


# DT = 0.01      # Interpolation time interval (s)
# TACC = 0.1     # Acceleration time (s)
# QDMAX = 0.5    # Maximum speed (rad/s)
# BUFFER_SIZE = 10  # Minimum track points


# class JointStateInterpolator(Node):
#     def __init__(self):
#         super().__init__('panda_joint_state_interpolator')

#         self.subscription = self.create_subscription(
#             JointState,
#             '/joint_states',
#             self.joint_state_callback,
#             10)

#         self.trajectory_buffer = deque(maxlen=BUFFER_SIZE)
#         self.timer = None
#         self.interpolated_points = []

#         self.get_logger().info("Listening to /joint_states and preparing interpolated UDP sender...")

#     def joint_state_callback(self, msg):
#         filtered_positions = [
#             pos for name, pos in zip(msg.name, msg.position)
#             if "finger_joint" not in name
#         ]

#         self.trajectory_buffer.append(filtered_positions)

#         # When the cache is full, interpolation is performed
#         if len(self.trajectory_buffer) == self.trajectory_buffer.maxlen:
#             traj = np.array(self.trajectory_buffer)

#             try:
#                 smooth = rtb.tools.trajectory.mstraj(
#                     traj,
#                     dt=DT,
#                     tacc=TACC,
#                     qdmax=QDMAX,
#                     q0=traj[0]
#                 )
#                 self.interpolated_points = smooth.q.tolist()
#                 self.get_logger().info(f"Generated {len(self.interpolated_points)} interpolated points.")

#                 # Start the timer and send point by point according to the frequency
#                 self.start_sending()
#             except Exception as e:
#                 self.get_logger().error(f"Trajectory interpolation failed: {e}")

#     def start_sending(self):
#         if self.interpolated_points:
#             next_point = self.interpolated_points.pop(0)

#             # Sending UDP
#             self.send_udp(next_point)

#             # If there are still points, set the next timer
#             if self.interpolated_points:
#                 self.timer = Timer(DT, self.start_sending)
#                 self.timer.start()

#     def send_udp(self, joint_position):
#         data_bytes = pickle.dumps(joint_position)
#         udp_socket = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
#         udp_socket.sendto(data_bytes, (TARGET_UDP_IP, TARGET_UDP_PORT))
#         self.get_logger().info(f"[UDP] Sent interpolated joint data.")

#     def destroy_node(self):
#         if self.timer:
#             self.timer.cancel()
#         super().destroy_node()


# def main(args=None):
#     rclpy.init(args=args)
#     node = JointStateInterpolator()
#     try:
#         rclpy.spin(node)
#     except KeyboardInterrupt:
#         node.get_logger().info("Shutting down...")
#     finally:
#         node.destroy_node()
#         rclpy.shutdown()


# if __name__ == '__main__':
#     main()