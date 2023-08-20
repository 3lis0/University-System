#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>
using namespace std;

class Department
{
private:
    std::string name;
    int capacity;
    double required_gpa;

public:
    // Default constructor
    Department();

    // Parameterized constructor
    Department(std::string name, int capacity, double required_gpa);

    // Getters
    string getName();
    int getCapacity();
    double getRequiredGpa();

    // Setters
    void setName(std::string name);
    void setCapacity(int capacity);
    void setRequiredGpa(double required_gpa);
};

#endif  // DEPARTMENT_H