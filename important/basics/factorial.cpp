#include<iostream>

using namespace std;

int fact(int n)
{
    /*
    if(n==1 || n==0)
    {
        return n;
    }
    return n*fact(n-1);
    */
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

    int c=fact(n);
    cout<<c;
    return 0;
}