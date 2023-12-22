cmake_minimum_required(VERSION 3.8)
project(basics_ros2_multithreading)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclpy REQUIRED)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# We add this to be able to import scripts form other scripts of our package
# Also to execute launch files in the launch folder
install(DIRECTORY
  scripts
  launch
  DESTINATION share/${PROJECT_NAME}
)

# Make the scripts executable with ros2 run basics_ros2_multithreading NAME
install(PROGRAMS
  scripts/function.py
  scripts/callback_function.py
  scripts/callback_spinonce_function.py
  scripts/face_searcher.py
  scripts/face_searcher_multithreading.py
  scripts/face_searcher_multithreading_callbackgroups.py
  scripts/yello_tshirt_detector.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()