//tables of the input number
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb ;
    cout<<"enter the number : ";
    cin>>numb;
    for (int i = 1; i < 11; i++)
    {
        cout<<numb<<" X "<<i<<" = "<<numb*i<<endl;
    }
    
    return 0;
}
