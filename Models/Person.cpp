#include "Person.h"

// Default constructor
Person::Person(){}

// Parameterized constructor
Person::Person(int id, std::string name, int age, char gender)
{
    this->id = id;
    this->name = name;
    this->age = age;
    this->gender = gender;
}

// Setters
void Person::set_id(int id)
{
    this->id = id;
}

void Person::set_name(std::string name)
{
    this->name = name;
}

void Person::set_age(int age)
{
    this->age = age;
}

void Person::set_gender(char gender)
{
    this->gender = gender;
}

// Getters
int Person::get_id()
{
    return id;
}

std::string Person::get_name()
{
    return name;
}

int Person::get_age()
{
    return age;
}

char Person::get_gender()
{
    return gender;
}