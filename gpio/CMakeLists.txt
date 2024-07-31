target_include_directories(${CMAKE_PROJECT_NAME} INTERFACE
    include
    lib
)

target_sources(${CMAKE_PROJECT_NAME} INTERFACE
    include/gpio_input.hpp
    include/gpio_output.hpp
    lib/i_gpio_input.hpp
    lib/i_gpio_output.hpp
    src/gpio_input.cpp
    src/gpio_output.cpp
)
