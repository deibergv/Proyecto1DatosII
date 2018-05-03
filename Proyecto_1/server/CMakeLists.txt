cmake_minimum_required(VERSION 3.10)
project(server)

set(CMAKE_CXX_STANDARD 17)

include_directories(/home/kisung/include)

add_executable(server main.cpp mserver.cpp mserver.h node.cpp node.h linkedlist.cpp linkedlist.h)
