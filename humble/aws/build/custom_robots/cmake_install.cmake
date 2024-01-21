# Install script for directory: /root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/root/ros2_code/humble/aws/install/custom_robots")
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
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/root/ros2_code/humble/aws/build/custom_robots/libpersonplugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libpersonplugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/resource_paths.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/hooks/resource_paths.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE DIRECTORY FILES
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/kobuki_description/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/kobuki_description/meshes"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/kobuki_description/rviz"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/kobuki_description/urdf"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/turtlebot2/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/turtlebot2/rviz"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/Turtlebot2/turtlebot2_simulated/turtlebot2/urdf"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/f1/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/f1/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/f1/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/roomba_robot/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/roomba_robot/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/roomba_robot/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/ackermann_cars/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/ackermann_cars/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/ackermann_cars/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/car_junction/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/car_junction/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/car_junction/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_robot/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_robot/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_robot/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_robot/urdf"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_robot/meshes"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_hospital/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_hospital/hospital_world/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_hospital/hospital_world/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_hospital/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/amazon_hospital/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/autoparking/launch"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/autoparking/models"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/autoparking/worlds"
    "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/drone_assets/models"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/custom_robots")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/custom_robots")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/environment" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_index/share/ament_index/resource_index/packages/custom_robots")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake/export_custom_robotsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake/export_custom_robotsExport.cmake"
         "/root/ros2_code/humble/aws/build/custom_robots/CMakeFiles/Export/share/custom_robots/cmake/export_custom_robotsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake/export_custom_robotsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake/export_custom_robotsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/CMakeFiles/Export/share/custom_robots/cmake/export_custom_robotsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/CMakeFiles/Export/share/custom_robots/cmake/export_custom_robotsExport-noconfig.cmake")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake" TYPE FILE FILES "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots/cmake" TYPE FILE FILES
    "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_core/custom_robotsConfig.cmake"
    "/root/ros2_code/humble/aws/build/custom_robots/ament_cmake_core/custom_robotsConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/custom_robots" TYPE FILE FILES "/root/ros2_code/humble/aws/src/RoboticsInfrastructure/CustomRobots/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/root/ros2_code/humble/aws/build/custom_robots/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
