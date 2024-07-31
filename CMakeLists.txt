cmake_minimum_required(VERSION 3.6...3.27)

include(pico_sdk_import.cmake)
project(rp2040hal)

pico_sdk_init()

add_library(${CMAKE_PROJECT_NAME} STATIC)

add_subdirectory(gpio)

target_link_libraries(${CMAKE_PROJECT_NAME} pico_stdlib)
