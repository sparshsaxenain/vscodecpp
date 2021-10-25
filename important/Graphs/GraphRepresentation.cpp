#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vector<int>>
#define vii vector<pair<int,int>>
#define pii pair<int,int>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2;
const int MOD = 1e9+7;

vi adj[N];

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> adjm(n+1,vi (n+1,0));
    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y]=1;
        adjm[y][x]=1;
    }
    cout<<endl;

    rep(i,1,n+1)
    {
        rep(j,1,n+1)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    if(adjm[3][7]==1)
    {
        cout<<"3->7 is a edge"<<endl;
    }
    else
    {
        cout<<"no edge here"<<endl;
    }

    rep(i,0,m)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjjecency list = "<<endl;

    rep(i,1,n+1)
    {
        cout<< i <<" -> ";
        for(int x:adj[i])
        {
            cout<< x << " ";
        }
        cout<<endl;
    }

    return 0;
}
