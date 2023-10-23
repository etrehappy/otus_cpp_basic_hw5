cmake_minimum_required(VERSION 3.26)

project(statistics)

add_executable(statistics 
	statistics.cpp	statistics.h
	min.cpp			min.h
	max.cpp			max.h
	mean.cpp		mean.h
	std_deviation.cpp	std_deviation.h
	quantiles.cpp		quantiles.h
)

set_target_properties(statistics PROPERTIES
	CXX_STANDARD 17
	CXX_STANDARD_REQUIRED ON
)