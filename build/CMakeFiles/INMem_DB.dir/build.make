# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build"

# Include any dependencies generated for this target.
include CMakeFiles/InMem_DB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/InMem_DB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/InMem_DB.dir/flags.make

CMakeFiles/InMem_DB.dir/main.cpp.o: CMakeFiles/InMem_DB.dir/flags.make
CMakeFiles/InMem_DB.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/InMem_DB.dir/main.cpp.o"
	c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/InMem_DB.dir/main.cpp.o -c "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/main.cpp"

CMakeFiles/InMem_DB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/InMem_DB.dir/main.cpp.i"
	c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/main.cpp" > CMakeFiles/InMem_DB.dir/main.cpp.i

CMakeFiles/InMem_DB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/InMem_DB.dir/main.cpp.s"
	c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/main.cpp" -o CMakeFiles/InMem_DB.dir/main.cpp.s

# Object files for target InMem_DB
InMem_DB_OBJECTS = \
"CMakeFiles/InMem_DB.dir/main.cpp.o"

# External object files for target InMem_DB
InMem_DB_EXTERNAL_OBJECTS =

InMem_DB: CMakeFiles/InMem_DB.dir/main.cpp.o
InMem_DB: CMakeFiles/InMem_DB.dir/build.make
InMem_DB: CMakeFiles/InMem_DB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable InMem_DB"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/InMem_DB.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/InMem_DB.dir/build: InMem_DB

.PHONY : CMakeFiles/InMem_DB.dir/build

CMakeFiles/InMem_DB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/InMem_DB.dir/cmake_clean.cmake
.PHONY : CMakeFiles/InMem_DB.dir/clean

CMakeFiles/InMem_DB.dir/depend:
	cd "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP" "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP" "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build" "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build" "/mnt/d/Akif/Younite-Internship/In Memory DB/In-Memory-Database-CPP/build/CMakeFiles/InMem_DB.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/InMem_DB.dir/depend

