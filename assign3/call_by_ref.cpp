#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
void largest(int a,int b,int c,int &max),grades(int marks,char &g);
void factorial(int a, int &f),LcmHcf(int x, int y,int &hcf,int &lcm),prime(int n,char &f);

int main(){
    int ch;
    do{
        cout<<"1. Find largest number among three numbers.\n";
        cout<<"2. Grade the marks\n";
        cout<<"3. Factorial of a given number\n";
        cout<<"4. Lcm and Hcf of two numbers\n";
        cout<<"5. Check whether a given number is prime or composite\n";
        cout<<"\nEnter 0 to exit the menu\n";
        cout<<"\nEnter the choice based on menu :";
        cin>>ch;
        system("cls");

        switch (ch)
        {
        case 1:
            {int a;
            int b;
            int c;
            int max=0;
            cout<<"Enter the First Number: ";
            cin>>a;
            cout<<"Enter the Second Number: ";
            cin>>b;
            cout<<"Enter the Third Number: ";
            cin>>c;
            largest(a,b,c,max);
            cout<<"Largest Number is: "<<max<<"\n";}
            system("cls");
            break;
        case 2:
            {int marks;
            char grade;
            cout<<"Enter the Marks: ";
            cin>>marks;
            grades(marks,grade);
            cout<<"GRADE is: "<<grade<<"\n";}
            system("cls");
            break;
        case 3:
            {int a;
            int fac=1;
            cout<<"Enter the Number: ";
            cin>>a;
            factorial(a,fac);
            cout<<"Factorial is: "<<fac<<"\n";}
            system("cls");
            break;
        case 4:
            {int x,y,hcf,lcm;
            cout<<"Enter the first number: ";
            cin>>x;
            cout<<"Enter the second number: ";
            cin>>y;
            LcmHcf(x,y,hcf,lcm);
            cout<<"LCM of the two numbers are: "<<lcm<<"\n";
            cout<<"HCF of two numbers is: "<<hcf<<"\n";}
            system("cls");
            break;
        case 5:
            {int n;
            char f='t';
            cout<<"Enter the number to check: ";
            cin>>n;
            prime(n,f);
            if (f=='t'){cout<<"It is a prime number.\n";}
            else if(f=='o'){cout<<"Neither Prime nor Composite.\n";}
            else if (f=='f'){cout<<"It is a composite number.\n";}}
            system("pause");
            system("cls");
            break;
        case 0:
            cout<<"Exit!!\n\n";
            break;
        default:
            cout<<"Invalid Choice\n\n";
            system("cls");
        }
    }
    while (ch!=0); 
}

void largest(int a,int b,int c,int &max){
     if (a>b && a>c){
         max=a;
     }
     else if (b>c){
         max=b;
     }
     else{
         max=c;
     }
}

void grades(int marks,char &g){
    if (marks>90){
        g = 'A';
    }
    else if (marks>80){
        g = 'B';
    }
    else if (marks>70){
        g='C';
    }
    else if (marks>60){
        g='D';
    }
    else if (marks>50){
        g='E';
    }
    else{
        g='F';
    }
}

void factorial(int a, int &f){
    for (a;a>0;a--)
    {
        f=f*a;
    }
}

void LcmHcf(int x, int y,int &hcf,int &lcm){
    int small,large;
    small=min(x,y);
    for (int i=small;i>0;i--){
        if (x%i==0 && y%i==0){
            hcf=i;
            break;
        }
    }
    large=(y>x)?y:x;
    int mul=x*y;
    for (large;large<=mul;large++){
            if (large%x==0 && large%y==0){
                lcm=large;
                break;
            }
        }
}

void prime(int n,char &f)
    {
        if (n<2){f='o';}
        else{
        for (int i=2;i<=sqrt(n) && f=='t';i++){
            if (n%i==0){
                f='f';
            }
        }
        }
    }