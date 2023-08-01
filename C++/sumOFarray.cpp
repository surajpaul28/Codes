//sum of array using recursion...
#include<iostream>
using namespace std;

int getSum(int arr[], int size)
{
	if(size == 0)
	{
		return 0;
	}
	if(size == 1){
		return arr[0];
	}
	else{
		int rem = getSum(arr+1,size-1);
		int sum = arr[0]+rem;
		return sum;
	}
}
int main()
{
	int arr[6]={3,6,1,7,3,8};
	int size=6;
	int sum= getSum(arr,size);
	cout<<"Sum:"<<sum<<endl;
	return 0;
}
