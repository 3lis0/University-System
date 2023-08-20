#include "Course.h"
#include "Professor.h"
#include "Student.h"

// Default constructor
Course::Course()
{
}

// Parameterized constructor
Course::Course(std::string c_name, std::string c_code, int c_hours, std::vector<Course*> pre, Professor* prof, std::vector<Student*> stu)
        : name(c_name), course_code(c_code), course_hours(c_hours), professor(prof), students(stu), prerequisites(pre)
{
}

// Destructor
Course::~Course()
{
}

// Setters
void Course::set_name(std::string name)
{
    this->name = name;
}

void Course::set_course_hours(int course_hours)
{
    this->course_hours = course_hours;
}

void Course::set_course_code(std::string course_code)
{
    this->course_code = course_code;
}

void Course::set_professor(Professor* professor)
{
    this->professor = professor;
}

void Course::set_students(Student* student)
{
    students.push_back(student);
}

void Course::set_prerequisites(Course* prerequisite)
{
    prerequisites.push_back(prerequisite);
}

// Getters
std::string Course::get_name()
{
    return name;
}

int Course::get_course_hours()
{
    return course_hours;
}

std::string Course::get_course_code()
{
    return course_code;
}

Professor* Course::get_professor()
{
    return professor;
}

std::vector<Student*> Course::get_students()
{
    return students;
}

std::vector<Course*> Course::get_prerequisites()
{
    return prerequisites;
}