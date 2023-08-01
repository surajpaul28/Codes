#include <iostream>
#include <unordered_set>
using namespace std;

void printDuplicates(int arr[], int n)
{
    unordered_set<int> intSet;
    unordered_set<int> duplicates;

    for(int i=0;i<n;i++)
    {
        if(intSet.find(arr[i])==intSet.end())
        {
            intSet.insert(arr[i]);
        }
        else{
            duplicates.insert(arr[i]);
        }
    }
    cout<<"Duplicate elements are:"<<endl;
    unordered_set<int>::iterator itr;
    for(itr=duplicates.begin();itr!=duplicates.end();itr++)
    {
        cout<<*itr<<" ";
    }
}

int main()
{
    int arr[]={1,3,7,9,2,1,3,7,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    printDuplicates(arr,n);
    return 0;
}