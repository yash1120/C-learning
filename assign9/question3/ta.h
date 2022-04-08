#include <iostream>
using namespace std;

class ta : public Student, public Teacher
{
    string department;

public:
    ta()
    {
        department = " ";
    };
    void get_data()
    {
        Student::get_data();
        Teacher::get_data();
        cout << "Enter the department : ";
        cin >> department;
    }
    void show_data()
    {
        Student::show_data();
        Teacher::show_data();
        cout << "department : " << department;
    }
};
