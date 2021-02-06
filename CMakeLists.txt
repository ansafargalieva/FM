cmake_minimum_required(VERSION 3.17)
project(code1)

set(CMAKE_CXX_STANDARD 14)

add_executable(code1 main.cpp DiffusionGBM.cpp DiffusionGBM.h DiffusionCEV.cpp DiffusionCEV.h DiffusionOU.cpp DiffusionOU.h cmake-build-debug/DiffusionCRI.cpp cmake-build-debug/DiffusionCRI.h DiffusionLipton.cpp DiffusionLipton.h)