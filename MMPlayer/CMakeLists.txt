cmake_minimum_required(VERSION 3.15.0)

include_directories(../)

add_executable(MMPlayer "MMPlayer.cpp" "MMPlayer.h")

target_link_libraries(MMPlayer MMThread pthread)