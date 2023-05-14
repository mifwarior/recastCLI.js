cmake_minimum_required(VERSION 3.13)

PROJECT(recastjs)

if(UNIX) 
    add_compile_options(-std=c++17)
endif(UNIX)

ADD_SUBDIRECTORY("recast")
ADD_SUBDIRECTORY("main")