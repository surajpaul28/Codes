#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,x,y,count=0;
	    cin>>n>>x>>y;
	    long long int a[n];
	    for(long long int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        if(a[i]<=x && (a[i]%y)==0)
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
