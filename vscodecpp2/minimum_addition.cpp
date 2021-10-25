#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()

{

ios_base::sync_with_stdio(false);

cin.tie(NULL);

cout.tie(NULL);

ll t,n,k;

cin >>t;

while(t--){

    cin>>n>>k;

    ll sum=0;

    for(ll i=0;i<n;i++)

    {

       ll x; cin>>x;

       sum += x;

    }

    ll i=sum/(k+1);

    i++;

    ll ans=i-n;

    if(ans<0) cout<<0<<endl;

    else cout<<ans<<endl;

    }

}