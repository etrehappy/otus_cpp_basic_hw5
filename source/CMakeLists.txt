cmake_minimum_required(VERSION 3.26)

project(statistics)

add_executable(statistics 
	statistics.cpp
	statistics.h
)

set_target_properties(statistics PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)