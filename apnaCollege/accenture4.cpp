#include<iostream>

using namespace std;

int main()
{
    int n,m;
    int sumdiv=0;
    int sumndiv=0;
    cin>>n;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        if(i%n==0)
        {
            sumdiv+=i;
        }
        else
        {
            sumndiv+=i;
        }
    }
    int c=sumndiv-sumdiv;
    cout<<c;
    return 0;
}