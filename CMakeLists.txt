cmake_minimum_required(VERSION 3.23)
project(prg1)

set(CMAKE_CXX_STANDARD 14)

add_executable(prg1 main.cpp Robot.cpp Robot.h userInterface.cpp userInterface.h annex.cpp annex.h BattleRoyal.cpp BattleRoyal.h)
