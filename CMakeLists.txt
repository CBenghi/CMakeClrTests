# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.

project(CMakeProject1
        DESCRIPTION "Example showing how to link CLR projects"
        HOMEPAGE_URL "https://github.com/PhantomGrazzler/example-clr-linking-cmake"
        LANGUAGES CXX)

# set(CMAKE_CXX_STANDARD 17)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_EXTENSIONS OFF)

add_executable (CMakeProject1 
	"CMakeProject1.cpp" 
	"CMakeProject1.h"
	"NewFile.h"
	"Header.h"
)

message ("CMAKE_VERSION: " ${CMAKE_VERSION})


if (CMAKE_VERSION VERSION_LESS 3.12)
  set_target_properties (CMakeProject1
    PROPERTIES COMPILE_FLAGS "/clr")
    message("Setting clr flag")
else ()
  set_target_properties (CMakeProject1
    PROPERTIES COMMON_LANGUAGE_RUNTIME "")
    message("Setting clr target")
endif()
set(CMAKE_DOTNET_TARGET_FRAMEWORK_VERSION "4.8")


# TODO: Add tests and install targets if needed.
