cmake_minimum_required(VERSION 3.12)
project(FP)

set(CMAKE_CXX_STANDARD 11)

add_executable(FP main.cpp Budget.cpp Budget.h Categories.cpp Categories.h Transaction.h)