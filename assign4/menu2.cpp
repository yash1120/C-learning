#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
void submenu(int &choose),fiboit(int &fibo,int n),sumit(int n,int &sum),powit(int base, int exp,int &res),gcdit(int x, int y,int &gcd),facit(int a, int &fac),reverseit(int n, int &rev);
int fibore(int n),sumre(int n),powre(int base,int exp),gcdre(int x,int y),facre(int a),reversere(int n);
int choose;
int main(){
    int ch;
    do{
        system("cls");
        cout<<"                       Welcome!                       \n";
        cout<<"1. Fibonacci Number\n";
        cout<<"2. Sum of first N natural numbers\n";
        cout<<"3. Power to the base given exponent\n";
        cout<<"4. GCD of two numbers\n";
        cout<<"5. Factorial of a number\n";
        cout<<"6. Reverse of a number\n";
        cout<<"\nEnter 0 to exit the menu\n";
        cout<<"\nEnter the choice based on menu :";
        cin>>ch;
        system("cls");

        switch (ch)
        {
        case 1:
            {
            submenu(choose);
            int fibo;
            int n;
            cout<<"Enter the Number: ";
            cin>>n;
            switch(choose)
            {
                case 1:
                {fiboit(fibo, n);
                 cout<<"Fibonacci Number is: "<<fibo<<"\n";}
                 break;
                case 2:
                {
                    fibo=fibore(n);
                    cout<<"Fibonacci Number is: "<<fibo<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 2:
            {
            submenu(choose);
            int n;
            int sum;
            cout<<"Enter the Number: ";
            cin>>n;
            switch(choose)
            {
                case 1:
                {sumit(n,sum);
                cout<<"Sum is: "<<sum<<"\n";
                break;}
                case 2:
                {
                    sum=sumre(n);
                    cout<<"Sum is: "<<sum<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 3:
            {
            submenu(choose);
            int base;
            int exp;
            int res=1;
            cout<<"Enter the Number: ";
            cin>>base;
            cout<<"Enter the exponent: ";
            cin>>exp;
            switch(choose)
            {
                case 1:
                {powit(base,exp,res);
                cout<<"Number is: "<<res<<"\n";
                break;}
                case 2:
                {
                    res=powre(base,exp);
                    cout<<"Number is: "<<res<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 4:
            {
            submenu(choose);
            int x,y,gcd;
            cout<<"Enter the first number: ";
            cin>>x;
            cout<<"Enter the second number: ";
            cin>>y;
            switch(choose)
            {
                case 1:
                {gcdit(x,y,gcd);
                cout<<"GCD of two numbers is: "<<gcd<<"\n";
                break;}
                case 2:
                {
                    gcd=gcdre(x,y);
                    cout<<"Number is: "<<gcd<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 5:
            {
            submenu(choose);
            int a;
            int fac=1;
            cout<<"Enter the number: ";
            cin>>a;
            switch(choose)
            {
                case 1:
                {facit(a,fac);
                cout<<"Factorial of the number is: "<<fac<<"\n";
                break;}
                case 2:
                {
                    fac=facre(a);
                    cout<<"Number is: "<<fac<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 6:
            {
            submenu(choose);
            int n;
            int rev;
            cout<<"Enter the number: ";
            cin>>n;
            switch(choose)
            {
                case 1:
                {reverseit(n,rev);
                cout<<"Reverse of the number is: "<<rev<<"\n";
                break;}
                case 2:
                {
                    rev=reversere(n);
                    cout<<"Number is: "<<rev<<"\n";}
                break;
            }
            }
            system("pause");
            system("cls");
            break;
        case 0:
            cout<<"Exit Succesfull!!!,Thank you for using services. \n\n";
            break;
        default:
            cout<<"***************Invalid Choice***************\n\n";
            system("pause");
            system("cls");
        }
    }
    while (ch!=0); 
}

void submenu(int &choose){
    cout<<"Choose option\n";
    cout<<"1. To use iteration.\n";
    cout<<"2. To use recursion.\n";
    cout<<"Enter the choice: ";
    cin>>choose;
    system("cls");
}

void fiboit(int &fibo,int n){
     int a = 0;
     int b = 1;
     for (int i=0; i<n-1;i++){
         fibo = a+b;
         a=b;
         b=fibo;
     }
}

int fibore(int n){
    if (n<=1){
        return n;
    }
    return fibore(n-1) + fibore(n-2);
}

void sumit(int n,int &sum){
    while(n>0){
        sum=sum+n;
        n--;
    }
}

int sumre(int n){
    if(n<=1){
        return 1;
    }
    return n+sumre(n-1);
}

void powit(int base, int exp,int &res){
    while(exp>0){
        res=res*base;
        exp--;
    }
}

int powre(int base,int exp){
    if (exp==0){
        return 1;
    }
    return base*powre(base, exp-1);
}

void gcdit(int x, int y,int &gcd){
    int small,large;
    small=min(x,y);
    for (int i=small;i>0;i--){
        if (x%i==0 && y%i==0){
            gcd=i;
            break;
        }
    }
}

int gcdre(int x,int y){
    if (y != 0)
       return gcdre(y, x % y);
    else 
       return x;
}

void facit(int a, int &fac){
    for (a;a>0;a--)
    {
        fac=fac*a;
    }
}

int facre(int a){
     if (a<=1){
        return a;
    }
    return a * facre(a-1);
}

void reverseit(int n, int &rev){
    int m=10;
    int dig=0;
    while(n>0){
        dig=n%10;
        n=n/10;
        rev*=m;
        rev+=dig;
    }
}

int reversere(int n){
    int digit = (int) log10(n);
 
    if(n == 0)
        return 0;
 
    return ((n%10 * pow(10, digit)) + reversere(n/10));
}