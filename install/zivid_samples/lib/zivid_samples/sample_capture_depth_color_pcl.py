#!/usr/bin/env python3

import sys
import numpy as np
import cv2
import open3d as o3d
import os


from rcl_interfaces.srv import SetParameters
import rclpy
from rclpy.executors import ExternalShutdownException
from rclpy.node import Node
from rclpy.parameter import Parameter

from std_srvs.srv import Trigger
from sensor_msgs.msg import Image, PointCloud2
import sensor_msgs
import sensor_msgs_py.point_cloud2 as pc2
from cv_bridge import CvBridge



class SampleCombined(Node):

    def __init__(self):
        super().__init__('sample_combined_capture')
        self.bridge = CvBridge()

        self.rgb_saved = False
        self.pcd_saved = False

        # ========== create the service ==========
        self.capture_2d_service = self.create_client(Trigger, 'capture_2d')
        self.capture_3d_service = self.create_client(Trigger, 'capture')

        while not self.capture_2d_service.wait_for_service(timeout_sec=3.0):
            self.get_logger().info('capture_2d service not available, waiting...')
        while not self.capture_3d_service.wait_for_service(timeout_sec=3.0):
            self.get_logger().info('capture service not available, waiting...')

        # ========== setting parameters ==========
        self._set_2d_settings()
        self._set_3d_settings()

        # ========== subscribe topics ==========
        self.create_subscription(Image, 'color/image_color', self.on_rgb_image, 10)
        self.create_subscription(Image, 'depth/image', self.on_depth_image, 10)
        self.create_subscription(PointCloud2, 'points/xyzrgba', self.on_point_cloud, 10)

    def _set_2d_settings(self):
        self.get_logger().info('Setting 2D parameters...')
        settings_2d = Parameter(
            'settings_2d_yaml',
            Parameter.Type.STRING,
            """
__version__:
  serializer: 1
  data: 3
Settings2D:
  Acquisitions:
    - Acquisition:
        Aperture: 2.83
        Brightness: 1.0
        ExposureTime: 10000
        Gain: 2.5
""",
        ).to_parameter_msg()

        param_client = self.create_client(SetParameters, 'zivid_camera/set_parameters')
        while not param_client.wait_for_service(timeout_sec=3):
            self.get_logger().info('Waiting for param service (2D)...')

        future = param_client.call_async(SetParameters.Request(parameters=[settings_2d]))
        rclpy.spin_until_future_complete(self, future, timeout_sec=10)

    def _set_3d_settings(self):
        self.get_logger().info('Setting 3D parameters...')
        settings_3d = Parameter(
            'settings_yaml',
            Parameter.Type.STRING,
            """
__version__:
  serializer: 1
  data: 22
Settings:
  Acquisitions:
    - Acquisition:
        Aperture: 5.66
        ExposureTime: 8333
  Processing:
    Filters:
      Outlier:
        Removal:
          Enabled: yes
          Threshold: 5
""",
        ).to_parameter_msg()

        param_client = self.create_client(SetParameters, 'zivid_camera/set_parameters')
        while not param_client.wait_for_service(timeout_sec=3):
            self.get_logger().info('Waiting for param service (3D)...')

        future = param_client.call_async(SetParameters.Request(parameters=[settings_3d]))
        rclpy.spin_until_future_complete(self, future, timeout_sec=10)

    def capture_all(self):
        self.get_logger().info('Calling capture_2d...')
        future_2d = self.capture_2d_service.call_async(Trigger.Request())
        rclpy.spin_until_future_complete(self, future_2d)
        self.get_logger().info('2D capture complete.')

        self.get_logger().info('Calling capture (3D)...')
        future_3d = self.capture_3d_service.call_async(Trigger.Request())
        rclpy.spin_until_future_complete(self, future_3d)
        self.get_logger().info('3D capture complete.')

    # ==========call back functions ==========
    def on_rgb_image(self, msg):
        if self.rgb_saved:
            return

        self.get_logger().info(f'Received RGB image: {msg.width} x {msg.height}')
        # img = np.frombuffer(msg.data, dtype=np.uint8)
        # if img.size != msg.height * msg.width * 3:
        #     self.get_logger().error(f"Unexpected image size: {img.size}, expected {msg.height * msg.width * 3}")
        #     return
        # img = img.reshape((msg.height, msg.width, 3))

        # # img = np.frombuffer(msg.data, dtype=np.uint8).reshape((msg.height, msg.width, 3))
        # save_path = '/home/tailai/ros2_ws/src/masterthesis_pachler/data/camera_image.png'
        # cv2.imwrite(save_path, img)
        # self.get_logger().info(f'RGB image saved to {save_path}')
        try:
            # use cv_bridge automatically turn into RGB
            cv_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding='bgr8')  
            image_rgb = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)

            # save_path = '/home/tailai/ros2_ws/src/cable_detection_picking/data/camera_image.png'##change the path into the path which you whant to save the images.
            save_path = '/root/ros_ws/src/cable_detection_picking/data/camera_image.png'
            os.makedirs(os.path.dirname(save_path), exist_ok=True)
            cv2.imwrite(save_path, image_rgb)

            self.get_logger().info(f" RGB image saved to {save_path}")
            self.rgb_saved = True

        except Exception as e:
            self.get_logger().error(f" Failed to process and save RGB image: {e}")

        self.rgb_saved = True

    def on_depth_image(self, msg):
        self.get_logger().info(f'Received Depth image: {msg.width} x {msg.height}')
        # try:
        #     cv_depth = self.bridge.imgmsg_to_cv2(msg, desired_encoding='passthrough')


        #     save_path = '/home/tailai/ros2_ws/src/masterthesis_pachler/data/depth_image/depth_image.npz'
        #     os.makedirs(os.path.dirname(save_path), exist_ok=True)

        #     np.savez_compressed(save_path, depth=cv_depth)

        #     self.get_logger().info(f'Depth image saved to {save_path} ')

        # except Exception as e:
        #     self.get_logger().error(f'Failed to process and save depth image: {e}')

    def on_point_cloud(self, msg):
        if self.pcd_saved:
            return

        self.get_logger().info(f'Received PointCloud: {msg.width} x {msg.height}')
        points = list(pc2.read_points(msg, field_names=["x", "y", "z", "rgba"], skip_nans=True))
        if not points:
            self.get_logger().warn(" Received empty point cloud. Skip saving.")
            return
        # points = []
        # for p in pc2.read_points(msg, field_names=["x", "y", "z", "rgb"], skip_nans=True):
        #     x, y, z, rgba = p
        #     r = int((rgba >> 16) & 0xFF)
        #     g = int((rgba >> 8) & 0xFF)
        #     b = int(rgba & 0xFF)
        #     points.append([x, y, z, r, g, b])

        # if points:
        #     xyzrgb = np.array(points, dtype=np.float32)
        #     pcd = o3d.geometry.PointCloud()
        #     pcd.points = o3d.utility.Vector3dVector(xyzrgb[:, :3])
        #     pcd.colors = o3d.utility.Vector3dVector(xyzrgb[:, 3:] / 255.0)

        #     save_path = '/home/tailai/ros2_ws/src/masterthesis_pachler/data/camera_pointcloud/camera_pointcloud.ply'
        #     o3d.io.write_point_cloud(save_path, pcd)
        #     self.get_logger().info(f'PointCloud saved to {save_path}')
        #     self.pcd_saved = True
        try:
            points = []
            for p in pc2.read_points(msg, field_names=["x", "y", "z", "rgba"], skip_nans=True):
                x, y, z, rgba = p
                r = (int(rgba) >> 16) & 0xFF
                g = (int(rgba) >> 8) & 0xFF
                b = int(rgba) & 0xFF
                points.append([x, y, z, r, g, b])

            if not points:
                self.get_logger().warn(" Empty point cloud received, skipping save.")
                return

            xyzrgb = np.array(points, dtype=np.float32)
            pcd = o3d.geometry.PointCloud()
            pcd.points = o3d.utility.Vector3dVector(xyzrgb[:, :3])
            pcd.colors = o3d.utility.Vector3dVector(xyzrgb[:, 3:] / 255.0)

            # save_path = '/home/tailai/ros2_ws/src/cable_detection_picking/data/camera_pointcloud.ply'
            save_path = '/root/ros_ws/src/cable_detection_picking/data/camera_pointcloud.ply'
            os.makedirs(os.path.dirname(save_path), exist_ok=True)
            o3d.io.write_point_cloud(save_path, pcd)
            self.get_logger().info(f' PointCloud saved to {save_path}')
            self.pcd_saved = True

        except Exception as e:
            self.get_logger().error(f" Failed to save PointCloud: {e}")


def main(args=None):
    rclpy.init(args=args)

    try:
        node = SampleCombined()
        node.get_logger().info('Spinning node. Press Ctrl+C to stop.')

        while rclpy.ok():
            node.capture_all()
            rclpy.spin_once(node, timeout_sec=1.0)

    except (KeyboardInterrupt, ExternalShutdownException):
        pass
    finally:
        sys.exit(1)


if __name__ == '__main__':
    main()
