#include<iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
	while(start<end)
	{
		int temp= arr[start];
		arr[start]= arr[end];
		arr[end]= arr[temp];
		start++;
		end--;
	}
}

void print(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={2,6,3,8,9,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	print(arr,n);
	reverse(arr,0,n-1);
	cout<<"Reversed array is:"<<endl;
	print(arr,n);
	return 0;
}
