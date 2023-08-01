#include <iostream>
using namespace std;

void printLargest(int arr[], int arr_size)
{
    int first,second, third;
    if(arr_size<3)
    {
        cout<<"Invalid Input";
    } 

    third=second=first=INT16_MIN;
    for(int i=0;i<arr_size;i++)
    {
        if(arr[i]>first)
        {
            third=second;
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            third=second;
            second=arr[i];
        }
        else if(arr[i]>third && arr[i]!=second)
        {
            third=arr[i];
        }
        cout<<"the largest three elements are:"<<first<<" "<<second<<" "<<third;

    }
}
int main()
{
    int arr[]={10,4,3,50,23,45};
    int n=sizeof(arr)/sizeof(arr[0]);
    printLargest(arr,n);
    return 0;
}