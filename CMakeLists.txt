cmake_minimum_required(VERSION 3.16)
project(pc-helper-ai CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pchelperai
    src/main.cpp
    src/voice.cpp
    src/diag.cpp
    src/fixer.cpp
    src/cli.cpp
    src/utils.cpp
)

target_include_directories(pchelperai PRIVATE include)

if(WIN32)
    target_link_libraries(pchelperai PRIVATE userenv)
endif()
