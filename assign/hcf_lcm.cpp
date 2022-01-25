//Input a number and find the HCF and the LCM of the number
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int y;
    int hcf;
    int lcm;
    cout << "Enter the  first number : ";
    cin >> x;
    cout << "Enter the second number : ";
    cin >> y;
    if (y > x)
    {
        int temp = y;
        y = x;
        x = temp;
    }

    for (int i = 1; i <= y; ++i)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    lcm = (x*y)/hcf;

    cout << "HCF of the "<<x<<" and "<<y<<" is "<< hcf <<endl;
    cout << "LCM of the "<<x<<" and "<<y<<" is "<< lcm;

}
