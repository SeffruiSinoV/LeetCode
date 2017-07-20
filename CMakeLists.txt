cmake_minimum_required(VERSION 3.8.0)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS " -g -std=c++11 -pthread ")

project(LeetCode)

set(SRC
	main.cpp
	LeetCode_70_ClimbingStairs_DP.h
	LeetCode_91_DecodeWays_DP.h
	LeetCode_64_MinimumPathSum_DP.h
   )
add_executable(LeetCode ${SRC})
