cmake_minimum_required(VERSION 3.24)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp quiz.cpp quiz.h question.cpp question.h date.h date.cpp)
