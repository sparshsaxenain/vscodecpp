#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n==0 || n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    long long arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(long long i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    cout<<arr[n]<<endl;
}