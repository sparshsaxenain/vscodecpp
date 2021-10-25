#include<iostream>
#include<cmath>

using namespace std;

bool IsPrime(int n)
{
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}

int main()
{
    int a,b;
    cin>>a>>b;
    bool isprime=0;
    for(int i=a;i<=b;i++)
    {
        isprime=IsPrime(i);
        if(isprime==0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}