cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(cg-work)
add_definitions("-std=c++11 -lgmp")
SET(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cg/CMake/Modules)
find_package(GMP REQUIRED)
<<<<<<< HEAD
=======
IF (${GMP_FOUND})
   MESSAGE(STATUS "Found GMP.")
ELSE (${GMP_FOUND})
   MESSAGE(FATAL_ERROR "Could not locate GMP.")
ENDIF (${GMP_FOUND})
>>>>>>> 78e68513a1734cdff7da78e19866f8b99f41c7cf
include_directories("cg/include/cg" ${GMP_INCLUDE_DIR})
add_subdirectory(cg)
add_subdirectory(intersections)
