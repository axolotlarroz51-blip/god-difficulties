cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(god-difficulties VERSION 1.0.5 LANGUAGES CXX)

find_package(Geode REQUIRED)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

create_geode_mod(${PROJECT_NAME})
