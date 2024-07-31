target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/include
)

target_sources(${CMAKE_PROJECT_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/gpio_input.cpp
    ${CMAKE_CURRENT_LIST_DIR}/gpio_output.cpp
)
