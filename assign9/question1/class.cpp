#include <iostream>
#include "person.h"
#include "student.h"
#include "teacher.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Student student1;
    student1.get_data();
    student1.show_data();
    return 0;
}
