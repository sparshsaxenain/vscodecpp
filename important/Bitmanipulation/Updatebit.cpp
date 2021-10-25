#include<iostream>
using namespace std;

int updateBit(int n,int pos,int value)
{
    //clear bit
    int mask = ~(1<<pos);
    n= n & mask;

    //set bit
    return (n | (value<<pos));
}

int main()
{
    int n,value,pos;
    n=5;
    pos=0;
    value=0;
    cout<<updateBit(n,pos,value);
    return 0;
}