pw geometry_msgs/msg/Twist
ros2 interface proto geometry_msgs/msg/Twist
ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.1, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.0}}"
ros2 topic pub --once /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 0.0}}"
ros2 interface show sensor_msgs/msg/LaserScan
colcon build --packages-select publisher_pkg
ros2 pkg create --build-type ament_python subscriber_pkg --dependencies rclpy std_msgs sensor_msgs
ros2 pkg create client_pkg --build-type ament_python --dependencies rclpy std_srvs
colcon build --cmake-args -DTRACETOOLS_DISABLED=ON
ros2 pkg create --build-type ament_pytho my_box_bot_description --dependencies rclpy
ros2 run spawn_robot_tools_pkg inertia_wizzard

sudo apt install ros-humble-ros2-control ros-humble-ros2-controllers ros-humble-gazebo-ros2-control
sudo apt install ros-humble-rmw-cyclonedds-cpp
sudo apt install ros-humble-twist-mux
sudo killall rosmaster
sudo killall gzserver
sudo killall gzclient
/root/ros2_code/humble/learning/src/articubot_one/maps/my_map_save
/root/ros2_code/humble/learning/src/articubot_one/maps/my_map_serial

63 
63 
63 
63     1  cd 
63     2  cd config/
63     3  ls
63     4  ll
63     5  vi .bash_history 
63     6  lql
63     7  vi .bashrc
63     8  cd 
63     9  vi .bashrc
cd 
cd config/
ls
ll
vi .bash_history 
lql
vi .bashrc
cd 
vi .bashrc
exit
1    22  exit
1    22  exit
1    22  exit
1    23  cd 
1    24  vi .bashrc 
1    25  cd config/
1    26  vi .bashrc 
1    27  vi .bash_history 
1    28  cd 
1    29  vi .bashrc
cd 
vi .bashrc 
cd config/
vi .bashrc 
vi .bash_history 
cd 
vi .bashrc
exit
1    40  exit
1    41  lql
1    42  vi .bash_history 
1    43  cd 
1    44  vi .bash_history 
1    45  vi config/.bash_history 
1    46  cd config/
1    47  ls
1    48  cd 
1    49  vi .bashrc 
1    50  cd config/
1    51  vi ros_commands
1    52  q
lql
vi .bash_history 
cd 
vi .bash_history 
vi config/.bash_history 
cd config/
ls
cd 
vi .bashrc 
cd config/
vi ros_commands
q
exit
1    66  exit
1    67  qvi ros_commands
1    67  qvi ros_commands
1    67  qvi ros_commands
1    67  qvi ros_commands
1    68  cd
1    69  vi .bashrc
1    70  vi config/.bash_history 
1    71  qqvi ros_commands
qvi ros_commands
cd
vi .bashrc
vi config/.bash_history 
qqvi ros_commands
exit
1   100  exit
1   101  /root/ros2_code/humble/learning/src/articubot_one/maps/my_:qmap_serial
1   102  /root/ros2_code/humble/learning/src/articubot_one/maps/my_map_serial
1   103  sudo apt install ros-humble-qtwist-mux
1   103  sudo apt install ros-humble-qtwist-mux
1   103  sudo apt install ros-humble-qtwist-mux
1   103  sudo apt install ros-humble-qtwist-mux
1   103  sudo apt install ros-humble-qtwist-mux
/root/ros2_code/humble/learning/src/articubot_one/maps/my_:qmap_serial
/root/ros2_code/humble/learning/src/articubot_one/maps/my_map_serial
sudo apt install ros-humble-qtwist-mux
exit
1   112  exit
1   113  cd 
1   114  vi .bashrc 
cd 
vi .bashrc 
exit
1   118  exit
1   118  exit
1   119  ros2 run demo_nodes_py listener
93   121  1   119  ros2 run demo_nodes_py listener
93   122  cd\
93   123  cd 
93   124  vi .bashrc
93   125  ls
93   126  vi .bashrc
93   127  cd config/
93   128  ll
93   129  vi ros_commands 
93   130  ls
93   131  1   119  qros2 run demo_nodes_py listener
93   132  vi .bashrc
93   133  cd
93   134  vi .config/
93   135  vi .config/.bashrc
93   136  vi config/.bashrc 
93   137  vi .bashrc
ls
cd 
vi .bash_history 
ll
ls -als
cd config/
ls
ll
ls -als
vi .custom_history__root_ros2_code_humble_learning 
exit
vi .custom_history__root_ros2_code_humble_learning 
ls
cd 
vi config/.custom_history__root_ros2_code_humble_learning 
qsudo apt install ros-humble-rmw-cyclonedds-cpp
exit
1   120  ros2 run joy joy_node 
1   120  ros2 run joy joy_node 
ros2 run demo_nodes_py listener
ros2 run joy joy_node 
exit
cd 
vi .bashrc
vi config/.bashrc 
ros2 topic list 
ros2 topic echo /cmd_vel_joy 
ros2 topic list 
ros2 topic echo /cmd_vel_joy 
vi config/.bashrc
exit
cd ..
ls
cd control/
ls
crw
cbi
ros2 launch joystick joystick.launch.py 
cbi
ros2 launch joystick joystick.launch.py 
exit
cd 
vi config/.bashrc 
ros2 doctor -r
ros2 topic echo /cmd_vel_joy 
ros2 doctor -r
ros2 topic echo /cmd_vel_joy 
ros2 topic info /cmd_vel_joy 
ros2 topic list
ros2 topic info /cmd_vel
ros2 topic echo /cmd_vel
exit
cd ../control/
ls
source install/setup.sh 
ros2 launch joystick joystick.launch.py 
cbi
ros2 launch joystick joystick.launch.py 
vi ~/config/.bashrc
ros2 topic echo /cmd_vel
ros2 topic list
cd ../../
cd simulations/neobotix/
ls
cbi
ros2 launch neo_simulation2  simulation.launch.py 

