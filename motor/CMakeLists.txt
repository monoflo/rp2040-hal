target_include_directories(${CMAKE_PROJECT_NAME} INTERFACE
    include
    lib
)

target_sources(${CMAKE_PROJECT_NAME} INTERFACE
    include/drv8833.hpp
    lib/i_motor_driver.hpp
    src/drv8833.cpp
)
