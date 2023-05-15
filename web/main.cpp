#include <stdio.h>
#include <string>
#include <cstring>
#include <sstream>
#include "math.h"

#include <emscripten.h>
#include <emscripten/bind.h>
#include <emscripten/html5.h>

#include "MeshLoaderObj.h"
#include "Recast.h"
#include "InputGeom.h"
#include "build.h"

using namespace emscripten;

typedef typename std::string Uint8Array;

EMSCRIPTEN_BINDINGS(RECASTJS)
{
  function("buildObj", &buildObj);

  class_<rcMeshLoaderObj>("rcMeshLoaderObj")
      .function("readString", &rcMeshLoaderObj::readString)
      .function("getVerts", &rcMeshLoaderObj::getVerts, allow_raw_pointers())
      .function("getNormals", &rcMeshLoaderObj::getNormals, allow_raw_pointers())
      .function("getTris", &rcMeshLoaderObj::getTris, allow_raw_pointers())
      .function("getVertCount", &rcMeshLoaderObj::getVertCount)
      .function("getVertCount", &rcMeshLoaderObj::getTriCount);
}
