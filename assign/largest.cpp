//Input three numbers and print the largest of the three 

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number : ";
    cin>>b;
    cout<<"enter the third number : ";
    cin>>c;
    if (a>=b){
        if (a>=c)
        {
            cout<<"largest number is : "<<a;
            /* code */
        }
        else{
            cout<<"largest number is : "<<c;
        }
        
    }
    else{
        if(b>=c){
            cout<<"largest number is : "<<b;
        }
        else{
            cout<<"largest number is : "<<c;
        }
    }
     
    

    return 0;
}
