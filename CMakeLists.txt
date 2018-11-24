cmake_minimum_required(VERSION 3.12)
project(CPPPrimerPlus)

set(CMAKE_CXX_STANDARD 14)
#set(CMAKE_EXE_LINKER_FLAGS "-static-libgcc -static-libstdc++")

include_directories(/opt/intel/mkl/include)
link_directories(/opt/intel/mkl/lib /opt/intel/lib)

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
        src/stack.cpp
        header/ex10.h
        src/ex10.cpp
        header/mytime0.h
        src/mytime0.cpp
        src/chapter11.cpp
        header/vector.h
        src/vector.cpp
        header/strngbad.h
        src/strngbad.cpp
        src/chapter12.cpp
        src/string1.cpp
        header/string1.h
        header/queue.h
        src/queue.cpp
        header/tabtenn1.h
        src/tabtenn1.cpp
        src/chapter13.cpp
        src/testMKL.cpp header/brass.h)

target_link_libraries(CPPPrimerPlus mkl_intel_thread iomp5 mkl_core mkl_intel_lp64)