#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int min,pos,j;

    for(int i=0;i<n-1;i++)
    {
        min=arr[i];
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            arr[pos]=arr[i];
            arr[i]=min;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}