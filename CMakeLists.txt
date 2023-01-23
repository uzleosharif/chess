

project(chess CXX)

cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 23)

add_executable(chess-qt src/main.cpp src/board.cpp)
target_include_directories(chess-qt PUBLIC include/)