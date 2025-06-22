
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
import subprocess
import yaml
import numpy as np
from scipy.spatial.transform import Rotation as R
import time
from std_msgs.msg import String
from ament_index_python.packages import get_package_share_directory
import os
from pathlib import Path
import signal
from sensor_msgs.msg import JointState
import socket
import pickle

# from action import RunPipeline
from cable_detection_picking.action import RunPipeline

class RunPipelineServer(Node):

    def __init__(self):
        super().__init__('run_pipeline_server')
        project_root = Path(__file__).resolve().parent.parent  # /cable_detection_picking
        # udp_script = project_root / "panda_joint_states_subscriber_udp.py"
        # self.joint_udp_proc = subprocess.Popen(["python3", str(udp_script)])
        # self.get_logger().info("Started panda_joint_states_subscriber_udp.py as background process.")

        self._action_server = ActionServer(
            self,
            RunPipeline,
            'run_full_pipeline',
            self.execute_callback
        )

    def sleep(self, seconds):
        self.get_clock().sleep_for(rclpy.duration.Duration(seconds=seconds))


    async def execute_callback(self, goal_handle):
        self.get_logger().info('Received request to start pipeline')

        feedback_msg = RunPipeline.Feedback()

        self.move_done = False

        def move_done_callback(msg):

            if msg.data.startswith("done"):
                self.get_logger().info(f"Received '{msg.data}' from MoveIt app.")
                self.move_done = True

        self.create_subscription(String, "/move_done", move_done_callback, 10)

        try:
            # Step 1: Move the robot to camera capturing pose
            feedback_msg.current_step = 'Moving to capture pose...'
            # # send traj by udp
            # #----
            # udp_script = Path(__file__).resolve().parent.parent / "panda_joint_states_subscriber_udp.py"
            # self.joint_udp_proc = subprocess.Popen(["python3", str(udp_script)])
            # self.get_logger().info("Started UDP subscriber for pre_grasp.")
            # #-----
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(feedback_msg.current_step)

            try:
                # # UR10E
                # subprocess.Popen(
                #     ["bash", "-c", "ros2 launch simple_moveit_app simple_moveit_app.launch.py mode:=pre_grasp"]
                # )
                # Panda



                subprocess.Popen(
                    ["bash", "-c", "ros2 launch panda_moveit_python motion_planning_python_api_tutorial.launch.py mode:=pre_grasp"]
                )
                timeout = 20  
                start_time = time.time()
                while not self.move_done and (time.time() - start_time < timeout):
                    rclpy.spin_once(self)

                if not self.move_done:
                    self.get_logger().warn("Timeout waiting for move_done signal. Proceeding anyway.")
                else:
                    self.get_logger().info("Robot movement completed. Proceeding to capture.")
                    
                    
                # #Stop sending UDP
                # #--------
                # if self.joint_udp_proc:
                #      #First notify the second computer that it can end receiving
                #     try:
                #         sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
                #         sock.sendto(b'END', ("192.168.50.90", 12345)) 
                #         sock.close()
                #         self.get_logger().info("Sent UDP termination signal ('END') to receiver.")
                #     except Exception as e:
                #         self.get_logger().warn(f"Failed to send termination signal: {e}")
                #     self.get_logger().info("Stopping UDP joint state sender for pre_grasp.")
                #     self.joint_udp_proc.send_signal(signal.SIGINT)
                #     self.joint_udp_proc.wait()
                #     self.joint_udp_proc = None
                # #---------
                    
            except Exception as e:
                self.get_logger().warn(f"[Step 1 Warning] Failed to launch but continuing. Error: {e}")

            # Step 1.5 Wait for the second computer to send a UDP confirmation signal of traj_executed
            self.get_logger().info("Waiting for traj_executed confirmation from second PC...")

            try:
                recv_sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
                recv_sock.bind(("192.168.50.182", 54322))  
                recv_sock.settimeout(3)  

                while True:
                    data, addr = recv_sock.recvfrom(1024)
                    if data.decode().strip() == "traj_executed":
                        self.get_logger().info(f"Received traj_executed signal from {addr}. Proceeding.")
                        break
                    else:
                        self.get_logger().info(f"Ignored unexpected message: {data.decode().strip()}")

                recv_sock.close()
            except socket.timeout:
                self.get_logger().warn("Timeout waiting for traj_executed signal. Proceeding anyway.")
            except Exception as e:
                self.get_logger().warn(f"Error while waiting for traj_executed: {e}")
            # # Step 1: run Zivid driver
            # feedback_msg.current_step = 'Starting Zivid camera driver...'
            # goal_handle.publish_feedback(feedback_msg)
            # self.get_logger().info(feedback_msg.current_step)
            # # subprocess.Popen(["ros2", "run", "zivid_camera", "zivid_camera"])
            # subprocess.Popen(["bash", "-c",
            #     "source ~/venv_open3d/bin/activate && source ~/ros2_ws/install/setup.bash && ros2 run zivid_camera zivid_camera"
            # ])

            # self.get_logger().info('Waiting 5 seconds for Zivid to initialize...')
            # self.sleep(20)

            # # Step 2: Capture rgb and point cloud
            # feedback_msg.current_step = 'Capturing pointcloud and image...'
            # goal_handle.publish_feedback(feedback_msg)
            # self.get_logger().info(feedback_msg.current_step)

            # process = subprocess.Popen(
            #     ["bash", "-c",
            #     "source ~/venv_open3d/bin/activate && source ~/ros_ws/install/setup.bash && ros2 launch zivid_samples sample.launch sample:=sample_capture_depth_color_pcl.py"],
            #     stdout=subprocess.PIPE,
            #     stderr=subprocess.STDOUT,
            #     text=True,
            #     bufsize=1,
            #     universal_newlines=True
            # )

            # # Use keyword matching (more flexible)
            # image_saved_keyword = 'RGB image saved to'
            # pcl_saved_keyword = 'PointCloud saved to'

            # image_saved_detected = False
            # pcl_saved_detected = False

            # # Read and match by keyword
            # for line in process.stdout:
            #     self.get_logger().info(f"[Zivid Sample]: {line.strip()}")

            #     if image_saved_keyword in line:
            #         image_saved_detected = True
            #         self.get_logger().info("Detected image save confirmation.")

            #     if pcl_saved_keyword in line:
            #         pcl_saved_detected = True
            #         self.get_logger().info("Detected point cloud save confirmation.")

            #     if image_saved_detected and pcl_saved_detected:
            #         self.get_logger().info("Both image and point cloud have been saved — terminating Zivid sample process.")
            #         process.terminate()
            #         break

            # # Ensure process exits
            # try:
            #     process.wait(timeout=5)
            # except subprocess.TimeoutExpired:
            #     self.get_logger().warn("Process did not exit in time, killing it forcefully.")
            #     process.kill()



            # Step 3: Processing
            feedback_msg.current_step = 'Processing pointcloud and image...'
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(feedback_msg.current_step)

            # subprocess.run(["bash", "-c",
            #     "source /home/tailai/miniconda3/etc/profile.d/conda.sh && conda activate sam21 && cd /home/tailai/ros2_ws/src/cable_detection_picking && python3 /home/tailai/ros2_ws/src/cable_detection_picking/sam2/_2_segmentation_SAM21.py"
            # ], check=True)##change the path to yours
            current_dir = Path(__file__).resolve().parent
            project_root = current_dir.parent
            script_path = project_root / "sam2" / "_2_segmentation_SAM21.py"
            bash_command = f'''
            source ~/miniconda3/etc/profile.d/conda.sh && \
            conda activate sam21 && \
            cd "{project_root}" && \
            python3 "{script_path}"
            '''
            subprocess.run(["bash", "-c", bash_command], check=True)

            # Step 4: calculate grasp point
            feedback_msg.current_step = 'Estimating grasp pose...'
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(feedback_msg.current_step)
            # subprocess.run(["bash", "-c",
            #     "source /home/tailai/miniconda3/etc/profile.d/conda.sh && conda activate sam21 && cd /home/tailai/ros2_ws/src/cable_detection_picking && python3 /home/tailai/ros2_ws/src/cable_detection_picking/_3_estimation_actuation.py"
            # ], check=True)
            current_dir = Path(__file__).resolve().parent
            project_root = current_dir.parent
            script_path = project_root / "_3_estimation_actuation.py"
            bash_command = f'''
            source ~/miniconda3/etc/profile.d/conda.sh && \
            conda activate sam21 && \
            cd "{project_root}" && \
            python3 "{script_path}"
            '''
            subprocess.run(["bash", "-c", bash_command], check=True)


            # Step 5: Transform grasp pose to base frame
            feedback_msg.current_step = 'Transforming grasp pose to base frame...'
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(feedback_msg.current_step)
            # subprocess.run(["bash", "-c",
            #     "python3 /home/tailai/ros2_ws/src/cable_detection_picking/convert_to_base_frame.py"
            # ], check=True)
            current_dir = Path(__file__).resolve().parent
            project_root = current_dir.parent
            # #UR10E
            # script_path = project_root / "convert_to_base_frame.py"
            #panda
            script_path = project_root / "convert_to_base_frame_panda.py"
            subprocess.run(["bash", "-c", f'python3 "{script_path}"'], check=True)

            # # Step 6: Move the robot to grasp 
            feedback_msg.current_step = 'Moving to grasp pose...'
            
            # # send traj by udp
            # #----
            # udp_script = Path(__file__).resolve().parent.parent / "panda_joint_states_subscriber_udp.py"
            # self.joint_udp_proc = subprocess.Popen(["python3", str(udp_script)])
            # self.get_logger().info("Started UDP subscriber for pre_grasp.")
            # #-----
            
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(feedback_msg.current_step)

            self.move_done = False ## Reset the move_done 

            try:
                # #UR10E
                # subprocess.Popen(
                #     ["bash", "-c", "ros2 launch simple_moveit_app simple_moveit_app.launch.py mode:=grasp"]
                # )
                
                #panda
                subprocess.Popen(
                    ["bash", "-c", "ros2 launch panda_moveit_python motion_planning_python_api_tutorial.launch.py mode:=grasp"]
                )
                timeout = 20  
                start_time = time.time()
                while not self.move_done and (time.time() - start_time < timeout):
                    rclpy.spin_once(self)

                if not self.move_done:
                    self.get_logger().warn("Timeout waiting for move_done signal. Proceeding anyway.")
                else:
                    self.get_logger().info("Robot movement completed. Proceeding to capture.")
                    
                    
                # #Stop sending UDP
                # #--------
                # if self.joint_udp_proc:
                #      #First notify the second computer that it can end receiving
                #     try:
                #         sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
                #         sock.sendto(b'END', ("192.168.50.90", 12345)) 
                #         sock.close()
                #         self.get_logger().info("Sent UDP termination signal ('END') to receiver.")
                #     except Exception as e:
                #         self.get_logger().warn(f"Failed to send termination signal: {e}")
                #     self.get_logger().info("Stopping UDP joint state sender for pre_grasp.")
                #     self.joint_udp_proc.send_signal(signal.SIGINT)
                #     self.joint_udp_proc.wait()
                #     self.joint_udp_proc = None
                # #---------
                
            except Exception as e:
                self.get_logger().warn(f"[Step 1 Warning] Failed to launch but continuing. Error: {e}")
            
            
            goal_handle.succeed()
            result = RunPipeline.Result()
            result.success = True
            result.message = 'Pipeline completed successfully!'
            return result

        except subprocess.CalledProcessError as e:
            goal_handle.abort()
            result = RunPipeline.Result()
            result.success = False
            result.message = f'Pipeline failed: {str(e)}'
            return result

    def destroy_node(self):  
        super().destroy_node()
        if hasattr(self, 'joint_udp_proc'):
            self.get_logger().info("Terminating panda_joint_states_subscriber_udp.py...")
            self.joint_udp_proc.send_signal(signal.SIGINT)

    async def sleep(self, seconds):
        await self.get_clock().sleep_for(rclpy.duration.Duration(seconds=seconds))

def main(args=None):
    rclpy.init(args=args)
    node = RunPipelineServer()
    try:
        rclpy.spin(node)
    finally:
        node.destroy_node()
        rclpy.shutdown()
    

if __name__ == '__main__':
    main()
