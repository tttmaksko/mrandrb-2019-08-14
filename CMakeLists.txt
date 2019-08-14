cmake_minimum_required(VERSION 2.8.7)

project(mrndrb-ask-n-ans CXX)

#include(${CMAKE_BINARY_DIR}/../conanbuildinfo.cmake)
#conan_basic_setup()

include_directories(include)

set(${PROJECT_NAME}_SRC
	src/main.cpp
)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SRC})

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14)
