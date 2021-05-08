cmake_minimum_required(VERSION 3.17)
project(TicTackToe)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(test)

add_executable(TicTackToe src/Common.h src/Board.cpp src/Player.cpp src/Game.cpp src/main.cpp)