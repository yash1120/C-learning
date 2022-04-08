#include <iostream>
using namespace std;

class Student:virtual public Person
{
int roll_no;
public:
    Student(){
        roll_no = 0;
    };
    void get_data(){
        Person::get_data();
        cout<< "Enter the roll no : ";
        cin>> roll_no;
    }
    void show_data(){
        Person::show_data();
        cout<< "Roll no : "<< roll_no;
    }
    
};

