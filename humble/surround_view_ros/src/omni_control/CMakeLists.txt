cmake_minimum_required(VERSION 3.5)
project(omni_control)

# Default to C99
if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # uncomment the line when a copyright and license is not present in all source files
  #set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # uncomment the line when this package is not in a git repo
  #set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

install(
  DIRECTORY
    scripts
    launch
  DESTINATION
    share/${PROJECT_NAME}/
)

install(
  PROGRAMS
  scripts/robot_control.py
  scripts/robot_1_camera.py
  scripts/run_calibrate_camera_ROS.py
  scripts/run_surround_view_ROS.py
  scripts/masks.png
  scripts/weights.png
  launch/omni_control.launch.py
  DESTINATION lib/${PROJECT_NAME}
)

install(
  PROGRAMS
  scripts/surround_view/base_thread.py
  scripts/surround_view/birdview.py
  scripts/surround_view/capture_thread.py
  scripts/surround_view/fisheye_camera.py
  scripts/surround_view/imagebuffer.py
  scripts/surround_view/__init__.py
  scripts/surround_view/param_settings.py
  scripts/surround_view/process_thread.py
  scripts/surround_view/simple_gui.py
  scripts/surround_view/structures.py
  scripts/surround_view/utils.py
  DESTINATION lib/${PROJECT_NAME}/surround_view
)

install(
  PROGRAMS
  scripts/images/car.png
  DESTINATION lib/${PROJECT_NAME}/images
)

install(
  PROGRAMS
  scripts/yaml/back.yaml
  scripts/yaml/front.yaml
  scripts/yaml/left.yaml
  scripts/yaml/right.yaml
  DESTINATION lib/${PROJECT_NAME}/yaml
)

ament_package()
