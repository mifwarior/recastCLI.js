cmake_minimum_required(VERSION 3.12)

PROJECT(recastjs)

if(UNIX) 
    add_compile_options(-std=c++17)
endif(UNIX)

ADD_SUBDIRECTORY("recast")

if (NOT EMSCRIPTEN_VERSION)
    ADD_SUBDIRECTORY("main")
endif(NOT EMSCRIPTEN_VERSION)

if(EMSCRIPTEN)
    ADD_SUBDIRECTORY("web")
endif(EMSCRIPTEN)