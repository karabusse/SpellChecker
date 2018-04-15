cmake_minimum_required(VERSION 3.10)
project(SpellChecker)

set(CMAKE_CXX_STANDARD 11)

add_executable(SpellChecker main.cpp Dictionary.cpp Dictionary.h)