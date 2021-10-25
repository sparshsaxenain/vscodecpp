#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        ll a=arr[i];
        arr[i]=0;
        while(a==arr[i+1])
        {
            arr[i+1]=0;
            i++;
        }
        count++;
    }
    cout<<count;
    return 0;
}