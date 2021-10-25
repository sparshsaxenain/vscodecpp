#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int j=0;j<=n;j++)
    {
        arr[j]=0;
    }
    arr[0]=1;
    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-3];
    }
    for(int i=5;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-5];
    }
    for(int i=10;i<=n;i++)
    {
        arr[i]=arr[i]+arr[i-10];
    }
    cout<<arr[n]<<endl;
    return 0;
}