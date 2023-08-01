#include <iostream>
#include <vector>
using namespace std;

void print(vector<vector<int>>&arr)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}

int main()
{
    int rows=3,col=2;
    vector<vector<int>> arr;
    for(int i=0;i<rows;i++)
    {
        vector<int> v;
        for(int j=0;j<col;j++)
        {
            v.push_back(i);
        }
        arr.push_back(v);
    }
    
    print(arr);
}