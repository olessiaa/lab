cmake_minimum_required(VERSION 3.10)
project(lab1_proga)
add_executable(lab1_proga src/main.cpp src/utils.cpp)

target_include_directories(lab1_proga PRIVATE src)
if(WIN32)
  target_link_options(lab1_proga PRIVATE /SUBSYSTEM:CONSOLE)
endif()