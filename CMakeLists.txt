cmake_minimum_required(VERSION 3.17)
project(GraphicLib)

set(CMAKE_CXX_STANDARD 14)

#find_package(GLEW REQUIRED)
#find_package(OpenGL REQUIRED)

#find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

#include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

include_directories(.)
include_directories(headers)
include_directories(src)
#include_directories(glad)
#include_directories(KHR)


add_executable(GraphicLib
        headers/printer.h
        headers/vector.h
        src/printer.cpp
        src/vector.cpp
        headers/figures.h
        #src/glad.c
        #glad/glad.h
        #KHR/khrplatform.h
        main.cpp)

target_link_libraries(GraphicLib -lsfml-graphics -lsfml-window -lsfml-system)
#target_link_libraries(GraphicLib  -lglfw -lGL -ldl -lGLEW)
#target_link_libraries(GraphicLib ${OPENGL_LIBRARIES} GLEW::GLEW ${GLFW_LIBRARY} ${SOIL_LIBRARY})
#target_include_directories(GraphicLib PUBLIC ${OPENGL_INCLUDE_DIR} ${GLFW_INCLUDE_DIR} ${SOIL_INCLUDE_DIR})