#include <iostream>
#include <vector>
#include "Models/Course.h"
#include "Models/Professor.h"
#include "Models/Student.h"
#include "Models/University.h"

using namespace std;


University* University::instance = NULL;

int main()
{
    Professor prof;
    vector <Student*> students;
    vector<Course*> prerequestes;
    University *university = University::get_instance();
    university->add_student(22, "ahmed", 22, 'm' , 3, 3.3);
    university->update(2,2.3);
    university->remove_student(22);
    university->update(22,2.3);
    university->addDepartment("test", 3.5, 120);
    university->updateDepartment("test", 200);
    university->removeDepartment("test");
    university->removeDepartment("test");

    //Professor function
    Department* department = new Department("Department Name", 3.0, 50);
    university->addProfessor(1125,"mohamed",40,'m',department,5500,"Phd");
    university->updateProfessor(1125, 6000);
    university->updateProfessor(230, 6000);
    university->removeProfessor(1125);
    university->removeProfessor(1125);
    cout<<"///////////////////////////"<<endl;
    cout<<"Set data and print:"<<endl;
    university->addData();
    university->printAll();

    return 0;
}
