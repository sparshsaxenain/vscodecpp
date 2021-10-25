#include<bits/stdc++.h>
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
        int count=0,flag=0;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        arr[n]=0;
        int prev=arr[0];
        if(prev>arr[1])
        {
            count++;
        }
        int max=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>max && arr[i]>arr[i+1])
            {
                count++;
                
                max=arr[i];
            }
            //cout<<max<<" "<<arr[i]<<" "<<arr[i+1]<<endl;
        }
        cout<<"Case #"<<k<<": "<<count<<endl;
        k++;
    }
}