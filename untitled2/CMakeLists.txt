cmake_minimum_required(VERSION 3.25)
project(untitled2 CXX)

set(CMAKE_CXX_STANDARD 11)

LIST(APPEND tasks zad1 zad2 zad3 zad4 cars route cars_manager)

foreach(x ${tasks})
    add_executable(${x} ${x}.cpp)
endforeach ()
