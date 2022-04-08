#include <iostream>
using namespace std;
class Principal : public Teacher
{

int year_of_joining;
public:
    Principal(){
        year_of_joining=0;
    };
    void get_data(){
        Teacher::get_data();
        cout<<"Enter the year of joining : ";
        cin>>year_of_joining;
    }
    void show_data(){
        Teacher::show_data();
        cout<<"year of joining : "<< year_of_joining;
    }
};

