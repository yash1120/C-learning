#include <iostream>
#include <cmath>
#include <cstdlib>
//function_prototypes
using namespace std;
float area(float);
float area(float, float, float);
float area(int);
float area(float, float);
int main()
{
	float ar, s1, s2, s3;
	int s;
	int choice;

	system("cls");
	cout << "\t \t \t AREA MAIN MENU";
	cout << "\n 1. Circle";
	cout << "\n 2. Square";
	cout << "\n 3. Rectangle";
	cout << "\n 4. Triangle";
	cout << "\n 5. EXIT ";
	cout << "\n Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\n Enter the radius : ";
		cin >> s1;
		ar = area(s1);
		cout << "\n The area of circle is : " << ar << endl;
		break;
	case 2:
		cout << "\n Enter a side: ";
		cin >> s;
		ar = area(s);
		cout << "\n The area of square is : " << ar << endl;
		break;
	case 3:
		cout << "\n Enter length and breadth : ";
		cin >> s1 >> s2;
		ar = area(s1, s2);
		cout << "\n The area of rectangle is : " << ar << endl;
		break;
	case 4:
		cout << "\n Enter 3 sides : ";
		cin >> s1 >> s2 >> s3;
		ar = area(s1, s2, s3);
		cout << "\n The area of triangle is : " << ar << endl;
	case 5:
		cout << "HAVE A NICE DAY!!!";
		break;
	default:
		cout << "\n INVALID CHOICE!!!";
	}
	return 0;
}
float area(float a, float b, float c)
{
	float s, ar;
	s = (a + b + c) / 2;
	ar = sqrt(s * (s - a) * (s - b) * (s - c));
	return ar;
}
float area(float length, float breadth)
{
	return length * breadth;
}
float area(int side)
{
	return side * side;
}
float area(float radius)
{
	return 3.14 * radius * radius;
}
