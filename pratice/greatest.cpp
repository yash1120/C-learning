#include <iostream>
using namespace std;

int input_number()
{
    int numb;
    cin >> numb;
    return numb;
}
int main(int argc, char const *argv[])
{
    int a1, a2, a3,max;

    cout << "Enter the first number: ";
    a1 = input_number();
    cout << "Enter the second number: ";
    a2 = input_number();
    cout << "enter the third number: ";
    a3 = input_number();
    max = a1>a2?(a1>a3?a1:a3):(a2>a3?a2:a3);
    cout<<"max : "<<max;
    return 0;
}
