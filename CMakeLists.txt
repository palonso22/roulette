cmake_minimum_required(VERSION 3.0.0)
project(roulette VERSION 0.1.0)

include(CTest)
enable_testing()

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/src
)

file(GLOB all_SRCS
        "${PROJECT_SOURCE_DIR}/include/player/*.h"
        "${PROJECT_SOURCE_DIR}/include/roulette/*.h"
        "${PROJECT_SOURCE_DIR}/src/player/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/roulette/*.cpp"
        "${PROJECT_SOURCE_DIR}/src/main.cpp"
        )


add_executable(roulette  ${all_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
