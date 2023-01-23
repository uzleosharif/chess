

project(chess CXX)

cmake_minimum_required(VERSION 3.22)

set(CMAKE_CXX_STANDARD 23)

set(conan_required_packages "qt/5.15.7")

include(${CMAKE_SOURCE_DIR}/cmake/utils.cmake)
utils_conan_install()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(chess-qt src/main.cpp src/board.cpp)
target_include_directories(chess-qt PRIVATE include/)
target_link_libraries(chess-qt Qt5::Widgets)