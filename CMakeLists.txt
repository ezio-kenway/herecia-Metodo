cmake_minimum_required(VERSION 3.15)
project(ava)

set(CMAKE_CXX_STANDARD 14)

add_executable(ava main.cpp CAlumno.h CPersona.h Profesor.h Pregadro.h Doctorado.h)