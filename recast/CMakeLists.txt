cmake_minimum_required(VERSION 3.13)

SET(RECAST_LIB_SRC
   MeshLoaderObj.cpp
   ChunkyTriMesh.cpp
   InputGeom.cpp
   MeshLoaderObj.cpp
   Recast.cpp
   RecastAlloc.cpp
   RecastArea.cpp
   RecastAssert.cpp
   RecastContour.cpp
   RecastFilter.cpp
   RecastLayers.cpp
   RecastMesh.cpp
   RecastMeshDetail.cpp
   RecastRasterization.cpp
   RecastRegion.cpp
)

ADD_LIBRARY(RECAST_LIB   ${RECAST_LIB_SRC})

include_directories(
    ./
)