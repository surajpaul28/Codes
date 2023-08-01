#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];  
    }
    
    const int N= 1e6+2;
    int indx[N];
    for(int i=0;i<N;i++)
    {
        indx[i]=-1;
    }
    int minIndx = INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(indx[i]!=-1)
        {
            minIndx=min(minIndx,indx[a[i]]);
        }
        else{
            indx[a[i]]=i;
        }
    }
    if(minIndx==INT16_MAX)
    {
        cout<<"-1"<<endl;
    }
    else{
        cout<<minIndx+1<<endl;
    }

}