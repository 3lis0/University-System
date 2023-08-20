#include "Student.h"

// Default constructor
Student::Student()
{
    // cout<<"Student Default Constructor"<<endl;
}

// Parameterized constructor
Student::Student(int id, std::string name, int age, char gender, int level, double gpa)
        : Person(id, name, age, gender)
{
    this->level = level;
    this->gpa = gpa;
    // cout << "Student Parameterized Constructor" << endl;
}

// Setters
void Student::set_level(int level)
{
    this->level = level;
}

void Student::set_gpa(double gpa)
{
    this->gpa = gpa;
}

// Getters
int Student::get_level()
{
    return level;
}

double Student::get_gpa()
{
    return gpa;
}