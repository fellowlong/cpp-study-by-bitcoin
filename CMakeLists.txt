cmake_minimum_required(VERSION 3.9)
project(cpp-study-by-bitcoin)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(cpp_study main.cpp boost-test/signal_test.cpp boost-test/signal_test.h boost-test/bind_test.cpp boost-test/bind_test.h)