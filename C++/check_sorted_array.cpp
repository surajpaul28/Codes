#include<iostream>
using namespace std;

bool checkSort(int arr[], int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    int arr[]={2,5,8,3,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    checkSort(arr,n);
    return 0;
}