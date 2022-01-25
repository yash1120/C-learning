//Find the factors of a number 
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb ;
    cout<<"enter the number : ";
    cin >> numb;
    cout<<"factors of "<<numb<<" are ";
    for (int i = 1; i <= numb; i++)
    {
        if (numb%i==0)
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}
