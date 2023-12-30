# Install script for directory: /root/ros2_code/humble/surround_view_ros/src/omni_control

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/ros2_code/humble/surround_view_ros/install/omni_control")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/" TYPE DIRECTORY FILES
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/launch"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/omni_control" TYPE PROGRAM FILES
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/robot_control.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/robot_1_camera.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/run_calibrate_camera_ROS.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/run_surround_view_ROS.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/masks.png"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/weights.png"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/launch/omni_control.launch.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/omni_control/surround_view" TYPE PROGRAM FILES
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/base_thread.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/birdview.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/capture_thread.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/fisheye_camera.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/imagebuffer.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/__init__.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/param_settings.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/process_thread.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/simple_gui.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/structures.py"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/surround_view/utils.py"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/omni_control/images" TYPE PROGRAM FILES "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/images/car.png")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/omni_control/yaml" TYPE PROGRAM FILES
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/yaml/back.yaml"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/yaml/front.yaml"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/yaml/left.yaml"
    "/root/ros2_code/humble/surround_view_ros/src/omni_control/scripts/yaml/right.yaml"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/omni_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/omni_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/environment" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/environment" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_index/share/ament_index/resource_index/packages/omni_control")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control/cmake" TYPE FILE FILES
    "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_core/omni_controlConfig.cmake"
    "/root/ros2_code/humble/surround_view_ros/build/omni_control/ament_cmake_core/omni_controlConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/omni_control" TYPE FILE FILES "/root/ros2_code/humble/surround_view_ros/src/omni_control/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/ros2_code/humble/surround_view_ros/build/omni_control/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
