cmake_minimum_required(VERSION 3.7)

project(asteroids)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

include_directories(${CMAKE_CURRENT_SOURCE_DIR})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/thirdparty)

add_subdirectory(thirdparty)
add_subdirectory(engine)


add_executable(asteroids main.cpp)
target_link_libraries(asteroids engine)

