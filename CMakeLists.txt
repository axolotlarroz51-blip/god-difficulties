cmake_minimum_required(VERSION 3.25)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(god-difficulties VERSION 1.0.5 LANGUAGES CXX)

if (NOT DEFINED ENV{GEODE_SDK})
    message(FATAL_ERROR "No se encontro el SDK de Geode. Asegurate de definir GEODE_SDK.")
endif()

include($ENV{GEODE_SDK}/share/geode/cmake/GeodeSdk.cmake)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

create_geode_mod(${PROJECT_NAME})
