//Input marks on 100 and output the grades (90,80,70,60,50) (A,B,C,D,E,F) 

#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int marks;
    cout<<"ENter the your marks : ";
    cin>>marks;
    cout<<int(marks);
    if (marks<50){
        cout<<"F Grade";

    }
    else if (marks>=50 && marks<60)
    {
        cout<<"E Grade";
    }
    else if (marks>=60 && marks<70)
    {
        cout<<"D Grade";
    }
    else if (marks>=70 && marks<80)
    {
        cout<<"C Grade";
    }
    else if (marks>=80 && marks<90)
    {
        cout<<"B Grade";
    }
    else if (marks>=90 && marks<=100)
    {
        cout<<"A Grade";
    }
    else{
        cout<<"INVALID INPUT";
    }
    
    return 0;
}
