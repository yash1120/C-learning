#include <iostream>
using namespace std;

class Teacher:virtual public Person
{
int employee_no;
public:
    Teacher(){
        employee_no = 0;
    };
    void get_data(){
        Person::get_data();
        cout<<"Enter the employee_no : ";
        cin>>employee_no;
    }
    void show_data(){
        Person::show_data();
        cout<<"Employee no : "<< employee_no<<endl;
    }
};

