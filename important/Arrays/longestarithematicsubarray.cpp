#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int k=1;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        int currdiff=0,currcount=2,prevdiff=0,count=0;
        for(int i=1;i<n;i++)
        {
            currdiff=arr[i]-arr[i-1];
            if(currdiff==prevdiff)
            {
                currcount++;
            }
            else
            {
                currcount=2;
            }
            if(currcount>count)
            {
                count=currcount;
            }
            prevdiff=currdiff;
        }
        if(count<=2)
        {
            cout<<"Case #"<<k<<": "<<0<<endl;
        }
        else
        {
            cout<<"Case #"<<k<<": "<<count<<endl;
        }
        k++;
    }
}