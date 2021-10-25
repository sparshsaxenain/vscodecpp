#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=0,n;
    cin>>n;
    while(n!=0)
    {
        a=a+(n%10);
        n=n/10;
    }
    cout<<"\n"<<a<<"\n\n\n";
    return 0;
}