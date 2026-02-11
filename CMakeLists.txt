cmake_minimum_required(VERSION 3.20)
project(cpp_engine_game_tetris LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(tetris
    src/main.cpp
)