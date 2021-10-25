#include<bits/stdc++.h>
using namespace std;
#define max 1000

void krotate(int arr[][max],int n,int m,int k)
{
    int temp[n][1];
    while(k--)
    {
        int j=0;
        for(int i=0;i<n;i++)
        {
            temp[i][j]=arr[i][j];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                arr[i][j-1]=arr[i][j];
            }
        }
        j=m-1;
        for(int i=0;i<n;i++)
        {
            arr[i][j]=temp[i][0];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int arr[n][max];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    k=k%m;
    krotate(arr,n,m,k);
    return 0;
}