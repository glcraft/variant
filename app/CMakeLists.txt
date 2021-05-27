cmake_minimum_required(VERSION 3.10)

project(gly_variant_apptest CXX)

file(GLOB APP_SRC "${CMAKE_CURRENT_SOURCE_DIR}/main.cpp")

add_executable(gly_variant_apptest ${APP_SRC})

target_link_libraries(gly_variant_apptest gly_variant)

set_target_properties(gly_variant_apptest PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)