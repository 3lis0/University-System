#include "Professor.h"

// Default constructor
Professor::Professor()
{
}

// Parameterized constructor
Professor::Professor(int id, std::string name, int age, char gender, Department* department, double salary, std::string degree)
        : Person(id, name, age, gender)
{
    this->department = department;
    this->salary = salary;
    this->degree = degree;
}

// Setters
void Professor::set_department(Department* department)
{
    this->department = department;
}

void Professor::set_salary(double salary)
{
    this->salary = salary;
}

void Professor::set_degree(std::string degree)
{
    this->degree = degree;
}

// Getters
Department* Professor::get_department()
{
    return department;
}

double Professor::get_salary()
{
    return salary;
}

std::string Professor::get_degree()
{
    return degree;
}