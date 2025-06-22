#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import yaml
import numpy as np
from scipy.spatial.transform import Rotation as R
from tf2_ros import Buffer, TransformListener
from geometry_msgs.msg import TransformStamped
from pathlib import Path

class PandaGraspPoseTransformer(Node):
    def __init__(self):
        super().__init__('panda_grasp_pose_transformer')

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.timer = self.create_timer(1.0, self.timer_callback)
        self.get_logger().info('Waiting for tf betwflangen panda_link0 and panda_link8 (flange)...')

    def timer_callback(self):
        try:
            tf: TransformStamped = self.tf_buffer.lookup_transform(
                'panda_link0', 'panda_link8', rclpy.time.Time())
        except Exception as e:
            self.get_logger().warn(f"Transform not available yet: {str(e)}")
            return

        self.get_logger().info('Transform received! Proceeding with grasp pose transformation...')
        self.timer.cancel()

        # Get the current script path and locate the grasp pose file location
        current_file = Path(__file__).resolve()
        project_root = current_file.parent
        flange_pose_path = project_root / "data" / "transformation_data" / "grasp_pose_flange_frame.yaml"

        # Load the grasping pose with flange frame
        with open(flange_pose_path, 'r') as f:
            flange_pose = yaml.safe_load(f)

        pos = flange_pose['position']
        ori = flange_pose['orientation']

        T_flange_grasp = np.eye(4)
        T_flange_grasp[:3, :3] = R.from_quat([ori['x'], ori['y'], ori['z'], ori['w']]).as_matrix()
        T_flange_grasp[:3, 3] = [pos['x'], pos['y'], pos['z']]

        # TF: flange → base
        trans = tf.transform.translation
        rot = tf.transform.rotation

        T_base_flange = np.eye(4)
        T_base_flange[:3, :3] = R.from_quat([rot.x, rot.y, rot.z, rot.w]).as_matrix()
        T_base_flange[:3, 3] = [trans.x, trans.y, trans.z]

        # calculate base → grasp
        T_base_grasp = T_base_flange @ T_flange_grasp
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

        save_path = project_root / "data" / "transformation_data" / "grasp_pose_base_frame_panda.yaml"
        with open(save_path, 'w') as f:
            yaml.dump(base_pose, f)

        self.get_logger().info(f'Grasp pose in base frame saved to: {save_path}')
        rclpy.shutdown()

def main():
    rclpy.init()
    node = PandaGraspPoseTransformer()
    rclpy.spin(node)

if __name__ == '__main__':
    main()
