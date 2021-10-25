#include<iostream>
using namespace std;

int Powerof2(int n)
{
    return !(n & n-1);
}

int main()
{
    int n;
    cin>>n;
    int res = Powerof2(n);
    if(res)
    {
        cout<<"True"<<"\n";
    }
    else cout<<"False\n";
    return 0;
}