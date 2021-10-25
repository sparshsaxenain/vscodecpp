#include<iostream>
using namespace std;

int main()
{
    int n,n1,c=0;
    cin>>n;
    n1=n;
    while(n>0)
    {
        c=c+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(c==n1)
    {
        cout<<"\nArmstrong number";
    }
    else
    {
        cout<<"not Armstrong number";
    }
}