//Input a number and print its factorial 
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb;
    long long result =1;
    cout<<"enter the number for factorial :  ";
    cin>>numb;
    int x =1;
    while(x<=numb){
        result = result*x;
        x++;
    }
    cout<<"factorial of "<<numb<<" is "<<result;
    return 0;
}
