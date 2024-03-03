#!/bin/bash

# Prompt the user to enter the ROS distribution (defaulting to "galactic")
read -p "Enter the ROS distribution (default: humble): " ros_dist
ros_dist="${ros_dist:-humble}"  # Use default if not provided

DOCKER_IMAGE_NAME=thisusertaken/ros2_${ros_dist}_amd64n:latest
BASH_COMMAND="source /opt/ros/${ros_dist}/setup.bash"
xhost +

docker run --rm -it \
  --name vision_test \
  --net=host \
  --env="DISPLAY" \
  --env="QT_X11_NO_MITSHM=1" \
  --device=/dev/input/js0 \
  --device=/dev/input/event0 \
  --device=/dev/input \
  -v /dev/bus/usb:/dev/bus/usb \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  -v /dev/dri:/dev/dri \
  -v /home/waruna/transfer:/root/transfer \
  -v /home/waruna/docker_configs_${ros_dist}:/root/config \
  -v /home/waruna/ros2_code:/root/ros2_code \
  -w /root/ros2_code/${ros_dist}/learning \
  "$DOCKER_IMAGE_NAME"
