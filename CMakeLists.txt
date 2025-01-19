cmake_minimum_required(VERSION 3.10)

project(VerletEngine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VerletEngine src/main.cpp)

find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

target_link_libraries(VerletEngine sfml-system sfml-window sfml-graphics)

