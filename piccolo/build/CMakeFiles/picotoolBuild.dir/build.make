# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ab25cq/comelang/piccolo_os

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ab25cq/comelang/piccolo_os/build

# Utility rule file for picotoolBuild.

# Include any custom commands dependencies for this target.
include CMakeFiles/picotoolBuild.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/picotoolBuild.dir/progress.make

CMakeFiles/picotoolBuild: CMakeFiles/picotoolBuild-complete

CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-install
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-mkdir
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-download
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-update
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-patch
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-configure
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-build
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-install
CMakeFiles/picotoolBuild-complete: picotool/src/picotoolBuild-stamp/picotoolBuild-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'picotoolBuild'"
	/opt/homebrew/bin/cmake -E make_directory /Users/ab25cq/comelang/piccolo_os/build/CMakeFiles
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/CMakeFiles/picotoolBuild-complete
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-done

picotool/src/picotoolBuild-stamp/picotoolBuild-install:
.PHONY : picotool/src/picotoolBuild-stamp/picotoolBuild-install

picotool/src/picotoolBuild-stamp/picotoolBuild-build:
.PHONY : picotool/src/picotoolBuild-stamp/picotoolBuild-build

picotool/src/picotoolBuild-stamp/picotoolBuild-install:
.PHONY : picotool/src/picotoolBuild-stamp/picotoolBuild-install

picotool/src/picotoolBuild-stamp/picotoolBuild-build: picotool/src/picotoolBuild-stamp/picotoolBuild-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'picotoolBuild'"
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && $(MAKE)

picotool/src/picotoolBuild-stamp/picotoolBuild-configure: picotool/tmp/picotoolBuild-cfgcmd.txt
picotool/src/picotoolBuild-stamp/picotoolBuild-configure: picotool/src/picotoolBuild-stamp/picotoolBuild-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'picotoolBuild'"
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && /opt/homebrew/bin/cmake --no-warn-unused-cli -DCMAKE_MAKE_PROGRAM:FILEPATH=/opt/homebrew/bin/gmake -DPICO_SDK_PATH:FILEPATH=/Users/ab25cq/pico-sdk -DPICOTOOL_NO_LIBUSB=1 -DPICOTOOL_FLAT_INSTALL=1 -DCMAKE_INSTALL_PREFIX=/Users/ab25cq/comelang/piccolo_os/build/_deps -DCMAKE_RULE_MESSAGES=OFF -DCMAKE_INSTALL_MESSAGE=NEVER "-GUnix Makefiles" -S /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-src -B /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && /opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-configure

picotool/src/picotoolBuild-stamp/picotoolBuild-download: picotool/src/picotoolBuild-stamp/picotoolBuild-source_dirinfo.txt
picotool/src/picotoolBuild-stamp/picotoolBuild-download: picotool/src/picotoolBuild-stamp/picotoolBuild-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "No download step for 'picotoolBuild'"
	/opt/homebrew/bin/cmake -E echo_append
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-download

picotool/src/picotoolBuild-stamp/picotoolBuild-install: picotool/src/picotoolBuild-stamp/picotoolBuild-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'picotoolBuild'"
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && $(MAKE) install

picotool/src/picotoolBuild-stamp/picotoolBuild-build:
.PHONY : picotool/src/picotoolBuild-stamp/picotoolBuild-build

picotool/src/picotoolBuild-stamp/picotoolBuild-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'picotoolBuild'"
	/opt/homebrew/bin/cmake -Dcfgdir= -P /Users/ab25cq/comelang/piccolo_os/build/picotool/tmp/picotoolBuild-mkdirs.cmake
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-mkdir

picotool/src/picotoolBuild-stamp/picotoolBuild-patch: picotool/src/picotoolBuild-stamp/picotoolBuild-patch-info.txt
picotool/src/picotoolBuild-stamp/picotoolBuild-patch: picotool/src/picotoolBuild-stamp/picotoolBuild-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'picotoolBuild'"
	/opt/homebrew/bin/cmake -E echo_append
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-patch

picotool/src/picotoolBuild-stamp/picotoolBuild-test: picotool/src/picotoolBuild-stamp/picotoolBuild-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing test step for 'picotoolBuild'"
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool/picotool version 2.1.0
	cd /Users/ab25cq/comelang/piccolo_os/build/_deps/picotool-build && /opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-test

picotool/src/picotoolBuild-stamp/picotoolBuild-install:
.PHONY : picotool/src/picotoolBuild-stamp/picotoolBuild-install

picotool/src/picotoolBuild-stamp/picotoolBuild-update: picotool/src/picotoolBuild-stamp/picotoolBuild-update-info.txt
picotool/src/picotoolBuild-stamp/picotoolBuild-update: picotool/src/picotoolBuild-stamp/picotoolBuild-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/ab25cq/comelang/piccolo_os/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No update step for 'picotoolBuild'"
	/opt/homebrew/bin/cmake -E echo_append
	/opt/homebrew/bin/cmake -E touch /Users/ab25cq/comelang/piccolo_os/build/picotool/src/picotoolBuild-stamp/picotoolBuild-update

CMakeFiles/picotoolBuild.dir/codegen:
.PHONY : CMakeFiles/picotoolBuild.dir/codegen

picotoolBuild: CMakeFiles/picotoolBuild
picotoolBuild: CMakeFiles/picotoolBuild-complete
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-build
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-configure
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-download
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-install
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-mkdir
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-patch
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-test
picotoolBuild: picotool/src/picotoolBuild-stamp/picotoolBuild-update
picotoolBuild: CMakeFiles/picotoolBuild.dir/build.make
.PHONY : picotoolBuild

# Rule to build all files generated by this target.
CMakeFiles/picotoolBuild.dir/build: picotoolBuild
.PHONY : CMakeFiles/picotoolBuild.dir/build

CMakeFiles/picotoolBuild.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/picotoolBuild.dir/cmake_clean.cmake
.PHONY : CMakeFiles/picotoolBuild.dir/clean

CMakeFiles/picotoolBuild.dir/depend:
	cd /Users/ab25cq/comelang/piccolo_os/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ab25cq/comelang/piccolo_os /Users/ab25cq/comelang/piccolo_os /Users/ab25cq/comelang/piccolo_os/build /Users/ab25cq/comelang/piccolo_os/build /Users/ab25cq/comelang/piccolo_os/build/CMakeFiles/picotoolBuild.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/picotoolBuild.dir/depend

