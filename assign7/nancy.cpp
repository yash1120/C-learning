#include<iostream>
#include<cmath>
using namespace std;
class complex
{
 int real;
 int imaginary;
 public:
  complex()
  {
   real=0;
   imaginary=0;
  }
 complex(int a,int b)
 {
  real=a;
  imaginary=b;
 }
 complex addComp(complex x, complex y)
    {
        complex temp;
        temp.real = x.real + y.real;
  temp.imaginary = x.imaginary + y.imaginary;
        temp.display();
    }
    complex subComp(complex x, complex y)
    {
        complex temp;
        temp.real = x.real - y.real;
  temp.imaginary = x.imaginary - y.imaginary;
        temp.display();
    }
    void magnitude(complex x)
    {
     float res;
     res=sqrt((x.real*x.real)+(x.imaginary*x.imaginary));
     cout<<"\n The magnitude of ";
     x.display();
     cout<<" is "<<res;
 }
    void getdata()
    {
  cout<<"\n Enter the real and imaginary part respectively: ";
  cin>>real>>imaginary; 
 }
 void display()
 {
  cout<<"\n Complex Number: "<<real<<" "<<" + i "<<imaginary;
 }
 void conjugate()
 {
  cout<<"\n Complex Number: "<<real<<" "<<" - i "<<imaginary;
 }
};
int main()
{
 complex c1;
 c1.display();
 complex c2;
 c2.getdata();
 c2.display();
 complex c3;
 c2.magnitude(c2);
 c3.getdata();
 c3.display();
 complex c4,c5;
 c4.addComp(c2,c3);
 c5.subComp(c2,c3);
 return 0;
}