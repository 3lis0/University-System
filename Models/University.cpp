// University.cpp

#include "University.h"

University* University::get_instance() {
    if (instance == nullptr) {
        instance = new University();
        return instance;
    } else {
        return instance;
    }
}

void University::add_course(std::string c_name, std::string c_code, int c_hours, std::vector<Course*> prerequests, Professor* prof, std::vector<Student*> students) {
    if (c_hours > 6 || c_name == "" || c_code == "") {
        std::cout << "Can't add course!" << std::endl;
    } else {
        Course course1(c_name, c_code, c_hours, prerequests, prof, students);
        courses.push_back(course1);
        std::cout << "Course added" << std::endl;
    }
}

bool University::update_course(int c_hours, std::string c_code) {
    for (int i = 0; i < courses.size(); i++) {
        if (courses[i].get_course_code() == c_code) {
            courses[i].set_course_code(c_code);
            std::cout << "Course edited" << std::endl;
            return true;
        }
    }
    std::cout << "There is no course with that course code to edit!" << std::endl;
    return false;
}

void University::delete_course(std::string c_code) {
    for (auto c = courses.begin(); c != courses.end(); ++c) {
        if (c->get_course_code() == c_code) {
            courses.erase(c);
            std::cout << "Course removed" << std::endl;
            return;
        }
    }
    std::cout << "There is no course with that code to remove!" << std::endl;
}

void University::add_student(int id, const std::string& name, int age, char gender, int level, double gpa) {
    Student student(id, name, age, gender, level, gpa);

    if (check(student.get_id())) {
        std::cout << "Invalid student ID" << std::endl;
    } else {
        students.push_back(student);
        std::cout << "Student added successfully." << std::endl;
    }
}

bool University::check(int id) {
    for (Student s : students) {
        if (s.get_id() == id) {
            return true;
        }
    }
    return false;
}

