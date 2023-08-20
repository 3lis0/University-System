#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "Person.h"
#include "Department.h"

class Professor : public Person
{
private:
    Department* department;
    double salary;
    std::string degree;

public:
    // Parameterized constructor
    Professor(int id, std::string name, int age, char gender, Department* department, double salary, std::string degree);

    // Default constructor
    Professor();

    // Setters
    void set_department(Department* department);
    void set_salary(double salary);
    void set_degree(std::string degree);

    // Getters
    Department* get_department();
    double get_salary();
    std::string get_degree();
};

#endif  // PROFESSOR_H