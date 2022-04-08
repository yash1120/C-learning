#include <iostream>
using namespace std;

class Person
{
    string name,gender;
    int age;

public:
    Person()
    {
        name = ' ';
        age = 0;
        gender = ' ';
    };
    void get_data()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the age:  ";
        cin >> age;
        cout << "enter the gender : ";
        cin >> gender;
    }
    void show_data()
    {
        cout << "Name : " << name << endl;
        cout << "age : " << age << endl;
        cout<< "gender : "<<gender<<endl;
    }
};