void University::update(int id, double gpa) {
    bool found = false;

    for (Student& s : students) {
        if (s.get_id() == id) {
            s.set_gpa(gpa);
            std::cout << "GPA updated for student with ID " << id << " with GPA " << gpa << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Student with ID " << id << "does not exist." << std::endl;
    }
}

void University::remove_student(int id) {
    for (auto s = students.begin(); s != students.end(); ++s) {
        if (s->get_id() == id) {
            students.erase(s);
            std::cout << "Student with ID " << id << " removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Student with ID " << id << " does not exist." << std::endl;
}

void University::addDepartment(std::string name, double gpa, int capacity) {
    Department department(name, gpa, capacity);

    if (check(name)) {
        std::cout << "Invalid department name" << std::endl;
    } else {
        departments.push_back(department);
        std::cout << "Department added successfully." << std::endl;
    }
}

void University::updateDepartment(const std::string& name, int cap) {
    bool found = false;

    for (Department& d : departments) {
        if (d.getName() == name) {
            d.setCapacity(cap);
            std::cout << "Department capacity updated for " << name << " with capacity " << cap << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Department " << name << " does not exist." << std::endl;
    }
}

void University::removeDepartment(std::string name) {
    for (auto d = departments.begin(); d != departments.end(); ++d) {
        if (d->getName() == name) {
            departments.erase(d);
            std::cout << "Department " << name << " removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Department " << name << " does not exist." << std::endl;
}

bool University::check(std::string name) {
    for (Department d : departments) {
        if (d.getName() == name) {
            return true;
        }
    }
    return false;
}

void University::addProfessor(int id, std::string name, int age, char gender, Department* department, double salary, std::string degree) {
    Professor professor(id, name, age, gender, department, salary, degree);

    if (checkProf(id)) {
        std::cout << "Invalid professor ID" << std::endl;
    } else {
        professors.push_back(professor);
        std::cout << "Professor added successfully." << std::endl;
    }
}

void University::updateProfessor(int id, int salary) {
    bool found = false;

    for (Professor& p : professors) {
        if (p.get_id() == id) {
            p.set_salary(salary);
            std::cout << "Professor salary updated for ID " << id << " with salary " << salary << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Professor with ID " << id << " does not exist." << std::endl;
    }
}

void University::removeProfessor(int id) {
    for (auto p = professors.begin(); p != professors.end(); ++p) {
        if (p->get_id() == id) {
            professors.erase(p);
            std::cout << "Professor with ID " << id << " removed successfully." << std::endl;
            return;
        }
    }
    std::cout << "Professor with ID " << id << " does not exist." << std::endl;
}

bool University::checkProf(int id) {
    for (Professor p : professors) {
        if (p.get_id() == id) {
            return true;
        }
    }
    return false;
}

void University::addData() {
    Department d1("Web Development", 50, 3.2);
    departments.push_back(d1);
    Department d2("Cyber Security", 33, 3.5);
    departments.push_back(d2);
    Department d3("Artificial Intelligence", 20, 3.0);
    departments.push_back(d3);
    Department d4("Information Systems", 125, 2.5);
    departments.push_back(d4);

    Student s1(1,"Ahmed Ali", 19, 'M', 2, 2.74);
    students.push_back(s1);
    Student s2(2,"Mirna Hussein", 22, 'F', 4, 3.68);
    students.push_back(s2);
    Student s3(3,"Hamada Hossam", 28, 'M', 3, 2.37);
    students.push_back(s3);
    Student s4(4,"Taghreed Mohsen", 20, 'F', 3, 3);
    students.push_back(s4);
    Student s5(5,"Yasmin Belal", 18, 'F', 1, 3.71);
    students.push_back(s5);
    Student s6(6,"Amr Diab", 50, 'M', 4, 2.01);
    students.push_back(s6);
    Student s7(7,"Tamer Hosny", 30, 'M', 3, 2.02);
    students.push_back(s7);
    Student s8(8,"Ahmed Alaa", 21, 'M', 2, 2.49);
    students.push_back(s8);

    Professor p1(1,"Mohamed Ali", 56, 'M', &d1, 12000, "Masters");
    professors.push_back(p1);
    Professor p2(2,"Ehsan Ahmed", 43, 'M', &d2, 8500, "Masters");
    professors.push_back(p2);
    Professor p3(3,"Ahmed Mohsen", 68, 'M', &d3, 19380, "Masters");
    professors.push_back(p3);
    Professor p4(4,"Abdelhady", 61, 'M', &d4, 22728, "Masters");
    professors.push_back(p4);
    Professor p5(5,"Taghreed Mohsen", 49, 'F', &d2, 11068, "Masters");
    professors.push_back(p5);


    vector<Student*> st1;
    st1.push_back(&s1);
    st1.push_back(&s2);
    st1.push_back(&s3);
    st1.push_back(&s4);
    vector<Student*> st2;
    st2.push_back(&s5);
    st2.push_back(&s6);
    st2.push_back(&s7);
    st2.push_back(&s8);
    Course c1("HTML", "HTML123", 12, vector<Course*>(), &p1, st1);
    courses.push_back(c1);
    vector<Course*> crs1;
    crs1.push_back(&c1);
    Course c2("CSS", "CSS123", 9, crs1,&p3, st2);
    courses.push_back(c2);
    Course c3("Networks", "Net521", 18, crs1, &p5, st2);
    courses.push_back(c3);
}

void University::printAll() {
    for(int i=0; i<departments.size(); i++)
    {
        cout<<"Department: "<<departments[i].getName()<<endl;
    }
    for(int i=0; i<professors.size(); i++)
    {
        cout<<"Professor Name: "<<professors[i].get_name()<<endl;
    }
    for(int i=0; i<students.size(); i++)
    {
        cout<<"Student Name: "<<students[i].get_name()<<endl;
    }
    for(int i=0; i<courses.size(); i++)
    {
        cout<<"Course Name: "<<courses[i].get_name()<<endl;
    }
}