#include <iostream>
void tallest_stu(int[]);
#include "abc.h"
int main(int argc, char const *argv[])
{
    int heights[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter the height of " << i << " student : ";
        cin >> heights[i];
    }
    tallest_stu(heights);
    return 0;
}
