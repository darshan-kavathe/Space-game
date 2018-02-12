cmake_minimum_required(VERSION 3.6)
project(Spacecraft)

set(CMAKE_CXX_STANDARD 98)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98 -Wall -Wextra -Weffc++ -pedantic -g")

set(SOURCE_FILES src/spacecraft.cpp src/spacecraft.h src/test_spacecraft.cpp)
add_executable(SpacecraftTest ${SOURCE_FILES})

set(SOURCE_FILES src/spacecraft.cpp src/spacecraft.h src/ships.cpp src/NASA.cpp src/NASA.h)
add_executable(Spacecraft ${SOURCE_FILES})
