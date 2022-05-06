#include <iostream>
using namespace std;

void check_prime(int numb, char& S)

{
    bool flag = true;
    if (numb > 0)
    {
        int x = 2;
        while (flag && x<numb)
        {
            if (numb % x == 0)
            {
                flag = false;
                S = 'F';
            }
            x++;
        }
        if (flag)
        {
            S = 'T';
        }
    }
}

int main(int argc, char const *argv[])
{
    int numb;
    char s = 'F';
    cout << "Enter the number : ";
    cin >> numb;
    check_prime(numb,s);
    if (s == 'F')
    {
        cout << "Number is not Pime number ";
    }
    else if (s == 'T')
    {
        cout << "the Number is Prime ";
    }

    return 0;
}
