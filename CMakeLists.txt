cmake_minimum_required(VERSION 3.21)
project(god-difficulties VERSION 1.0.0)

add_library(${PROJECT_NAME} SHARED src/main.cpp)

if(NOT DEFINED CMAKE_CXX_VISIBILITY_PRESET)
    set(CMAKE_CXX_VISIBILITY_PRESET hidden)
endif()

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_20)

include(Geode.cmake)
