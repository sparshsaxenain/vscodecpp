#include<iostream>
using namespace std;

int getbit(int n,int pos)
{
    return ((n & (1<<pos)) != 0);
}

int main()
{
    int n;
    n=5;
    int pos;
    pos=2;
    int res=getbit(n,pos);
    cout<<res;
    return 0;
}