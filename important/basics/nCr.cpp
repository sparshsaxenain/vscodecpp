#include<iostream>

using namespace std;

int fact(int n)
{
   int a=1;
   for(int i=2;i<=n;i++)
   {
       a=a*i;
   }
   return a;
}

int main()
{
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout<<fact(n)/(fact(n-r)*fact(r));
    return 0;
}