#ifndef PERSON_H
#define PERSON_H
#include <string>

using namespace std;

class Person
{
protected:
    int id;
    std::string name;
    int age;
    char gender;

public:
    // Default constructor
    Person();

    // Parameterized constructor
    Person(int id, std::string name, int age, char gender);

    // Setters
    void set_id(int id);
    void set_name(std::string name);
    void set_age(int age);
    void set_gender(char gender);

    // Getters
    int get_id();
    string get_name();
    int get_age();
    char get_gender();
};

#endif  // PERSON_H