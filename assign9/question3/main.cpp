#include <iostream>
using namespace std;
#include "person.h"
#include "student.h"
#include "teacher.h"
#include "ta.h"


int main(int argc, char const *argv[])
{
    ta t1;
    t1.get_data();
    t1.show_data();
    return 0;
}
