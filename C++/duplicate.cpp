#include<iostream>
using namespace std;

int main()
{
	char string[]="Dimsipsipdp";
	int count;
	int len=sizeof(string[])/sizeof(string[0]);
	
	for(int i=0;i<len;i++)
	{
		count=1;
		for(int j=i+1;j<len;j++)
		{
			if(string[i]==string[j] && string[i]!='')
			{
				count++;
				string[j]='0';
			}
		}
		if(count>1 && string[i]!='0')
		{
			cout<<string[i];
		}
	}
	return 0;
	
}
