# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/kisung/Escritorio/CLion/CLion-2017.3.3/clion-2017.3.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/kisung/Escritorio/CLion/CLion-2017.3.3/clion-2017.3.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/kisung/CLionProjects/Proyecto I Datos II/server"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/server.dir/flags.make

CMakeFiles/server.dir/main.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/server.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/main.cpp.o -c "/home/kisung/CLionProjects/Proyecto I Datos II/server/main.cpp"

CMakeFiles/server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kisung/CLionProjects/Proyecto I Datos II/server/main.cpp" > CMakeFiles/server.dir/main.cpp.i

CMakeFiles/server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kisung/CLionProjects/Proyecto I Datos II/server/main.cpp" -o CMakeFiles/server.dir/main.cpp.s

CMakeFiles/server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/main.cpp.o.requires

CMakeFiles/server.dir/main.cpp.o.provides: CMakeFiles/server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/main.cpp.o.provides

CMakeFiles/server.dir/main.cpp.o.provides.build: CMakeFiles/server.dir/main.cpp.o


CMakeFiles/server.dir/mserver.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/mserver.cpp.o: ../mserver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/server.dir/mserver.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/mserver.cpp.o -c "/home/kisung/CLionProjects/Proyecto I Datos II/server/mserver.cpp"

CMakeFiles/server.dir/mserver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/mserver.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kisung/CLionProjects/Proyecto I Datos II/server/mserver.cpp" > CMakeFiles/server.dir/mserver.cpp.i

CMakeFiles/server.dir/mserver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/mserver.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kisung/CLionProjects/Proyecto I Datos II/server/mserver.cpp" -o CMakeFiles/server.dir/mserver.cpp.s

CMakeFiles/server.dir/mserver.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/mserver.cpp.o.requires

CMakeFiles/server.dir/mserver.cpp.o.provides: CMakeFiles/server.dir/mserver.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/mserver.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/mserver.cpp.o.provides

CMakeFiles/server.dir/mserver.cpp.o.provides.build: CMakeFiles/server.dir/mserver.cpp.o


CMakeFiles/server.dir/node.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/node.cpp.o: ../node.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/server.dir/node.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/node.cpp.o -c "/home/kisung/CLionProjects/Proyecto I Datos II/server/node.cpp"

CMakeFiles/server.dir/node.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/node.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kisung/CLionProjects/Proyecto I Datos II/server/node.cpp" > CMakeFiles/server.dir/node.cpp.i

CMakeFiles/server.dir/node.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/node.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kisung/CLionProjects/Proyecto I Datos II/server/node.cpp" -o CMakeFiles/server.dir/node.cpp.s

CMakeFiles/server.dir/node.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/node.cpp.o.requires

CMakeFiles/server.dir/node.cpp.o.provides: CMakeFiles/server.dir/node.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/node.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/node.cpp.o.provides

CMakeFiles/server.dir/node.cpp.o.provides.build: CMakeFiles/server.dir/node.cpp.o


CMakeFiles/server.dir/linkedlist.cpp.o: CMakeFiles/server.dir/flags.make
CMakeFiles/server.dir/linkedlist.cpp.o: ../linkedlist.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/server.dir/linkedlist.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/server.dir/linkedlist.cpp.o -c "/home/kisung/CLionProjects/Proyecto I Datos II/server/linkedlist.cpp"

CMakeFiles/server.dir/linkedlist.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/server.dir/linkedlist.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/kisung/CLionProjects/Proyecto I Datos II/server/linkedlist.cpp" > CMakeFiles/server.dir/linkedlist.cpp.i

CMakeFiles/server.dir/linkedlist.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/server.dir/linkedlist.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/kisung/CLionProjects/Proyecto I Datos II/server/linkedlist.cpp" -o CMakeFiles/server.dir/linkedlist.cpp.s

CMakeFiles/server.dir/linkedlist.cpp.o.requires:

.PHONY : CMakeFiles/server.dir/linkedlist.cpp.o.requires

CMakeFiles/server.dir/linkedlist.cpp.o.provides: CMakeFiles/server.dir/linkedlist.cpp.o.requires
	$(MAKE) -f CMakeFiles/server.dir/build.make CMakeFiles/server.dir/linkedlist.cpp.o.provides.build
.PHONY : CMakeFiles/server.dir/linkedlist.cpp.o.provides

CMakeFiles/server.dir/linkedlist.cpp.o.provides.build: CMakeFiles/server.dir/linkedlist.cpp.o


# Object files for target server
server_OBJECTS = \
"CMakeFiles/server.dir/main.cpp.o" \
"CMakeFiles/server.dir/mserver.cpp.o" \
"CMakeFiles/server.dir/node.cpp.o" \
"CMakeFiles/server.dir/linkedlist.cpp.o"

# External object files for target server
server_EXTERNAL_OBJECTS =

server: CMakeFiles/server.dir/main.cpp.o
server: CMakeFiles/server.dir/mserver.cpp.o
server: CMakeFiles/server.dir/node.cpp.o
server: CMakeFiles/server.dir/linkedlist.cpp.o
server: CMakeFiles/server.dir/build.make
server: CMakeFiles/server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/server.dir/build: server

.PHONY : CMakeFiles/server.dir/build

CMakeFiles/server.dir/requires: CMakeFiles/server.dir/main.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/mserver.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/node.cpp.o.requires
CMakeFiles/server.dir/requires: CMakeFiles/server.dir/linkedlist.cpp.o.requires

.PHONY : CMakeFiles/server.dir/requires

CMakeFiles/server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/server.dir/clean

CMakeFiles/server.dir/depend:
	cd "/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/kisung/CLionProjects/Proyecto I Datos II/server" "/home/kisung/CLionProjects/Proyecto I Datos II/server" "/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug" "/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug" "/home/kisung/CLionProjects/Proyecto I Datos II/server/cmake-build-debug/CMakeFiles/server.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/server.dir/depend

