cmake_minimum_required(VERSION 3.8)

add_executable(MMPlayer "MMPlayer.cpp" "MMPlayer.h")
target_link_libraries(MMPlayer pthread)