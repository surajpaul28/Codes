#include <iostream>
using namespace std;

/*Check value of arr[mid]
if 0, swap arr[low] and arr[mid], low++, mid++
if 1, mid++
if 2, swap arr[mid] and arr[high], high-- */

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnf_sort(int arr[], int n)
{
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0)
        {
            swap(arr,low,mid);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
       {
            swap(arr,mid,high);
            high--; 
       }
    }
}
int main()
{
    int arr[]={1,0,2,1,2,1,0,0,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    dnf_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}