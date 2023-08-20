#ifndef COURSE_H
#define COURSE_H

#include <string>
#include <vector>

class Professor;
class Student;

class Course
{
private:
    std::string name;
    int course_hours;
    std::string course_code;
    Professor* professor;
    std::vector<Student*> students;
    std::vector<Course*> prerequisites;

public:
    // Default constructor
    Course();

    // Parameterized constructor
    Course(std::string c_name, std::string c_code, int c_hours, std::vector<Course*> pre, Professor* prof, std::vector<Student*> stu);

    // Destructor
    ~Course();

    // Setters
    void set_name(std::string name);
    void set_course_hours(int course_hours);
    void set_course_code(std::string course_code);
    void set_professor(Professor* professor);
    void set_students(Student* student);
    void set_prerequisites(Course* prerequisite);

    // Getters
    std::string get_name();
    int get_course_hours();
    std::string get_course_code();
    Professor* get_professor();
    std::vector<Student*> get_students();
    std::vector<Course*> get_prerequisites();
};

#endif  // COURSE_H