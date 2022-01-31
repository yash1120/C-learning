#include <iostream>
using namespace std;
void operation_menu(), method_menu();

int main(int argc, char const *argv[])
{
    int opertion_choice, method_choice;
    system("cls");
    operation_menu();

    cin >> opertion_choice;
    switch (opertion_choice)
    {
    case 1:
        method_menu();
        cin >> method_choice;
    case 2:
        method_menu();
        cin >> method_choice;
    case 3:
        method_menu();
        cin >> method_choice;
    case 4:
        method_menu();
        cin >> method_choice;
    case 5:
        method_menu();
        cin >> method_choice;
    case 6:
        method_menu();
        cin >> method_choice;
    case 7:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
    return 0;
}

void operation_menu()
{
    cout << "\t \t \t Select the option from the menu:";
    cout << "\n1. GCD of two numbers ";
    cout << "\n2. Fibonacci series";
    cout << "\n3. Sum of first n natural numbers ";
    cout << "\n4. Calculate the power of a number given the base and the exponent ";
    cout << "\n5. Calculate the reverse of a number ";
    cout << "\n6. Factorial of a number ";
    cout << "\n7. EXIT";
    cout << "\n Enter your choice: ";
};
void method_menu()

{
    cout << "\t \t \t Select the method from the menu:";
    cout << "\n1. Iteration ";
    cout << "\n2. Recursion ";
    cout << "\n3. EXIT ";
    cout << "\n Enter your choice: ";
};
void gcd(int method_choice)
{
    int first_num, second_num;
    cout << "Enter the first number : ";
    cin >> first_num;
    cout << "Enter the second Number : ";
    cin >> second_num;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
}
void sum_firstN(int method_choice)
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        break;
    }
}
void reverse(int method_choice)
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        break;
    }
}
void fibonacci(int method_choice)
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        break;
    }
}
void factorial(int method_choice)
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        break;
    }
}
void power(int method_choice)
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        break;
    case 2:
        break;
    case 3:
        exit(0);
    default:
        break;
    }
}

int gcd_iteration(int first_num, int second_num)
{
    int hcf;
    if (second_num > first_num)
    {
        int temp = second_num;
        second_num = first_num;
        first_num = temp;
    }

    for (int i = 1; i <= y; ++i)
    {
        if (first_num % i == 0 && second_num % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int gcd_recusrion(int first_numb, int second_num)
{
    a, b = min()
}