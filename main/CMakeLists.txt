cmake_minimum_required(VERSION 3.13)

SET(RECAST_JS_SRC
    build.cpp
    main.cpp
    ChunkyTriMesh.cpp
    InputGeom.cpp
    MeshLoaderObj.cpp
    # port.cpp
)

ADD_EXECUTABLE(RecastJS
            ${RECAST_JS_SRC})

include_directories(
    ./
    ../recast
)

TARGET_LINK_LIBRARIES(RecastJS RECAST_LIB)