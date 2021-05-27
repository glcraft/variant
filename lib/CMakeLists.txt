cmake_minimum_required(VERSION 3.10)

project(gly_variant CXX)

file(GLOB VARIANT_SRC "${CMAKE_CURRENT_SOURCE_DIR}/include/variant")

add_library(gly_variant INTERFACE ${VARIANT_SRC})

target_include_directories(gly_variant INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)