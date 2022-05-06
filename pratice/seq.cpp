#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int numb;
    int sum=0;
    bool flag = true;
    int itr=1;
    cout << "enter the number : ";
    cin >> numb;
    while(numb>0){
        if (flag==true){
            sum=sum+itr;
            flag=false;
        }
        else{
            sum=sum-itr;
            flag=true;
        }
        itr+=1;
        numb-=1;
    }
    cout<<"sum: "<<sum;
    return 0;
}
