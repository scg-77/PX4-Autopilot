cmake_minimum_required(VERSION 3.10)

set(PX4_SHELL_COMMAND_PREFIX "px4-")
add_definitions("-DPX4_SHELL_COMMAND_PREFIX=\"${PX4_SHELL_COMMAND_PREFIX}\"")

include_directories(${PX4_SOURCE_DIR}/platforms/common/include)

add_executable(px4
	src/px4/common/main.cpp
	src/px4/common/posixPx4Common.cpp 
	)