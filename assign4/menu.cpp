#include <iostream>
using namespace std;
void operation_menu(), method_menu();
void gcd(int), sum_firstN(int), reverse(int), fibonacci(int), factorial(int), power(int);
int gcd_iteration(int, int);
int gcd_recusrion(int, int);
int input();
void sum_firstN_iteration(int), sum_fristN_recusrion(int), reverse_iteration(int), reverse_recursion(int);
void fibonacci_iteration(int), factorial_iteration(int), power_iteration(int, int);
int fibonacci_recursion(int), factorail_recursion(int), power_recursion(int, int);

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
        gcd(method_choice);
        break;
    case 2:
        method_menu();
        cin >> method_choice;
        fibonacci(method_choice);
        break;
    case 3:
        method_menu();
        cin >> method_choice;
        sum_firstN(method_choice);
        break;
    case 4:
        method_menu();
        cin >> method_choice;
        power(method_choice);
        break;
    case 5:
        method_menu();
        cin >> method_choice;
        reverse(method_choice);
        break;
    case 6:
        method_menu();
        cin >> method_choice;
        factorial(method_choice);
        break;
    case 7:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
    return 0;
}

//menu
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
}

//iteration and recursion function wrraper
void gcd(int method_choice)
{
    switch (method_choice)
    {
    case 1:
        int first_num, second_num, gcd_value;
        cout << "Enter the first number : ";
        cin >> first_num;
        cout << "Enter the second Number : ";
        cin >> second_num;
        gcd_value = gcd_iteration(first_num, second_num);
        cout << "GCD OF " << first_num << " and " << second_num << " by iteretion is " << gcd_value;
        break;
    case 2:
        cout << "Enter the first number : ";
        cin >> first_num;
        cout << "Enter the second Number : ";
        cin >> second_num;
        gcd_value = gcd_recusrion(first_num, second_num);
        cout << "GCD OF " << first_num << " and " << second_num << " by recusrion is " << gcd_value;
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
    switch (method_choice)
    {

    case 1:
        numb = input();
        cout << "the first " << numb << " number by iteration is ";
        sum_firstN_iteration(numb);
        break;
    case 2:
        numb = input();
        cout << "the first " << numb << " number by recusrion is ";
        sum_fristN_recusrion(numb);
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
}
void reverse(int method_choice)
{
    int numb;
    switch (method_choice)
    {
    case 1:

        numb = input();
        cout << " the reverse of " << numb << " by iteration is ";
        reverse_iteration(numb);
        break;
    case 2:
        numb = input();
        cout << " the reverse of " << numb << " by iteration is ";
        reverse_recursion(numb);
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
}
void fibonacci(int method_choice)
{
    int numb;
    int iter = 0;
    switch (method_choice)
    {

    case 1:
        numb = input();
        cout << "the first " << numb << "fibonacci sereis by iteration is ";
        fibonacci_iteration(numb);
        break;
    case 2:
        numb = input();
        cout << "the first " << numb << " fibonacci sereis by recursion is ";
        while (iter < numb)
        {
            cout << fibonacci_recursion(iter) << " ";
            iter++;
        }
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
}
void factorial(int method_choice)
{
    int numb;
    switch (method_choice)
    {
    case 1:
        numb = input();
        factorial_iteration(numb);
        break;
    case 2:
        numb = input();
        cout << "factorial of " << numb << " by recursion is " << factorail_recursion(numb);
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";
        break;
    }
}
void power(int method_choice)
{
    int base, expo;
    switch (method_choice)
    {
    case 1:
        cout << "enter the base : ";
        cin >> base;
        cout << "enter the exponent : ";
        cin >> expo;
        power_iteration(base, expo);
        break;
    case 2:
        cout << "enter the base : ";
        cin >> base;
        cout << "enter the exponent : ";
        cin >> expo;
        cout << base << " rasied to the power " << expo << " by recutsion is " << power_recursion(base, expo);
        break;
    case 3:
        exit(0);
    default:
        cout << "INVALID OUTPUT!!";

        break;
    }
}

// input function 
int input()
{
    int numb;
    cout << "Enter the number : ";
    cin >> numb;
    return numb;
}


// gcd iteration and recursion methods
int gcd_iteration(int first_num, int second_num)
{
    int hcf;
    if (second_num > first_num)
    {
        int temp = second_num;
        second_num = first_num;
        first_num = temp;
    }

    for (int i = 1; i <= second_num; ++i)
    {
        if (first_num % i == 0 && second_num % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}
int gcd_recusrion(int first_num, int second_num)
{
    if (first_num == 0)
        return second_num;
    return gcd_recusrion(second_num % first_num, first_num);
}

// sum of first n natural numbers iteration and recursion methods
void sum_firstN_iteration(int numb)
{
    for (int i = 1; i <= numb; i++)
    {
        cout << i << " ";
    }
}
void sum_fristN_recusrion(int numb)
{
    if (numb == 0)
    {
        return;
    }
    sum_fristN_recusrion(numb - 1);
    cout << numb << " ";
}

//reverse a number iteration and recusrion methods
void reverse_iteration(int numb)
{
    int sum = 0;
    int reversedNumber = 0;
    int reminder = 0;
    int temp;
    temp = numb;
    while (numb != 0)
    {
        reminder = numb % 10;
        sum = sum + reminder;
        reversedNumber = reversedNumber * 10 + reminder;
        numb = numb / 10;
    }
    cout << reversedNumber;
}
void reverse_recursion(int numb)
{
    if (numb < 10)
    {
        cout << numb;
        return;
    }
    else
    {
        cout << numb % 10;
        reverse_recursion(numb / 10);
    }
}

// fibonacci series iteration and recursion method
void fibonacci_iteration(int numb)
{
    int a = 0;
    int b = 1;
    long long int c = 2;
    cout << a << " " << b << " ";
    for (int i = 2; i < numb; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
    }
}
int fibonacci_recursion(int numb)
{
    if ((numb == 1) || (numb == 0))
    {
        return (numb);
    }
    else
    {
        return fibonacci_recursion(numb - 1) + fibonacci_recursion(numb - 2);
    }
}

//factorial iteration and recursion method
void factorial_iteration(int numb)
{
    long long result=1;
    int x = 1;
    while (x <= numb)
    {
        result = result * x;
        x++;
    }
    cout << "factorial of " << numb << " by iteration is " << result;
}
int factorail_recursion(int numb)
{
    if (numb > 1)
        return numb * factorail_recursion(numb - 1);
    else
        return 1;
}

//Calculate the power of a number given the base and the exponent iteration and recursion method
void power_iteration(int base, int expo)
{
    int result = base;
    for (int i = 0; i < expo; i++)
    {
        result = result * result;
    }
    cout << base << " rasied to the power " << expo << " by iteration is " << result;
}
int power_recursion(int base, int expo)
{
    if (expo != 0)
        return (base * power_recursion(base, expo - 1));
    else
        return 1;
}