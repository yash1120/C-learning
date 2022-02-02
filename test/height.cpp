#include <iostream>
using namespace std;
void tallest_stu(int[]);
const int SIZE =5;
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