export MAP_NAME=neo_workshop
ros2 launch neo_simulation2  simulation.launch.py 
export MAP_NAME=aws
ros2 launch neo_simulation2  simulation.launch.py 
exit
cd ../udemy/
ls
source install/setup.sh 
ros2 launch autonomous_tb3 tb3_nav_params.yaml 
ros2 launch autonomous_tb3 tb3_world_navigation.launch.py 
echo $ROS_DOMAIN_ID 
cd 
vi config/.bashrc 
exit
cd ../
cd ..
ls
cd humble/
ls
sudo apt install libpcl-dev
ls
mkdir udemy
cd udemy/
cd src
mkdir src
cd src/
git clone https://github.com/noshluk2/ROS2-Autonomous-Driving-and-Navigation-SLAM-with-TurtleBot3
cd ..
cbi
cd src/ROS2-Autonomous-Driving-and-Navigation-SLAM-with-TurtleBot3/
ls
cd autonomous_tb3/
ls
cd launch/
ls
ros2 launch autonomous_tb3 tb3_world_navigation.launch.py 
cd 
vi config/.bashrc
cd -
exit
sudo apt install ros-humble-depthai-ros
apt-get update
apt-get upgrade
sudo apt install ros-humble-depthai-ros
camera.launch.py
ros2 launch depthai_ros_driver camera.launch.py
exit
ros2 launch depthai_examples stereo.launch.py
sudo apt get update 
sudo apt-get update 
sudo apt-get upgrade
sudo apt get update 
sudo apt-get update 
vi /etc/apt/sources.list
vi /etc/apt/sources.list.d/ros2.list 
vi /etc/apt/sources.list.d/ros2-latest.list 
vi /etc/apt/sources.list.d/ros2.list 
vi /etc/apt/sources.list
vi /etc/apt/sources.list.d/cuda-ubuntu2204-x86_64.list 
vi /etc/apt/sources.list.d/gazebo-stable.list 
vi /etc/apt/sources.list.d/ros2-latest.list 
vi /etc/apt/sources.list.d/ros2.list 
vi /etc/apt/sources.list.d/ros2-latest.list 
rm /etc/apt/sources.list.d/ros2-latest.list 
sudo apt-get update 
sudo apt-get upgraade
sudo apt-get upgrade
gazebo
sudo apt-get update 
rm /etc/apt/sources.list.d/ros2.list 
sudo apt-get update 
exit
rm /etc/apt/sources.list.d/ros2-latest.list 
sudo apt-get update 
sudo apt-get update
sudo apt-get install lsb-release wget gnupg
sudo wget https://packages.osrfoundation.org/gazebo.gpg -O /usr/share/keyrings/pkgs-osrf-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/pkgs-osrf-archive-keyring.gpg] http://packages.osrfoundation.org/gazebo/ubuntu-stable $(lsb_release -cs) main" | sudo tee /etc/apt/sources.list.d/gazebo-stable.list > /dev/null
sudo apt-get update
sudo apt-get install ignition-fortress
gz
gz sim
gz sim shapes.sdf
ign gazebo sim shapes.sdf
gazebo
ign gazebo sim shapes.sdf
python3 -m pip install depthai-viewer
python3 -m depthai_viewer
sudo wget -qO- https://docs.luxonis.com/install_depthai.sh | bash
apt install python3.10-venv
sudo wget -qO- https://docs.luxonis.com/install_depthai.sh | bash
exit
gazebo
rviz2
ros2 launch depthai_ros_driver camera.launch.py
sudo apt install ros-humble-depthai-ros
ros2 launch depthai_ros_driver camera.launch.py
lsusb
cd ..
ls
cd 
ls
cd Luxonis/
ls
cd depthai/
ls
c d..
exit
cd 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source /opt/ros/humble/setup.sh 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source /opt/ros/humble/setup.sh 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
ls
exit
cd
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
cd 
source dai_ws/install/setup.sh 
ros2 launch depthai_ros_driver camera.launch.py
exit
rviz2
exit
cd ../
cd humble/
ls
cd 
ls
cd ros2_code/humble/
ls
cd 
ls
cd dai_ws/install/
pwd
cd 
vi config/.bashrc
exit
cd 
ls
cd dai_ws/
ls
exit
cd tc_ros2_urdf/
cbss
source install/setup.sh 
ros2 launch my_box_bot_gazebo start_world.launch.py 
rviz2 -d ~/ros2_ws/src/urdfbot_description/rviz/urdf_vis.rviz
rviz2 -d ~/ros2_code/humble/tc_ros2_urdf/src/urdfbot_description/rviz/urdf_vis.rviz
ros2 launch my_box_bot_description urdf_visualize_geometric.launch.py
ros2 launch my_box_bot_description urdf_visualize_meshes.launch.py
ros2 launch my_box_bot_gazebo start_world.launch.py
ros2 launch my_box_bot_gazebo start_world.launch.py 
vi /root/ros2_code/humble/tc_ros2_urdf/install/my_box_bot_description/share/my_box_bot_description/config/controller_position.yaml
vi src/my_box_bot_description/config/controller_position.yaml
vi /root/ros2_code/humble/tc_ros2_urdf/install/my_box_bot_description/share/my_box_bot_description/
cbss
source install/setup.sh 
ros2 launch my_box_bot_gazebo start_world.launch.py 
ros2 launch my_box_bot_gazebo start_world.launch.py
ros2 launch my_box_bot_gazebo start_world.launch.py 
cbss
ros2 launch my_box_bot_gazebo start_world.launch.py 
exit
cd 
cd dai_ws/
source install/setup.sh 
ros2 launch depthai_ros_driver pointcloud.launch.py 
ros2 launch depthai_ros_driver camera.launch.py
ros2 launch depthai_ros_driver pointcloud.launch.py 
cd 
exit
cd dai_ws/
source install/setup.sh 
ros2 launch depthai_ros_driver pointcloud.launch.py 
cd ../articubot/
source install/setup.sh 
ros2 launch articubot_one launch_sim.launch.py world:=./src/articubot_one/worlds/obstacles.world 
cd ../tc_ros2_urdf/
source install/setup.sh 
ros2 launch my_box_bot_gazebo start_world.launch.py 
cd ../articubot/
ros2 launch articubot_one launch_sim.launch.py world:=./src/articubot_one/worlds/obstacles.world 
cd ../dai_ws/
ros2 launch depthai_ros_driver example_marker_publish.launch.py 
ros2 launch depthai_ros_driver example_segmentation.launch.py 
ros2 launch depthai_filters example_feature_3d.launch.py 
ros2 launch depthai_filters example_det2d_overlay.launch.py 
ros2 launch depthai_filters example_wls_filter.launch.py -
ros2 launch depthai_filters example_wls_filter.launch.py 
ros2 launch depthai_filters example_seg_overlay.launch.py 
ros2 launch depthai_descriptions urdf_launch.py 
ros2 launch depthai_examples mobile_publisher.launch.py 
ros2 launch depthai_examples rgb_stereo_node.launch.py 
ros2 launch depthai_examples yolov4_publisher.launch.py 
ros2 launch depthai_ros_driver example_segmentation.launch.py
ros2 launch depthai_ros_driver pointcloud.launch.py
ros2 launch depthai_examples stereo.launch.py 
ros2 launch depthai_examples stereo.launch.py ]
ros2 launch depthai_examples stereo.launch.py
cbss
ros2 launch depthai_examples stereo.launch.py
ros2 launch depthai_examples stereo.launch.py camera_model=OAK-D-PRO
ros2 launch depthai_examples stereo.launch.py camera_model:=OAK-D-PRO
cbss
ros2 launch depthai_examples stereo.launch.py camera_model:=OAK-D-PRO
cbss
ros2 launch depthai_examples stereo.launch.py camera_model:=OAK-D-PRO
ros2 launch depthai_examples stereo_inertial_node.launch.py -
ros2 launch depthai_examples stereo_inertial_node.launch.py 
ros2 launch depthai_examples stereo_inertial_node.launch.py camera_model:=OAK-D-PRO
ros2 launch depthai_examples rgb_stereo_node.launch.py camera_model:=OAK-D-PRO
ros2 launch depthai_examples rgb_stereo_node.launch.py
ros2 launch depthai_examples stereo.launch.py camera_model:=OAK-D-PRO
ros2 launch depthai_ros_driver pointcloud.launch.py
ros2 launch depthai_examples stereo.launch.py camera_model:=OAK-D-PRO
ros2 launch depthai_ros_driver pointcloud.launch.py
ros2 launch depthai_examples rgb_stereo_node.launch.py
cd ../articubot/
ros2 launch articubot_one launch_sim.launch.py world:=./src/articubot_one/worlds/obstacles.world 
ros2 launch depthai_ros2 depthai_launch.py
cd 
sudo apt update
sudo apt install -y python3-rosdep
sudo rosdep init
rosdep update
cd ros2_code/humble/
ls
git clone --branch humble https://github.com/luxonis/depthai_ros2.git
cd depthai_ros2/
colcon build --symlink-install
source install/setup.sh s
source install/setup.sh 
ros2 launch depthai_ros2 depthai_launch.py
ls
cd ..
ls
rm -rf depthai_ros2
exit
cd dai_ws/
ls
cd src/
ls
cd ..
source install/setup.sh 
sudo apt install libpcl-dev
cd ..
git clone https://github.com/noshluk2/ros2_learners.git
ls
chmod -R 777 ros2_learners
cd ros2_learners/
ls
cd ..
mkdir PCL
rm -rf PCL
mkdir pcl
mv ros2_learners pcl/src/.
mkdir pcl/src
mv ros2_learners pcl/src/.
ls
cd pcl/
cbss
sudo apt install ros-humble-rtabmap
sudo apt update 
sudo apt upgrade
exit
sudo apt update 
sudo apt upgrade
exit
sudo apt update 
sudo apt upgrade
sudo apt install ros-humble-rtabmap
sudo dpkg --configure -a
sudo apt-get install -f
sudo apt-get remove --purge  tzdata
sudo dpkg --configure -a
dpkg --configure -a
exit
sudo dpkg --configure -a
sudo apt update 
sudo apt upgrade
sudo apt install ros-humble-rtabmap
sudo apt-get install -y tzdata
exit
sudo apt update 
sudo apt upgrade
sudo apt install ros-humble-rtabmap
sudo apt install ros-humble-rtabmap-ros
sudo apt install ros-humble-pcl
sudo apt install ros-humble-pcl-msgs
sudo apt install ros-humble-pcl-ros
sudo apt install ros-humble-pcl-*
ls
cd pcl/
ls
cd src/
ls
cd ros2_learners/
ls
cd ..
cbss 
exit
