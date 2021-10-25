#include<bits/stdc++.h>
using namespace std;

int hops(int n)
{
    if(n==-1 || n==-2)
    {
        return 0;
    }
    if(n==0 || n==1)
    {
        return 1;
    }
    return hops(n-1)+hops(n-2)+hops(n-3);
}

int main()
{
    int n; 
    cin>>n;
    int res=hops(n);
    cout<<res<<endl;
}