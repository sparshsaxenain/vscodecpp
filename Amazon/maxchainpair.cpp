#include<bits/stdc++.h>
using namespace std;
#define pair vector<pair<int,int>>

int main()
{
    pair p;
    int a,b,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        p.push_back(make_pair(a,b));
    }
    sort(p.rbegin(),p.rend());
    int count=1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i].first>p[j].second)
            {
                count++;
                i=j;
            }
        }
    }
    cout<<endl<<count<<endl;
    return 0;
}