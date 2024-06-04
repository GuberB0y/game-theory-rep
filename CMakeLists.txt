cmake_minimum_required(VERSION 3.10)
project(GameTheoryRep)

set(CMAKE_CXX_STANDARD 17)

# Add include directories
include_directories(
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_SOURCE_DIR}/include/players
    ${CMAKE_SOURCE_DIR}/include/mechanics
)

# Add source files, including the .cpp file in the include directory
add_executable(GameTheoryRep
    src/game.cpp
    src/mechanics.cpp
    src/players.cpp
)
