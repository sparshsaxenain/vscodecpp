#include<bits/stdc++.h>
using namespace std;

void input(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n],cc=1,maxc=0,j;
    input(arr,n);
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        
        while(arr[i]==arr[i+1])
        {
            cc++;
            i++;
        }
        if(maxc<cc)
        {
            maxc=cc;
            cout<<endl<<"maxc= "<<maxc;
            j=i;
        }
        cc=1;
    }
    cout<<arr[j];
    return 0;
}