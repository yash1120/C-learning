//Input a number and check if it is a prime number 

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb;
    bool flag = true;
    cout<<"Enter the number : ";
    cin>>numb;
    if(numb>0){
        int x =2;
    while(x<numb){
        if(numb%x==0){
            cout<<"Number is not Pime number ";
            flag = false;
            break;
        }
        x++;
    }
    if(flag==true){
        cout<<"the Number is Prime ";
    }
    }
    else{
        cout<<"INVALID output";
    }
    return 0;
}
