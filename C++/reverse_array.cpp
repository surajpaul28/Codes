#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
       
    }
}
int main()
{
    int arr[]={90,23,50,4,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr,0,n-1);
    cout<<"reversed array is:";
    printArray(arr,n);
    return 0;
}