#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int arr[n+1];
    if(n==0 || n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(n==2)
    {
        cout<<2<<endl;
        return 0;
    }
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for(int i=3;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    cout<<arr[n]<<endl;
    return 0;
}