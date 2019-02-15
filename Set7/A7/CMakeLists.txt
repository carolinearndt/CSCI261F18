cmake_minimum_required(VERSION 3.12)
project(A7)

include_directories(include)
link_directories(lib)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

add_executable(A7 main.cpp Functions.cpp Functions.h WordCount.h)

target_link_libraries(A7 sfml-audio sfml-graphics sfml-system sfml-window sfml-network)

add_custom_command(TARGET A7
        POST_BUILD COMMAND
        ${CMAKE_INSTALL_NAME_TOOL} -add_rpath "@executable_path/../../Frameworks/"
        $<TARGET_FILE:A7>)

