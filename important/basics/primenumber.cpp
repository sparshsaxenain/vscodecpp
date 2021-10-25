/*
#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\nprime number";
    }
    else
    {
        cout<<"\nnot a prime number";
    }
}
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"\nprime number";
    }
    else
    {
        cout<<"\nnot a prime number";
    }
}