#include <iostream>
using namespace std;
void operation_menu();
void minmax(int [],int);
void sumavg(int [],int);
void reverse(int a[],int);
void even(int [],int);
void odd(int [],int);
void primeornot(int [],int);
int lsearch(int [],int,int);
int main()
{
 int choice,index;
 int arr[100],s;
 cout<<"\n How many elements you want to enter in an array: ";
 cin>>s;
 for(int i=0;i<s;i++)
   {
   	cout<<"\n Enter the element "<<i+1<<" : ";
   	cin>>arr[i];
   }
 operation_menu();
 cin>>choice;
 switch(choice)
 { 
   case 1: sumavg(arr,s);
           break;
   case 2: minmax(arr,s);
           break;
   case 3: reverse(arr,s);
           break;
   case 4: even(arr,s);
           break;
   case 5: odd(arr,s);
           break;
   case 6: primeornot(arr,s);
           break;
   case 7: int n,index;
           cout<<"\n Enter the element you want to search: ";
           cin>>n;
           index=lsearch(arr,s,n);
           if(index==-1)
            cout<<"\nSorry!!!Given element could not be found. ";
           else
            cout<<"\nEntered element found in the array at index:"<<index<<", position: "<<index+1<<endl;
   		   break;
   case 8: exit(0);
   default: cout << "INVALID OUTPUT!!";
            break;			  		   		   		   	           
 }
 return 0;

}

// menu
void operation_menu()
{   cout << "\t \t \t Select the option from the menu:";
    cout << "\n1. Calculate and print the sum and average of the elements of array.  ";
    cout << "\n2. Print the maximum and minimum element of array along with its position. ";
    cout << "\n3. Make a new array and store the Reverse of the original array and print the reversed array.  ";
    cout << "\n4. Print the even-valued elements.  ";
    cout << "\n5. Print the odd-valued elements.  ";
    cout << "\n6. Determine if each element of the array is prime.  ";
    cout << "\n7. Take an element from the user and search the element in the array. If found print position else print �Not found�.";
    cout << "\n8. EXIT";
	cout << "\n Enter your choice: ";
} 

// maximum and minimum function
void minmax(int a[],int N)
{int p=0,q=0;
 int max=a[0];
 for(int j=1;j<N;j++)
  { if (a[j] > max)
     {
	  max=a[j];
      p=j+1;
     }
  }
  int min=a[0];
  for(int i=1;i<N;i++)
  { if (a[i] < min)
     {
	    min=a[i];
      q=i+1;
     }
  }
  cout<<"\n The maximum and minimum elements of array are "<<max<<" and "<<min<<" at "<<p<<"th"<<" and "<<q<<"th"<<" positions respectively. ";
}

// sum and average function
void sumavg(int a[],int N)
{
 int sum=0,avg=0;
 for(int j=0;j<N;j++)
  { 
    sum+=a[j];
  }	
 avg=sum/N;
 cout<<"\n The sum and average of elements of the entered array are "<<sum<<" and "<<avg<<"."; 
}

// reversed array function
void reverse(int a[],int N)
{ 
  int rev[N];
  cout<<"\n Entered array in reverse order: ";
    for(int j=0,i=N-1;i>=0;i--,j++)
    {
    	rev[j]=a[i];
        cout<<rev[j]<<"\t";
    }
}

// even-valued elements function
void even(int a[],int N)
{
  cout<<"\n Even-valued elements of the entered array : ";
  for(int j=0;j<N;j++)
  {
  	if(a[j]%2==0)
  	  {
	    cout<<a[j]<<"  ";
	  }
  }
}

// odd-valued elements function
void odd(int a[],int N)
{
  cout<<"\n Odd-valued elements of the entered array : ";
  for(int j=0;j<N;j++)
  {
  	if(a[j]%2!=0)
  	  {
	    cout<<a[j]<<"  ";
	  }
  }
}

// primeornot function
void primeornot(int a[],int N)
{ int i,flag;
  for(int j=0;j<N;j++)
  { i=2;
    flag=0;
    if(a[j]<1)
      cout<<a[j]<<" is neither prime nor composite."<<endl;
    else
    while (i<a[j]/2)
   { 
	  if(a[j]%i==0)
	   {
		flag=1;
	   }
	  i=i+1;
    }
   if (flag == 0)
	  cout<<a[j]<<" is a Prime Number"<<endl;
   else if (flag>0)
	  cout<<a[j]<<" is a Composite Number"<<endl;
  }
}

// linearsearch function
int lsearch(int a[],int N,int item)
{ 
  for(int j=0;j<N;j++)
  {
  	if(a[j]==item)
  	 return j;
  }
  return -1;   
}

