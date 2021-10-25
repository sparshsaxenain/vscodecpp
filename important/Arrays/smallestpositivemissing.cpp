#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool m[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        m[i]=false;
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>=0)
        {
            m[arr[i]]=true;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(m[i]==false)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}