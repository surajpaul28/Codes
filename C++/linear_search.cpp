#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k)
        {
            return i;
        }
        else{
            return -1;
        }
    }
}
int main(){
    int n;
    
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<linear_search(arr,n,k);
    return 0;
}