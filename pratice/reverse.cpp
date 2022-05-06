#include <iostream>
using namespace std;

int reverse(int numb)
{
    int rev = 0;
    while (numb > 0)
    {
        rev = rev * 10 + numb % 10;
        numb = numb / 10;
    }
    return rev;
}
int main(int argc, char const *argv[])
{
    int n,rev;
    cout << "Enter the numner : ";
    cin >> n;
    rev = reverse(n);
    cout<<"reverse: "<<rev;
    return 0;
}
