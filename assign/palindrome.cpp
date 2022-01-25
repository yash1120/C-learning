//find the sum of the digits, reverse the number and print of it palindrome
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb;
    int sum =0 ;
    int reversedNumber =0;
    int reminder =0;
    int temp;
    cout << "enter the number : ";
    cin >> numb;
    temp = numb;
    while (numb != 0)
    {
        reminder =numb % 10;
        sum = sum + reminder;
        reversedNumber = reversedNumber*10 + reminder;
        numb = numb / 10;
    }
    cout<<"The sum of digits is "<<sum<<endl;
    cout<<"The reverse of digits is "<< reversedNumber<<endl;
    if (temp==reversedNumber)
    {
        cout<<"the digit is palindrome"<<endl;
    }
    else{
        cout<<"the digit is not palindrome";
    }
    

    return 0;
}
