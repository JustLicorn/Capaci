cmake_minimum_required(VERSION 4.3)
project(Capaci)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)

add_executable(Capaci
        src/capaci.cpp
        include/capaci.h)
