cmake_minimum_required(VERSION 3.10)

set(PX4_SHELL_COMMAND_PREFIX "px4-")
add_definitions("-DPX4_SHELL_COMMAND_PREFIX=\"${PX4_SHELL_COMMAND_PREFIX}\"")

include_directories(${PX4_SOURCE_DIR}/platforms/common/include)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(px4
	src/px4/common/main.cpp
	src/px4/common/PosixPx4Common.cpp 
	src/px4/common/PosixPx4Common.h 
	)

add_executable(px4Tests
	src/px4/common/tests/mainTest.cpp
	src/px4/common/tests/PosixPx4CommonTest.cpp
	src/px4/common/PosixPx4Common.cpp 
)

target_link_libraries(px4Tests PRIVATE ${GTEST_LIBRARIES} pthread)