cmake_minimum_required(VERSION 3.2)

project(hello_world)
set(CMAKE_CODEBLOCKS_EXCLUDE_EXTERNAL_FILES)
add_executable(time main.cpp header/complexNum.cpp header/header.cpp header/A.cpp header/B.cpp header/C.cpp ) 
add_executable(drive driver.cpp ) 