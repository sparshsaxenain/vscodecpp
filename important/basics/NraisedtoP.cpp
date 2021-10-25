#include<iostream>
using namespace std;

int raised(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int calc= raised(n,p-1);
    return n*calc;
}

int main()
{
    int n,p;
    cin>>n>>p;
    int res=raised(n,p);
    cout<<res;
    return 0;
}