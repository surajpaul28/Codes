#include<iostream>
using namespace std;

int main()
{
	int arr[50];
	int n,max,min;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	max=arr[0];
	min=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<"Max is: "<<max<<endl;
	cout<<"Min is: "<<min;
}


