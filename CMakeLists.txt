cmake_minimum_required(VERSION 3.8)
project(Tarea_2)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Terrenos.cpp Terrenos.h Lotificadora.cpp Lotificadora.h Proyecto_loto.cpp Proyecto_loto.h)
add_executable(Tarea_2 ${SOURCE_FILES})