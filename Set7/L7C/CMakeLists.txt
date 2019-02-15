cmake_minimum_required(VERSION 3.12)
project(l7c)

include_directories(include)
link_directories(lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

add_executable(l7c main.cpp)

target_link_libraries(l7c sfml-audio sfml-graphics sfml-system sfml-window sfml-network)

add_custom_command(TARGET l7c
        POST_BUILD COMMAND
        ${CMAKE_INSTALL_NAME_TOOL} -add_rpath "@executable_path/../../Frameworks/"
        $<TARGET_FILE:l7c>)

