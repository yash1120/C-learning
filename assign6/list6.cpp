#include<iostream>
using namespace std;
const int STUDENTS=3;
const int SUBJECT=3;
struct score
{
	unsigned int rollno;
	char name[20];
	float marks[SUBJECT];
};
void menu();
void display_data(struct score st[]);
void get_data(struct score st[]);
void sum_avg(struct score st[]);
void high_avg(struct score st[]);
void sub_report(struct score st[]);
int main()
{
	int choice;
	system("cls");
	score st[STUDENTS];
	get_data(st);
	menu();
	cin>>choice;
	switch(choice)
	{
		case 1: display_data(st);
				break;
		case 2: sum_avg(st);
				break;
		case 3: high_avg(st);
				break;
		case 4: sub_report(st);
				break;
		case 5: exit(0);
		default:cout<<"\n WRONG CHOICE!!! ";
				break;
	}
	return 0;
}
void menu()
{
		cout<<"\t\t\t MAIN MENU \n";
		cout<<"\t 1. Display the data. \n";
		cout<<"\t 2. Calculate and print the sum and average marks of each student. \n";
		cout<<"\t 3. Calculate and print which student has highest average marks. \n";
		cout<<"\t 4. Display  Highest and lowest marks in each subject. \n";
		cout<<"\t 5. Exit \n";
		cout<<"\t Enter your choice: ";
}
void get_data(struct score st[])
{
	for(int i=0;i<STUDENTS;i++)
	{
		cout<<"\n Enter the student's roll number: ";
		cin>>st[i].rollno;
		cout<<"\n Enter the student's name: ";
		cin>>st[i].name;
		cout<<"\n Enter the marks: \n";
		for(int j=0;j<SUBJECT;j++)
	    {
	    	cout<<"For SUBJECT "<<j+1<<":";
	    	cin>>st[i].marks[j];
	    	cout<<endl;
		}
	}
}
void display_data(struct score st[])
{
	for(int i=0;i<STUDENTS;i++)
	{
		cout<<"\n The student's roll number: ";
		cout<<st[i].rollno;
		cout<<"\n The student's name: ";
		cout<<st[i].name;
		cout<<"\n Marks obtained by the student: \n";
		for(int j=0;j<SUBJECT;j++)
	    {
	    	cout<<" SUBJECT "<<j+1<<":";
	    	cout<<st[i].marks[j];
	    	cout<<endl;
		}
	}
}
void sum_avg(struct score st[])
{
	float sum=0.0;
	double avg;
	unsigned int rn;
	cout<<"\n Enter the roll no of student: ";
	cin>>rn;
	for(int i=0;i<STUDENTS;i++)
	{
		if(st[i].rollno==rn)
		{
		   for(int j=0;j<SUBJECT;j++)
		   {
		   	sum+=st[i].marks[j];
	       }
	    }
    }
	cout<<"\n The sum of the marks obtained by the student is : "<<sum;
	avg=sum/3;
	cout<<"\n The average is : "<<avg;
}
void high_avg(struct score st[])
{
	int p;
	double large;
	float sum[STUDENTS];
	double avg[STUDENTS];
	for(int i=0;i<STUDENTS;i++)
	{
		for(int j=0;j<SUBJECT;j++)
		{
		   sum[i]+=st[i].marks[j];
		   
	    }
	    avg[i]=sum[i]/3;
    }
    avg[0]=large;
    for(int i=0;i<STUDENTS;i++)
    {
    	if(avg[i]>large)
    	  {
		   	large=avg[i];
		   	p=i;
	      }
	}
	cout<<"\n Student "<<p<<" has scored highest average marks i.e., "<<large<<endl;
}
void sub_report(struct score st[])
{
	float max=0.0,min=0.0;
	for(int i=0;i<SUBJECT;i++)
	{
		for(int j=0;j<STUDENTS;j++)
		{
		   if(st[i].marks[j]>max)
		   {
		   	max=st[i].marks[j];
		   }
		   if(st[i].marks[j]<min)
		   {
		   	min=st[i].marks[j];
		   }	
	    }
	    cout<<"\n The highest and lowest marks obtained in subject "<<i+1<<" are "<<max<<" and "<<min<<" respectively. "<<endl;
	}	
}
