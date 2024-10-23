cmake_minimum_required(VERSION 3.16.3) 
project(banana_t)

set(SOURCES
    src/main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})