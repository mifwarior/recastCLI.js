cmake_minimum_required(VERSION 3.12)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist)

SET(CMAKE_TOOLCHAIN_FILE $ENV{EMSDK}/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake)
set(CMAKE_EXECUTABLE_SUFFIX ".js") 

SET(RECAST_JS_SRC
    main.cpp
    ../main/build.cpp
)

ADD_EXECUTABLE(RecastJS
            ${RECAST_JS_SRC}
            )

include_directories(
    ./
    ../recast
    ../main
)
            
# set_target_properties(RecastJS PROPERTIES COMPILE_FLAGS "")
set_target_properties(RecastJS PROPERTIES LINK_FLAGS "-std=c++17 -s NO_EXIT_RUNTIME=1 -sSTACK_SIZE=1MB -sWASM=1 -sERROR_ON_UNDEFINED_SYMBOLS=1 -sALLOW_MEMORY_GROWTH=1 -Oz --bind")


TARGET_LINK_LIBRARIES(RecastJS RECAST_LIB)