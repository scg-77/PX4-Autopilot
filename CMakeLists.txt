cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

set(PX4_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}" CACHE FILEPATH "PX4 source directory" FORCE)

project(px4 CXX C ASM)

# Include le CMakeLists.txt de ./platforms/posix
add_subdirectory(platforms/posix)
