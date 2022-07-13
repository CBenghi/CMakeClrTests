# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.

project(CMakeProject1
        DESCRIPTION "Example showing how to compiler C++/CLI projects"
        LANGUAGES CXX)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

add_executable (CMakeProject1 
	"CMakeProject1.cpp" 
	"CMakeProject1.h"
	"nativeClass.h"
	"clrClass.h"
)
message ("CMAKE_VERSION: " ${CMAKE_VERSION})
set_target_properties (CMakeProject1 PROPERTIES COMMON_LANGUAGE_RUNTIME "")
set(CMAKE_DOTNET_TARGET_FRAMEWORK_VERSION "4.8")

# TODO: Add tests and install targets if needed.
