cmake_minimum_required(VERSION 3.16)
project(RayLibTemplate)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB SOURCES src/*.cpp)

add_executable(RayLibTemplate ${SOURCES} src/Object.cpp src/Object.h src/Point.cpp src/Point.h src/Line.cpp src/Line.h src/Circle.cpp src/Circle.h)
# Setting parameters for raylib
set(BUILD_EXAMPLES OFF CACHE BOOL "" FORCE) # don't build the supplied examples
set(BUILD_GAMES    OFF CACHE BOOL "" FORCE) # or games

add_subdirectory(libs/raylib-4.1 ./libs/raylib)
target_link_libraries(RayLibTemplate PRIVATE raylib)
