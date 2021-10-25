#include<iostream>
using namespace std;

int Setbit(int n,int pos)
{
    return (n | (1<<pos));
}

int main()
{
    int n,pos,res;
    n=5;
    pos=1;
    res=Setbit(n,pos);
    cout<<res;
    return 0;
}