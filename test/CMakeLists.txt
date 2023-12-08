cmake_minimum_required (VERSION 3.19)

set(CMAKE_BUILD_TYPE "Debug")

project(test)

add_definitions(-DDEBUG=1)

find_package(fmt CONFIG REQUIRED)

add_executable(test main.cpp)

#add_subdirectory(Adder ./out/build/Adder)
add_subdirectory(Adder)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_directories(${PROJECT_NAME} PRIVATE Adder)

target_link_libraries(${PROJECT_NAME} 
	PRIVATE
	Adder
	fmt::fmt
	)

