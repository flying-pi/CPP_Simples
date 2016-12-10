cmake_minimum_required(VERSION 3.6)
project(CPP_Simples)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CPP_Simples ${SOURCE_FILES})

set(SOURCE_FILES bitFiled/main.cpp)
add_executable(bitFiled ${SOURCE_FILES})

set(SOURCE_FILES alternativeSymbols/main.cpp alternativeSymbols/main.cpp)
add_executable(alternativeSymbols ${SOURCE_FILES})