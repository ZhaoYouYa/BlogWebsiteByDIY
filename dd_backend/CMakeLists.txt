cmake_minimum_required(VERSION 3.0.0)
project(dd_background VERSION 0.1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
find_package(Drogon CONFIG REQUIRED)
add_executable(dd_background 

main.cpp
controller/doc_controller.h
controller/doc_controller.cpp

)
target_link_libraries(dd_background PRIVATE ${DROGON_LIBRARIES})

