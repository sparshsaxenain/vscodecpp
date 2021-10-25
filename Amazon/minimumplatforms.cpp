#include<bits/stdc++.h>
#define vp vector<pair<int,int>>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>dep[i];
    }
    int plat_needed=1;
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=1,j=0,result=1;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            plat_needed++;
            i++;
        }
        else if(arr[i]>dep[j])
        {
            plat_needed--;
            j++;
        }

        if(plat_needed>result)
        {
            result=plat_needed;
        }
    }
    cout<<result<<endl;
    return 0;
}