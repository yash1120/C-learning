#include <iostream>
#include <cstdlib>
using namespace std;
void factorial(int a=5)
{
 int fact=1;
 for(;a>=1;a--)
    {
	fact*=a;
    }
 cout<<"\n The factorial is: "<<fact;
}
int main()
{
 cout<<"\n Using default parameter:";
 factorial();
 cout<<"\n Using number entered by the user: "<<endl;
 int n;
 cout<<"\n Enter a number to find its factorial: ";
 cin>>n;	
 factorial(n);
 return 0;
}
