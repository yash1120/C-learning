#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;
void marks(), largest(), table(), leap_year(), factorail(), fabo(), check_prime(), hcf_lcm(), factors(), palindrome();

int main()
{
    int ch;

    while (ch != 11)
    {
        cout << endl
             << "1. Grade Marks";
        cout << endl
             << "2. Largest Number among 3";
        cout << endl
             << "3. Multiplication Table for a Number";
        cout << endl
             << "4. Leap Year or Not";
        cout << endl
             << "5. Factorial of a Number";
        cout << endl
             << "6. Fibonacci Series upto N numbers";
        cout << endl
             << "7. To check a number is Prime or Composite";
        cout << endl
             << "8. HCF or LCM of a Number";
        cout << endl
             << "9. Factors of a Number";
        cout << endl
             << "10. Sum of a Number, its reverse and whether it is Palindrome or not";
        cout << endl
             << "11. exit";
        cout << endl
             << "enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            marks();
            break;
        case 2:
            largest();
            break;
        case 3:
            table();
            break;
        case 4:
            leap_year();
            break;
        case 5:
            factorail();
            break;
        case 6:
            fabo();
            break;
        case 7:
            check_prime();
            break;
        case 8:
            hcf_lcm();
            break;
        case 9:
            factors();
            break;
        case 10:
            palindrome();
            break;
        case 11:
            break;
        default:
            cout << "Invalid choice!";
            break;
        }
    }
    return 0;
}

void marks()
{
    int marks;
    char grade;
    cout << "Enter the Marks: ";
    cin >> marks;
    if (marks > 90)
    {
        grade = 'A';
    }
    else if (marks > 80)
    {
        grade = 'B';
    }
    else if (marks > 70)
    {
        grade = 'C';
    }
    else if (marks > 60)
    {
        grade = 'D';
    }
    else if (marks > 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }
    cout << "GRADE is: " << grade << "\n";
}
void largest()
{
    int a;
    int b;
    int c;
    int max = 0;
    cout << "Enter the First Number: ";
    cin >> a;
    cout << "Enter the Second Number: ";
    cin >> b;
    cout << "Enter the Third Number: ";
    cin >> c;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > c)
    {
        max = b;
    }
    else
    {
        max = c;
    }
    cout << "Largest Number is: " << max << "\n";
}
void table()
{
    int a;
    int i;
    cout << "Enter the Number: ";
    cin >> a;
    for (i = 1; i <= 10; i++)
    {
        cout << a << "X" << i << " = " << a * i << "\n";
    }
}
void leap_year()
{
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                cout << year << " is a leap year.";
            else
            {
            }
            cout << year << " is not a leap year.";
        }
        else
        {
            cout << year << " is a leap year.";
        }
    }
    else
    {
        cout << year << " is not a leap year.";
    }
}
void factorail()
{
    int numb;
    long long result = 1;
    cout << "enter the number for factorial :  ";
    cin >> numb;
    int x = 1;
    while (x <= numb)
    {
        result = result * x;
        x++;
    }
    cout << "factorial of " << numb << " is " << result;
}
void fabo()
{
    int numb;
    cout << "enter the number : ";
    cin >> numb;
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
    };
}
void check_prime()
{
    int numb;
    bool flag = true;
    cout << "Enter the number : ";
    cin >> numb;
    if (numb > 0)
    {
        int x = 2;
        while (flag)
        {
            if (numb % x == 0)
            {
                cout << "Number is not Pime number ";
                flag = false;
                break;
            }
            x++;
        }
        if (flag == true)
        {
            cout << "the Number is Prime ";
        }
    }
    else
    {
        cout << "INVALID output";
    }
}
void hcf_lcm()
{
    int x;
    int y;
    int hcf;
    int lcm;
    cout << "Enter the  first number : ";
    cin >> x;
    cout << "Enter the second number : ";
    cin >> y;
    if (y > x)
    {
        int temp = y;
        y = x;
        x = temp;
    }

    for (int i = 1; i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (x * y) / hcf;

    cout << "HCF of the " << x << " and " << y << " is " << hcf << endl;
    cout << "LCM of the " << x << " and " << y << " is " << lcm;
}
void factors()
{
    int numb;
    cout << "enter the number : ";
    cin >> numb;
    cout << "factors of " << numb << " are ";
    for (int i = 1; i <= numb; i++)
    {
        if (numb % i == 0)
        {
            cout << i << " ";
        }
    }
}
void palindrome()
{
    int numb;
    int sum = 0;
    int reversedNumber = 0;
    int reminder = 0;
    int temp;
    cout << "enter the number : ";
    cin >> numb;
    temp = numb;
    while (numb != 0)
    {
        reminder = numb % 10;
        sum = sum + reminder;
        reversedNumber = reversedNumber * 10 + reminder;
        numb = numb / 10;
    }
    cout << "The sum of digits is " << sum << endl;
    cout << "The reverse of digits is " << reversedNumber << endl;
    if (temp == reversedNumber)
    {
        cout << "the digit is palindrome" << endl;
    }
    else
    {
        cout << "the digit is not palindrome";
    }
}