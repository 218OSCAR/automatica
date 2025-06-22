### Prerequisites
- Ubuntu 24.04 LTS
- Install ROS2 Jazzy, as explained [here](https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html) -> Do not forget to source `/opt/ros/jazzy/setup.bash`
- The [URDriver](https://github.com/UniversalRobots/Universal_Robots_ROS2_Driver?tab=readme-ov-file) package was installed via rosdep by the universal_robots_ur10e package earlier
- It is recommended to set the `ROS_DOMAIN_ID` as explained in the Wiki to prevent unwanted interactions between different running ROS setups, e.g. `export ROS_DOMAIN_ID=25` (in all terminals) or add it to your `~/.bashrc` file.

### Installation
1. Add this package as git submodule to your application, e.g. in `<your-ros-ws>/src/`: `git submodule add <package-git-link>`
2. Install the packages from the `package.xml`: `rosdep install --from-paths src -y --ignore-src` (before execute `rosdep update` and `sudo apt-get update`)
(More information on rosdep: [documentation](https://docs.ros.org/en/jazzy/Tutorials/Intermediate/Rosdep.html)) and [available packages](https://github.com/ros/rosdistro/blob/master/jazzy/distribution.yaml)
3. The file in the `config/` folder can be adjusted to your needs and extended by sensors, ...
4. In `<your-ros-ws>` build the package using `colcon build` (in case of errors try to remove folders `build`, `install` and `log` in your ROS workspace)
5. Source the workspace in `<your-ros-ws>`: `source install/setup.bash`

### Example Usage
The robot is already turned on and MoveIt is running in a separate terminal (see universal_robots_ur10e repo)
1. In a sourced terminal, execute: `ros2 launch ur_moveit_cpp moveit_cpp_tutorial.launch.py`
You should now see the robot move to the Cartesian position defined in `moveit_cpp_tutorial.cpp`

### Possible errors

- Currently the package always finished with an error like this:
```
[ERROR] [moveit_cpp_tutorial-4]: process has died [pid 196485, exit code -6, cmd '/home/tailai/ros2_ws/install/ur_moveit_cpp/lib/ur_moveit_cpp/moveit_cpp_tutorial --ros-args -r __node:=moveit_cpp_tutorial --params-file /tmp/launch_params_ywtn_qbu'].
```

---
Maintainer: go34beq@mytum.de
