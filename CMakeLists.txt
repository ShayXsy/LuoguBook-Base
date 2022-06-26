cmake_minimum_required(VERSION 3.22)
project(LuoguBook_Base)

set(CMAKE_CXX_STANDARD 14)

add_executable(LuoguBook_Base main.cpp)

# Part1
# Chapter1
add_executable(HelloLuogu Introduction_to_Cpp/Chapter1/HelloLuogu.cpp)
add_executable(UimMoney Introduction_to_Cpp/Chapter1/UimMoney.cpp)
add_executable(P1000 Introduction_to_Cpp/Chapter1/P1000.cpp)

# Chapter2
add_executable(apple Introduction_to_Cpp/Chapter2/apple.cpp)
add_executable(exchange_variables Introduction_to_Cpp/Chapter2/exchange_variables.cpp)
add_executable(P5703 Introduction_to_Cpp/Chapter2/P5703.cpp)
add_executable(P5704 Introduction_to_Cpp/Chapter2/P5704.cpp)
