cmake_minimum_required(VERSION 3.12)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/dist)

SET(RECAST_CLI_SRC
    build.cpp
    main.cpp
)

ADD_EXECUTABLE(RecastCLI
            ${RECAST_CLI_SRC})

include_directories(
    ./
    ../recast
)

TARGET_LINK_LIBRARIES(RecastCLI RECAST_LIB)