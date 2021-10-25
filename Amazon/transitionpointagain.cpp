#include<bits/stdc++.h>
using namespace std;

int transitionpoint(int [],int);

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result=transitionpoint(arr,n);
    cout<<"\n"<<result;
}

int transitionpoint(int arr[],int n)
{
    if(arr[0]==1)
    {
        return 0;
    }
    else if(arr[n-1]==0)
    {
        return -1;
    }
    else
    {
        int low=0;
        int high=n-1;
        high=high/2;
        while(high>=low && arr[high]==1)
        {
            high=high/2;
        }
        if(high<low)
        {
            return -1;
        }
        else
        {
            if(arr[high+1]==1)
            {
                return high+1;
            }
            else
            {
                while(arr[high]!=1)
                {
                    high=high+1;
                }
                return high;
            }
        }
    }
    return -1;
}