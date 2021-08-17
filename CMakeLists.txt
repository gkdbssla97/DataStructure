cmake_minimum_required(VERSION 3.19)
project(DataStructure_C C)

set(CMAKE_C_STANDARD 99)
SET ( CMAKE_EXE_LINKER_FLAGS "-framework Security" )


add_executable(DataStructure_C DummyLinkedRead.c)