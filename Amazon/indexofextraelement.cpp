#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int arr1[n-1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>arr1[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(arr[n-1]!=arr1[n-2])
    {
        cout<<n-1<<endl;
        return 0;
    }
    else
    {
        int i=0,j=0;
        while(i<n && j<n-1)
        {
            if(arr[i]!=arr1[j])
            {
                cout<<i<<endl;
                break;
            }
            i++;
            j++;
        }
    }
    return 0;
}