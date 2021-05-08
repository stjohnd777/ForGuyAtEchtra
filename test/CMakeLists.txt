cmake_minimum_required(VERSION 3.17)
project(tests)
set(CMAKE_CXX_STANDARD 20)

add_executable(TestBoard catch.hpp ../src/Common.h ../src/Board.cpp  ./TestBoard.cpp)

