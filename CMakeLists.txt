cmake_minimum_required(VERSION 3.16)
project(Snake_byme)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(Snake_byme main.cpp window.cpp window.h Window.cpp Window.h Point.cpp Point.h StartWindow.cpp StartWindow.h)