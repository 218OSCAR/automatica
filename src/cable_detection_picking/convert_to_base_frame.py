#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import yaml
import numpy as np
from scipy.spatial.transform import Rotation as R
from tf2_ros import Buffer, TransformListener
from geometry_msgs.msg import TransformStamped
from pathlib import Path

class GraspPoseTransformer(Node):
    def __init__(self):
        super().__init__('grasp_pose_transformer')

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.timer = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info('Waiting for tf between base_link and tool0...')

    def timer_callback(self):
        try:
            tf: TransformStamped = self.tf_buffer.lookup_transform('base_link','tool0',   rclpy.time.Time())
        except Exception as e:
            self.get_logger().warn(f"Transform not available yet: {str(e)}")
            return

        self.get_logger().info('Transform received! Proceeding with grasp pose transformation...')
        self.timer.cancel()

        current_file = Path(__file__).resolve()
        project_root = current_file.parent 

        # Load EE frame grasp pose
        # ee_pose_path = '/home/tailai/ros2_ws/src/cable_detection_picking/data/transformation_data/grasp_pose_ee_frame.yaml'
        ee_pose_path = project_root / "data" / "transformation_data" / "grasp_pose_ee_frame.yaml"
        with open(ee_pose_path, 'r') as f:
            ee_pose = yaml.safe_load(f)

        pos = ee_pose['position']
        ori = ee_pose['orientation']

        T_ee_grasp = np.eye(4)
        T_ee_grasp[:3, :3] = R.from_quat([ori['x'], ori['y'], ori['z'], ori['w']]).as_matrix()
        T_ee_grasp[:3, 3] = [pos['x'], pos['y'], pos['z']]

        # Get tf2: tool0 -> base_link
        trans = tf.transform.translation
        rot = tf.transform.rotation

        T_base_ee = np.eye(4)
        T_base_ee[:3, :3] = R.from_quat([rot.x, rot.y, rot.z, rot.w]).as_matrix()
        T_base_ee[:3, 3] = [trans.x, trans.y, trans.z]

        # Final transform
        T_base_grasp = T_base_ee @ T_ee_grasp
        pos_base = T_base_grasp[:3, 3]
        quat_base = R.from_matrix(T_base_grasp[:3, :3]).as_quat()

        base_pose = {
            'position': {
                'x': float(pos_base[0]),
                'y': float(pos_base[1]),
                'z': float(pos_base[2])
            },
            'orientation': {
                'x': float(quat_base[0]),
                'y': float(quat_base[1]),
                'z': float(quat_base[2]),
                'w': float(quat_base[3])
            }
        }

        # save_path = '/home/tailai/ros2_ws/src/cable_detection_picking/data/transformation_data/grasp_pose_base_frame.yaml'
        save_path = project_root / "data" / "transformation_data" / "grasp_pose_base_frame.yaml"
        with open(save_path, 'w') as f:
            yaml.dump(base_pose, f)

        self.get_logger().info(f'Grasp pose in base frame saved to: {save_path}')
        rclpy.shutdown()

def main():
    rclpy.init()
    node = GraspPoseTransformer()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
