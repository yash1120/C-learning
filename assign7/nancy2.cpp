#include<iostream>
#include<cstring>
using namespace std;
class person
{
 char name[15];
 int age;
 public:
  person()
  {
   strcpy(name,"ABC");
   age=0;
   cout<<"\n Default constructor being called.";
   cout<<"\n name="<<name<<"\t"<<"age="<<age;
 }
  person(char a[],int b)
  {
   strcpy(name,"a");
   age=b;
   cout<<"\n Parameterized constructor being called.";
 }
 /*person(person &p)
 {
  strcpy(name,p.name);
  age=p.age;
  cout<<"\n Copy constructor being called.";
 }*/
  ~person()
  {
   cout<<"\n Destructing object...Destructor at work!!";
 }
 void getdata();
 void showdata();
};
void person::getdata()
{
 cout<<"\n Enter the name: ";
 cin>>name;
 cout<<"\n Enter the age: ";
 cin>>age;
}
void person::showdata()
{
 cout<<"\n Name: ";
 cout<<name;
 cout<<"\n Age: ";
 cout<<age;
}
int main()
{
 person p1; //default constructor being called
 p1.getdata(); //member function being called
 p1.showdata(); //member function being called
 char m[15]="nancy";
 person p2(m,19); //parameterized constructor being called
 p2.showdata();
 person p3=p2; //copy constructor being called
 p3.showdata();
 person p4(p1); //copy constructor being called
 p4.showdata();
 return 0;
}