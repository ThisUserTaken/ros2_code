# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/ros2_code/humble/pcl/build/point_cloud_perception

# Include any dependencies generated for this target.
include CMakeFiles/clustering.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/clustering.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/clustering.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/clustering.dir/flags.make

CMakeFiles/clustering.dir/src/clustering.cpp.o: CMakeFiles/clustering.dir/flags.make
CMakeFiles/clustering.dir/src/clustering.cpp.o: /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception/src/clustering.cpp
CMakeFiles/clustering.dir/src/clustering.cpp.o: CMakeFiles/clustering.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/ros2_code/humble/pcl/build/point_cloud_perception/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/clustering.dir/src/clustering.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/clustering.dir/src/clustering.cpp.o -MF CMakeFiles/clustering.dir/src/clustering.cpp.o.d -o CMakeFiles/clustering.dir/src/clustering.cpp.o -c /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception/src/clustering.cpp

CMakeFiles/clustering.dir/src/clustering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clustering.dir/src/clustering.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception/src/clustering.cpp > CMakeFiles/clustering.dir/src/clustering.cpp.i

CMakeFiles/clustering.dir/src/clustering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clustering.dir/src/clustering.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception/src/clustering.cpp -o CMakeFiles/clustering.dir/src/clustering.cpp.s

# Object files for target clustering
clustering_OBJECTS = \
"CMakeFiles/clustering.dir/src/clustering.cpp.o"

# External object files for target clustering
clustering_EXTERNAL_OBJECTS =

clustering: CMakeFiles/clustering.dir/src/clustering.cpp.o
clustering: CMakeFiles/clustering.dir/build.make
clustering: /usr/lib/x86_64-linux-gnu/libpcl_apps.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_outofcore.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_people.so
clustering: /usr/lib/libOpenNI.so
clustering: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
clustering: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
clustering: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
clustering: /usr/lib/x86_64-linux-gnu/libflann_cpp.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_surface.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_keypoints.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_tracking.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_recognition.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_registration.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_stereo.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_segmentation.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_features.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_filters.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_sample_consensus.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_ml.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_visualization.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_search.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_kdtree.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_io.so
clustering: /usr/lib/x86_64-linux-gnu/libpcl_octree.so
clustering: /usr/lib/x86_64-linux-gnu/libpng.so
clustering: /usr/lib/x86_64-linux-gnu/libz.so
clustering: /usr/lib/libOpenNI.so
clustering: /usr/lib/x86_64-linux-gnu/libusb-1.0.so
clustering: /usr/lib/x86_64-linux-gnu/libOpenNI2.so
clustering: /usr/lib/x86_64-linux-gnu/libvtkChartsCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkInteractionImage-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkIOGeometry-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libjsoncpp.so
clustering: /usr/lib/x86_64-linux-gnu/libvtkIOPLY-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingLOD-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkViewsContext2D-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkViewsCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkGUISupportQt-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkInteractionWidgets-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersModeling-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkInteractionStyle-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersExtraction-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkIOLegacy-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkIOCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingAnnotation-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingContext2D-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingFreeType-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libfreetype.so
clustering: /usr/lib/x86_64-linux-gnu/libvtkImagingSources-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkIOImage-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkImagingCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingOpenGL2-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingUI-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkRenderingCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonColor-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeometry-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersSources-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersGeneral-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonComputationalGeometry-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkFiltersCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonExecutionModel-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonDataModel-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonMisc-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonTransforms-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonMath-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libvtkkissfft-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libGLEW.so
clustering: /usr/lib/x86_64-linux-gnu/libX11.so
clustering: /usr/lib/x86_64-linux-gnu/libQt5OpenGL.so.5.15.3
clustering: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.15.3
clustering: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.3
clustering: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.3
clustering: /usr/lib/x86_64-linux-gnu/libvtkCommonCore-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libtbb.so.12.5
clustering: /usr/lib/x86_64-linux-gnu/libvtksys-9.1.so.9.1.0
clustering: /usr/lib/x86_64-linux-gnu/libpcl_common.so
clustering: /usr/lib/x86_64-linux-gnu/libboost_system.so.1.74.0
clustering: /usr/lib/x86_64-linux-gnu/libboost_filesystem.so.1.74.0
clustering: /usr/lib/x86_64-linux-gnu/libboost_date_time.so.1.74.0
clustering: /usr/lib/x86_64-linux-gnu/libboost_iostreams.so.1.74.0
clustering: /usr/lib/x86_64-linux-gnu/libboost_serialization.so.1.74.0
clustering: /usr/lib/x86_64-linux-gnu/libqhull_r.so.8.0.2
clustering: CMakeFiles/clustering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/ros2_code/humble/pcl/build/point_cloud_perception/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable clustering"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clustering.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/clustering.dir/build: clustering
.PHONY : CMakeFiles/clustering.dir/build

CMakeFiles/clustering.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/clustering.dir/cmake_clean.cmake
.PHONY : CMakeFiles/clustering.dir/clean

CMakeFiles/clustering.dir/depend:
	cd /root/ros2_code/humble/pcl/build/point_cloud_perception && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception /root/ros2_code/humble/pcl/src/ros2_learners/point_cloud_perception /root/ros2_code/humble/pcl/build/point_cloud_perception /root/ros2_code/humble/pcl/build/point_cloud_perception /root/ros2_code/humble/pcl/build/point_cloud_perception/CMakeFiles/clustering.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/clustering.dir/depend

