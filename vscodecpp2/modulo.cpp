#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    for(int test=0;test<t;test++)
    {
        ll m,k;
        cin>>m>>k;
        string s;
        cin>>s;
        string n=s;
        ll res=0;
        stringstream geek(s);
        ll x=0;
        geek>>x;
        if(k>x)
        {
            res=x%k;
        }
        else
        {
            res=x%k;
            for(ll i=0;i<m;i++)
            {
                s=n;
                s.erase(s.begin()+i);
                stringstream geeks(s);
                geeks>>x;
                if(res<x%k)
                {
                    res=x%k;
                }
            }
        }
        cout<<res<<"\n";
    }
    
}