# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.24

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\programing\programing-lang

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\programing\programing-lang\cmake-build-release

# Include any dependencies generated for this target.
include CMakeFiles/compiler_programmingLang.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/compiler_programmingLang.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/compiler_programmingLang.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/compiler_programmingLang.dir/flags.make

CMakeFiles/compiler_programmingLang.dir/main.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/main.cpp.obj: D:/programing/programing-lang/main.cpp
CMakeFiles/compiler_programmingLang.dir/main.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/compiler_programmingLang.dir/main.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/main.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\main.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\main.cpp.obj -c D:\programing\programing-lang\main.cpp

CMakeFiles/compiler_programmingLang.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/main.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\main.cpp > CMakeFiles\compiler_programmingLang.dir\main.cpp.i

CMakeFiles/compiler_programmingLang.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/main.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\main.cpp -o CMakeFiles\compiler_programmingLang.dir\main.cpp.s

CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj: D:/programing/programing-lang/Scanner.cpp
CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\Scanner.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\Scanner.cpp.obj -c D:\programing\programing-lang\Scanner.cpp

CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\Scanner.cpp > CMakeFiles\compiler_programmingLang.dir\Scanner.cpp.i

CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\Scanner.cpp -o CMakeFiles\compiler_programmingLang.dir\Scanner.cpp.s

CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj: D:/programing/programing-lang/Token.cpp
CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\Token.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\Token.cpp.obj -c D:\programing\programing-lang\Token.cpp

CMakeFiles/compiler_programmingLang.dir/Token.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/Token.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\Token.cpp > CMakeFiles\compiler_programmingLang.dir\Token.cpp.i

CMakeFiles/compiler_programmingLang.dir/Token.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/Token.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\Token.cpp -o CMakeFiles\compiler_programmingLang.dir\Token.cpp.s

CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj: D:/programing/programing-lang/Categorie.cpp
CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\Categorie.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\Categorie.cpp.obj -c D:\programing\programing-lang\Categorie.cpp

CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\Categorie.cpp > CMakeFiles\compiler_programmingLang.dir\Categorie.cpp.i

CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\Categorie.cpp -o CMakeFiles\compiler_programmingLang.dir\Categorie.cpp.s

CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj: D:/programing/programing-lang/Command.cpp
CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\Command.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\Command.cpp.obj -c D:\programing\programing-lang\Command.cpp

CMakeFiles/compiler_programmingLang.dir/Command.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/Command.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\Command.cpp > CMakeFiles\compiler_programmingLang.dir\Command.cpp.i

CMakeFiles/compiler_programmingLang.dir/Command.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/Command.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\Command.cpp -o CMakeFiles\compiler_programmingLang.dir\Command.cpp.s

CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj: D:/programing/programing-lang/Parser.cpp
CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\Parser.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\Parser.cpp.obj -c D:\programing\programing-lang\Parser.cpp

CMakeFiles/compiler_programmingLang.dir/Parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/Parser.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\Parser.cpp > CMakeFiles\compiler_programmingLang.dir\Parser.cpp.i

CMakeFiles/compiler_programmingLang.dir/Parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/Parser.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\Parser.cpp -o CMakeFiles\compiler_programmingLang.dir\Parser.cpp.s

CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj: D:/programing/programing-lang/TokenNode.cpp
CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\TokenNode.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\TokenNode.cpp.obj -c D:\programing\programing-lang\TokenNode.cpp

CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\TokenNode.cpp > CMakeFiles\compiler_programmingLang.dir\TokenNode.cpp.i

CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\TokenNode.cpp -o CMakeFiles\compiler_programmingLang.dir\TokenNode.cpp.s

CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj: CMakeFiles/compiler_programmingLang.dir/flags.make
CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj: D:/programing/programing-lang/LatexExpression.cpp
CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj: CMakeFiles/compiler_programmingLang.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj -MF CMakeFiles\compiler_programmingLang.dir\LatexExpression.cpp.obj.d -o CMakeFiles\compiler_programmingLang.dir\LatexExpression.cpp.obj -c D:\programing\programing-lang\LatexExpression.cpp

CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.i"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\programing\programing-lang\LatexExpression.cpp > CMakeFiles\compiler_programmingLang.dir\LatexExpression.cpp.i

CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.s"
	D:\installs\jetbrains\apps\CLion\ch-0\223.7571.171\bin\mingw\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\programing\programing-lang\LatexExpression.cpp -o CMakeFiles\compiler_programmingLang.dir\LatexExpression.cpp.s

# Object files for target compiler_programmingLang
compiler_programmingLang_OBJECTS = \
"CMakeFiles/compiler_programmingLang.dir/main.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj" \
"CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj"

# External object files for target compiler_programmingLang
compiler_programmingLang_EXTERNAL_OBJECTS =

compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/main.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/Scanner.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/Token.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/Categorie.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/Command.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/Parser.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/TokenNode.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/LatexExpression.cpp.obj
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/build.make
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/linklibs.rsp
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/objects1.rsp
compiler_programmingLang.exe: CMakeFiles/compiler_programmingLang.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\programing\programing-lang\cmake-build-release\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable compiler_programmingLang.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\compiler_programmingLang.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/compiler_programmingLang.dir/build: compiler_programmingLang.exe
.PHONY : CMakeFiles/compiler_programmingLang.dir/build

CMakeFiles/compiler_programmingLang.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\compiler_programmingLang.dir\cmake_clean.cmake
.PHONY : CMakeFiles/compiler_programmingLang.dir/clean

CMakeFiles/compiler_programmingLang.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\programing\programing-lang D:\programing\programing-lang D:\programing\programing-lang\cmake-build-release D:\programing\programing-lang\cmake-build-release D:\programing\programing-lang\cmake-build-release\CMakeFiles\compiler_programmingLang.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/compiler_programmingLang.dir/depend

