//write a program to find the array after left rotation by n position

#include<iostream>
using namespace std;

int main()
{
	int arr[]={2,3,7,3,9,5};
	int len=sizeof(arr)/sizeof(arr[0]);
	int pos=2;
	
	for(int i=0;i<pos;i++){
		int j;
		int first=arr[0];
		for(j=0;j<len-1;j++)
		{
			arr[j]=arr[j+1];
		}
		arr[j]=first;
	}
	for(int i=0;i<len;i++)
	{
		cout<<arr[i];
	}
	return 0;
}
