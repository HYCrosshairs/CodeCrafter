cmake_minimum_required(VERSION 3.13)
project(cosine)

set(CXX_STANDARD 17)

set(SOURCES main.cpp cosine.cpp)

add_executable(cosine ${SOURCES})