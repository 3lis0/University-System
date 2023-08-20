// University.h

#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <vector>
#include "Course.h"
#include "Student.h"
#include "Department.h"
#include "Professor.h"

class University {
private:
    std::vector<Course> courses;
    std::vector<Student> students;
    std::vector<Department> departments;
    std::vector<Professor> professors;
    static University* instance;

    University() {}

public:
    University(const University& obj) = delete;
    static University* get_instance();

    void add_course(std::string c_name, std::string c_code, int c_hours, std::vector<Course*> prerequests, Professor* prof, std::vector<Student*> students);
    bool update_course(int c_hours, std::string c_code);
    void delete_course(std::string c_code);

    void add_student(int id, const std::string& name, int age, char gender, int level, double gpa);
    bool check(int id);
    void update(int id, double gpa);
    void remove_student(int id);

    void addDepartment(std::string name, double gpa, int capacity);
    void updateDepartment(const std::string& name, int cap);
    void removeDepartment(std::string name);
    bool check(std::string name);

    void addProfessor(int id, std::string name, int age, char gender, Department* department, double salary, std::string degree);
    void updateProfessor(int id, int salary);
    void removeProfessor(int id);
    bool checkProf(int id);

    void addData();
    void printAll();
};

#endif  // UNIVERSITY_H