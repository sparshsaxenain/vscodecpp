#include<bits/stdc++.h>
using namespace std;

long long uniquebsts(long long n)
{
    long long arr[n+1];
    for(long long i=0;i<=n;i++)
    {
        arr[i]=0;
    }
    arr[0]=1;
    arr[1]=1;
    for(long long i=2;i<=n;i++)
    {
        for(long long j=1;j<=i;j++)
        {
            arr[i]=arr[i]+(arr[i-j]*arr[j-1]);
        }
    }
    return arr[n];
}

int main()
{
    long long n;
    cin>>n;
    cout<<uniquebsts(n)<<endl;
    return 0;
}