cmake_minimum_required(VERSION 3.10)

project(gly_variant CXX)

file(GLOB VARIANT_SRC "${CMAKE_SOURCE_DIR}/main.cpp")

add_executable(gly_variant ${VARIANT_SRC})

set_target_properties(gly_variant PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)