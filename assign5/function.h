#include<iostream>
int sum_average(int arr[]){
    int sum=0;
    float average=0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        sum+=arr[i];
    }
    average = sum/len;
    cout<<sum<<" "<<average;
}