#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char const *argv[])
{
    ofstream outf("first");
    cout<<"enter the name : ";
    string name;
    cin>> name;
    outf << name<<"\n";
    outf.close();

    ifstream inf("first");
    inf>>name;
    cout<<"YOUR NAME IS : "<< name ;
    inf.close();
    return 0;
}
