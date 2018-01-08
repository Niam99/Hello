cmake_minimum_required(VERSION 2.8.9)
project(frame)

find_package(Wt REQUIRED)


add_executable(frame project.cpp)
target_link_libraries(frame ${Wt_LIBRARIES})
