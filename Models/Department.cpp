#include "Department.h"

// Default constructor
Department::Department()
{
}

// Parameterized constructor
Department::Department(std::string name, int capacity, double required_gpa)
{
    this->name = name;
    this->capacity = capacity;
    this->required_gpa = required_gpa;

}

// Getters
std::string Department::getName()
{
    return name;
}

int Department::getCapacity()
{
    return capacity;
}

double Department::getRequiredGpa()
{
    return required_gpa;
}

// Setters
void Department::setName(std::string name)
{
    this->name = name;
}

void Department::setCapacity(int capacity)
{
    this->capacity = capacity;
}

void Department::setRequiredGpa(double required_gpa)
{
    this->required_gpa = required_gpa;
}