# CMakeList.txt : CMake project for matrixindex, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8 FATAL_ERROR)

project ("matrixindex")


# TODO: Add tests and install targets if needed.


OPTION(BUILD_WITH_OPENMP "Build with OPENMP" OFF)
IF(BUILD_WITH_OPENMP)
# to set the /openmp switch
find_package(OpenMP REQUIRED)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
ENDIF(BUILD_WITH_OPENMP)


SET(matrixindex-src 
matrixindex.cpp
)

SET(matrixindex-header
)

ADD_EXECUTABLE(
    matrixindex
${matrixindex-src} 
${matrixindex-header}
)

IF(BUILD_WITH_OPENMP)
set_target_properties(matrixindex PROPERTIES OUTPUT_NAME "matrixindex_omp")
ENDIF(BUILD_WITH_OPENMP)

