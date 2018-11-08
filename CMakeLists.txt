cmake_minimum_required(VERSION 3.12)
project(CPPPrimerPlus)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(CPPPrimerPlus main.cpp chapter4.cpp exercise.h)