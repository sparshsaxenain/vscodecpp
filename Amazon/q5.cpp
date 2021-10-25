#include<bits/stdc++.h>
using namespace std;

bool pairexist(int arr[],int n,int sum)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        int temp = sum-arr[i];
        if(s.find(temp)!=s.end())
        {
            return 1;
        }
        s.insert(arr[i]);
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool answer=pairexist(arr,n,x);
    if(answer)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}