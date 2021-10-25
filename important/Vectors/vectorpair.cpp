#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>> vp;
    for(int i=0;i<5;i++)
    {
        int p1,p2;
        cin>>p1>>p2;
        vp.push_back(make_pair(p1,p2));
    }
    cout<<"\nvector pain input-: \n";
    for(int i=0;i<5;i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    cout<<"\nSorted-: ";
    sort(vp.begin(),vp.end());
    for(int i=0;i<5;i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    return 0;
}