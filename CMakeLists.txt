cmake_minimum_required(VERSION 3.12)
project(BowlingGameKata)

set(CMAKE_CXX_STANDARD 17)

add_executable(BowlingGameKata ext/catch.h tests/BowlingGameTests.cpp)