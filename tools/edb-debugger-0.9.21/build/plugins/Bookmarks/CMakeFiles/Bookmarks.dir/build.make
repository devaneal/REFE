# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/devneal/Security/REFE/tools/edb-debugger-0.9.21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build

# Include any dependencies generated for this target.
include plugins/Bookmarks/CMakeFiles/Bookmarks.dir/depend.make

# Include the progress variables for this target.
include plugins/Bookmarks/CMakeFiles/Bookmarks.dir/progress.make

# Include the compile flags for this target's objects.
include plugins/Bookmarks/CMakeFiles/Bookmarks.dir/flags.make

plugins/Bookmarks/ui_Bookmarks.h: ../plugins/Bookmarks/Bookmarks.ui
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ui_Bookmarks.h"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/bin/uic -o /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks/ui_Bookmarks.h /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/Bookmarks.ui

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/flags.make
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o: ../plugins/Bookmarks/Bookmarks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/Bookmarks.cpp

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookmarks.dir/Bookmarks.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/Bookmarks.cpp > CMakeFiles/Bookmarks.dir/Bookmarks.cpp.i

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookmarks.dir/Bookmarks.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/Bookmarks.cpp -o CMakeFiles/Bookmarks.dir/Bookmarks.cpp.s

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.requires:

.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.requires

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.provides: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.requires
	$(MAKE) -f plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build.make plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.provides.build
.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.provides

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.provides.build: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o


plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/flags.make
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o: ../plugins/Bookmarks/BookmarkWidget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/BookmarkWidget.cpp

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/BookmarkWidget.cpp > CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.i

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks/BookmarkWidget.cpp -o CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.s

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.requires:

.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.requires

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.provides: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.requires
	$(MAKE) -f plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build.make plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.provides.build
.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.provides

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.provides.build: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o


plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/flags.make
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o: plugins/Bookmarks/Bookmarks_automoc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o -c /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks/Bookmarks_automoc.cpp

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.i"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks/Bookmarks_automoc.cpp > CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.i

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.s"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks/Bookmarks_automoc.cpp -o CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.s

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.requires:

.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.requires

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.provides: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.requires
	$(MAKE) -f plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build.make plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.provides.build
.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.provides

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.provides.build: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o


# Object files for target Bookmarks
Bookmarks_OBJECTS = \
"CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o" \
"CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o" \
"CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o"

# External object files for target Bookmarks
Bookmarks_EXTERNAL_OBJECTS =

libBookmarks.so: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o
libBookmarks.so: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o
libBookmarks.so: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o
libBookmarks.so: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build.make
libBookmarks.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Widgets.so.5.7.0
libBookmarks.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Gui.so.5.7.0
libBookmarks.so: /home/devneal/Security/REFE/tools/qt-unified-linux-x64-2.0.4/5.7/gcc_64/lib/libQt5Core.so.5.7.0
libBookmarks.so: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX shared library ../../libBookmarks.so"
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bookmarks.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build: libBookmarks.so

.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/build

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/requires: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks.cpp.o.requires
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/requires: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/BookmarkWidget.cpp.o.requires
plugins/Bookmarks/CMakeFiles/Bookmarks.dir/requires: plugins/Bookmarks/CMakeFiles/Bookmarks.dir/Bookmarks_automoc.cpp.o.requires

.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/requires

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/clean:
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks && $(CMAKE_COMMAND) -P CMakeFiles/Bookmarks.dir/cmake_clean.cmake
.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/clean

plugins/Bookmarks/CMakeFiles/Bookmarks.dir/depend: plugins/Bookmarks/ui_Bookmarks.h
	cd /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/devneal/Security/REFE/tools/edb-debugger-0.9.21 /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/plugins/Bookmarks /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks /home/devneal/Security/REFE/tools/edb-debugger-0.9.21/build/plugins/Bookmarks/CMakeFiles/Bookmarks.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : plugins/Bookmarks/CMakeFiles/Bookmarks.dir/depend

