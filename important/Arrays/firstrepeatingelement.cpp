#include<iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int kk=40000;
    int idx[kk];
    {
        for(int i=0;i<kk;i++)
        {
            idx[i]=-1;
        }
    }
    int i=0,minidx=INT_MAX;
    while(i<n)
    {
        if(idx[arr[i]] != -1 && minidx>idx[arr[i]])
        {
            minidx=idx[arr[i]];
            flag=1;
        }
        idx[arr[i]]=i;
        i++;
    }
    if(flag==1)
    {
        cout<<minidx+1;
    }
    else
    {
        cout<<-1;
    }
    return 0;
}