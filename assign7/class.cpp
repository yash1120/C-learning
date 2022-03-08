#include <iostream>
using namespace std;
class Student
{
private:
    int age;
    int rollno;
    char name[20];
    int marks[5];
    float sum;
    float average;
    float sum_local;
    float get_sum()
    {

        for (int i = 0; i < 5; i++)
        {
            sum_local += marks[i];
        }
        return sum_local;
    }

public:
    void get_marks()
    {
        cout << "enter the student roll no :";
        cin >> rollno;
        cout << "enter the student age : ";
        cin >> age;
        cout << "enter the student name : ";
        cin >> name;
        for (int i = 0; i < 5; i++)
        {
            cout << "enter the marks of student in " << i + 1 << " subject : ";
            cin >> marks[i];
        }
    }
    void display_details()
    {
        cout << "Student roll no is : " << rollno << endl;
        cout << "Student name is : " << name << endl;
        cout << "student age is : " << age << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "marks of rollno " << rollno << " in subject " << i + 1 << " is : " << marks[i] << endl;
        }
    }
    void sum_marks()
    {
        for (int i = 0; i < 5; i++)
        {
            sum += marks[i];
        }
        cout << "sum of marks is : " << sum << endl;
    }
    void get_average()
    {
        sum = get_sum();
        average = sum / 5;
        cout << "Average of marks is : ";
        cout << average;
    }
};

int main(int argc, char const *argv[])
{
    Student s1;
    s1.get_marks();
    s1.display_details();
    s1.sum_marks();
    s1.get_average();
    return 0;
}
