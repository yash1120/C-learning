#include<iostream>
using namespace std;
const int student=5;
const int subject=3;
int menu();
void Displaydet(int [student][subject]);
void TotStudent(int marks[student][subject]);
void AvrgSt(int marks[student][subject]);
void AvrgSb(int marks[student][subject]);
void MaxSb(int marks[student][subject]);
void MaxSt(int marks[student][subject]);
int main(){
	int marks[student][subject];
	for (int i=0;i<student;i++)
	{
		for (int j=0;j<subject;j++)
		{
			cout<<"Enter Marks of "<<i+1<<" student in "<<j+1<<" subject ";
			cin>>marks[i][j];
		}
	}
	int ch=1;
	while (ch!=0)
	{
	int ch=menu();
	system("cls");
	switch(ch){
		case 0:
			exit(ch);
		case 1:
			Displaydet(marks);
			system("pause");
			break;
		case 2:
			TotStudent(marks);
			system("pause");
			break;
		case 3:
			AvrgSt(marks);
			system("pause");
			break;
		case 4:
			AvrgSb(marks);
			system("pause");
			break;
		case 5:
			MaxSb(marks);
			system("pause");
			break;
		case 6:
			MaxSt(marks);
			system("pause");
			break;
		default:
			cout<<"Invalid Choice!\n";
			system("pause");
			break;
	}
	}
}
int menu(){
	int ch;
	system("cls");
	cout<<"\n***************Welcome*******************\n";
	cout<<"Maximum Marks are 100\n";
	cout<<"Enter your choice\n";
	cout<<"1. For Display of Data\n";
	cout<<"2. Total of each student\n";
	cout<<"3. Average of each Student\n";
	cout<<"4. Average of each Student\n";
	cout<<"5. Maximum and Minimum in each Subject\n";
	cout<<"6. Maximum and Minimum of each Student\n";
	cin>>ch;
	system("cls");
	return ch;
}

void Displaydet(int marks[student][subject]){
	for (int i=0;i<student;i++){
		cout<<"Marks of "<<i+1<<" student are "<<" ";
		for (int j=0;j<subject;j++){
			cout<<marks[i][j]<<" ";
		}
		cout<<endl;
	}
}
void TotStudent(int marks[student][subject]){
	for (int i=0;i<student;i++){
		int sum=0;
		cout<<"Total Marks of "<<i+1<<" student are "<<" ";
		for (int j=0;j<subject;j++){
			sum=sum+marks[i][j];
		}
		cout<<sum;
		cout<<endl;
		}
}
void AvrgSt(int marks[student][subject]){
	for (int i=0;i<student;i++){
		int sum=0;
		cout<<"Average Marks of "<<i+1<<" student is "<<" ";
		for (int j=0;j<subject;j++){
			sum=sum+marks[i][j];
		}
		cout<<sum/subject;
		cout<<endl;
		}
}
void AvrgSb(int marks[student][subject]){
	for (int j=0;j<subject;j++){
		int sum=0;
		cout<<"Average of "<<j+1<<" subject is "<<" ";
	for (int i=0;i<student;i++){
			sum=sum+marks[i][j];
		}
		cout<<sum/student;
		cout<<endl;
		}
}
void MaxSb(int marks[student][subject]){
	for (int j=0;j<subject;j++)
	{
		int Max=marks[0][j];
		int Min=marks[0][j];
		cout<<"Maximum and Minimum marks of "<<j+1<<" subject is "<<" ";
		for (int i=1;i<student;i++)
		{
			if(marks[i][j]>Max)
			{
				Max=marks[i][j];
			}
			if(marks[i][j]<Min)
			{
				
				Min=marks[i][j];
			}

		}
		cout<<Max<<" "<<Min;
		cout<<endl;
	}
}
void MaxSt(int marks[student][subject]){
	for (int i=0;i<student;i++){
		int Max=marks[i][0];
		int Min=marks[i][0];
		cout<<"Maximum and Minimum marks of "<<i+1<<" student is "<<" ";
	for (int j=1;j<subject;j++){
			if (marks[i][j]>Max){
				Max=marks[i][j];
			}
			if (marks[i][j]<Min){
				Min=marks[i][j];
			}
		}
		cout<<Max<<" "<<Min;
		cout<<endl;
		}
}
