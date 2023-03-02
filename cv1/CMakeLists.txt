cmake_minimum_required(VERSION 3.24)
project(cv1)

set(CMAKE_CXX_STANDARD 23)

add_executable(cv1 src/main.cpp src/include/user.h src/include/chat.h src/model/user.cpp src/model/chat.cpp src/include/Message.h src/model/Message.cpp)
