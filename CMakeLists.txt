cmake_minimum_required(VERSION 3.12)
project(CPPPrimerPlus)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

add_executable(CPPPrimerPlus
        main.cpp
        src/chapter4.cpp
        header/exercise.h
        src/chapter8.cpp
        header/stock00.h
        src/stock00.cpp
        src/chapter10.cpp
        src/chapter7.cpp
        header/stack.h
        src/stack.cpp header/ex10.h src/ex10.cpp)