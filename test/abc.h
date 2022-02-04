#include<iostream>
const int SIZE=5;
using namespace std;
void tallest_stu(int height[SIZE])
{
    int index,i;
    int max = height[0];

    for (i = 1; i < SIZE; i++)
        if (height[i] > max)
            max = height[i];
            index = i;
    cout << "the tallest student " <<index<<" with the height "<<max ;
}