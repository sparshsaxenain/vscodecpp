#include<bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
    vector<string> v1;
    vector<string> v2;
    int n;
    cin>>n;
    string a;

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        v1.pb(a);
        v2.pb(a);
    }
    sort(v2.begin(),v2.end());
    cout<<"sorted= ";
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<"\t";
    }
    cout<<"\n\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(v1[i-1]==v2[j-1])
            {
                if(i==j)
                {
                    cout<<0<<"\n";
                }
                else if(i>j)
                {
                    cout<<j-1<<"\n";
                }
                else
                {
                    cout<<i-1<<"\n";
                }
            }
        }
    }
    return 0;
}