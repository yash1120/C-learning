//Input the number of terms to be printed and display a Fibonacci series 
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb;
    cout<<"enter the number : ";
    cin>>numb;
    int a = 0;
    int b =1;
    long long int c =2;
    cout<<a<<" "<<b<<" ";
    for (int i = 2; i < numb; i++)
    {
        c =a+b;
        a =b;
        b=c;
        cout<<c<<" ";

    }
    
    return 0;
}
