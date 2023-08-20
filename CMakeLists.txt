cmake_minimum_required(VERSION 3.23)
project(University_System)

set(CMAKE_CXX_STANDARD 14)

add_executable(University_System main.cpp
        Models/Person.cpp Models/Person.h
        Models/Department.cpp Models/Department.h
        Models/Professor.cpp Models/Professor.h
        Models/Student.cpp Models/Student.h
        Models/Course.cpp Models/Course.h
        Models/University.cpp Models/University.h)
