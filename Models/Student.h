#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    int level;
    double gpa;

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(int id, std::string name, int age, char gender, int level, double gpa);

    // Setters
    void set_level(int level);
    void set_gpa(double gpa);

    // Getters
    int get_level();
    double get_gpa();
};

#endif  // STUDENT_H