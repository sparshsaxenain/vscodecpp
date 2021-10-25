#include<iostream>
using namespace std;

int main()
{
    long a=3;
    long b=33554431;
    long c=1;
    long res= a & b;
    res=res & c;
    cout<<res;
}