cmake_minimum_required(VERSION 3.20)
project(Vec2 VERSION 0.1.0 LANGUAGES CXX)

file(GLOB_RECURSE SOURCES "include/*.hpp")

add_executable(Vec2Maths test/test_vec2.cpp)

target_include_directories(Vec2Maths PRIVATE include)