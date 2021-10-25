#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,i,flag;
        cin>>a>>b;
        while(a<b)
        {
            flag=0;
            for(i=2;i<=a/2;i++)
            {
                if(a%i==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag == 0)
            {
                cout<<a<<"\n";
                a++;
            }
        }
        cout<<"\n";
        
    }
	return 0;
}