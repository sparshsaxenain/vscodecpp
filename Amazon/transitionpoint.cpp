#include<bits/stdc++.h>
using namespace std;

void FindTransitionPoint(int arr[],int n)
{
    if(arr[0]==1)
    {
        cout<<0;
    }
    else if(arr[n-1]==0)
    {
        cout<<-1;
    }
    else
    {
        int low=0;
        int high=n-1;
        int mid;
        while(arr[high]!=0)
        {
            high=(low-(low+high))/2;
        }
        if(arr[high+1]==1)
        {
            cout<<high+1<<endl;
        }
        else
        {
            while(arr[high]!=1)
            {
                high=high+1;
            }
            cout<<high;
        }
    }

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
    FindTransitionPoint(arr,n);
    return 0;
}