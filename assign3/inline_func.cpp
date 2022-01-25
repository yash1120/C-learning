#include <iostream>
#include <cstdlib>
using namespace std;
inline void area(int a)
{
	cout << 3.14 * a * a;
}
inline void area(int a, int b)
{
	cout << a * b;
}
int main()
{
	int r, l, b;

	int choice;
	system("cls");
	cout << "\t \t \t MAIN MENU- AREA USING INLINE FUNCTION";
	cout << "\n 1. Circle";
	cout << "\n 2. Rectangle";
	cout << "\n 3. EXIT ";
	cout << "\n Enter your choice: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "\n Enter the radius : ";
		cin >> r;
		cout << "\n The area of circle is : ";
		area(r);
		break;
	case 2:
		cout << "\n Enter length and breadth : ";
		cin >> l >> b;
		cout << "\n The area of rectangle is : ";
		area(l, b);
		break;
	case 3:
		cout << "HAVE A NICE DAY!!!";
		break;
	default:
		cout << "\n INVALID CHOICE!!!";
	}
	return 0;
}
