#include <iostream>
using namespace std;
void operation_menu(), method_menu();
void gcd(int),sum_firstN(int),reverse(int),fibonacci(int),factorial(int),power(int);
int gcd_iteration(int , int );
int gcd_recusrion(int , int );
void sum_firstN_iteration(int), sum_fristN_recusrion(int), reverse_iteration(int),reverse_recursion(int);

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
    int first_num, second_num, gcd_value;
    cout << "Enter the first number : ";
    cin >> first_num;
    cout << "Enter the second Number : ";
    cin >> second_num;
    switch (method_choice)
    {
    case 1:
        gcd_value = gcd_iteration(first_num, second_num);
        cout << "GCD OF " << first_num << " and " << second_num << " by iteretion is " << gcd_value;
        break;
    case 2:
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
    cout << "Enter the number : ";
    cin >> numb;
    switch (method_choice)
    {
    case 1:
        cout << "the first " << numb << " number by iteration is ";
        sum_firstN_iteration(numb);
        break;
    case 2:
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
        cout << i;
    }
}
void sum_fristN_recusrion(int numb)
{
    sum_fristN_recusrion(numb - 1);
    if(numb=0){
        return;
    }
    cout << numb;
}

//reverse a number iteration and recusrion methods 
void reverse_iteration(int numb){
    int sum =0 ;
    int reversedNumber =0;
    int reminder =0;
    int temp;
    temp = numb;
    while (numb != 0)
    {
        reminder =numb % 10;
        sum = sum + reminder;
        reversedNumber = reversedNumber*10 + reminder;
        numb = numb / 10;
    }
    cout<<" the reverse of "<<numb<<" by iteration is "<<reversedNumber;
}
void reverse_recursion(int numb){
    if (numb<10)
    {
        cout<<numb;
        return;
    }
    else{
        cout<<numb%10;
        reverse_recursion(numb/10);
    }
    
}