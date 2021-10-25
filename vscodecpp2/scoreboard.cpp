#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int n,q;
		cin>>n>>q;
		int arr[n+1];
        int rank[n+1];
        int c=1;
		for(int i=1;i<=n;i++)
		{
			cin>>arr[i];
		}
		int arr1[q][2];
		for(int i=1;i<=q;i++)
		{
			cin>>arr1[i][0];
			cin>>arr1[i][1];
		}
        for(int i=1;i<=q;i++)
		{
            c=1;
			arr[arr1[i][0]]=arr1[i][1];
            sort(arr+1,arr+n+1);
            for(int j=1;j<=n;j++)
            {
                cout<<arr[j]<<" ";
            }
            for(int j=1;j<=n;j++)
            {
                rank[j]=c;
                while(arr[j]==arr[j+1])
                {
                    rank[j+1]=c;
                    j++;
                }
                c++;
            }
            cout<<endl;
		}
        /*for(int i=1;i<=n;i++)
        {
            cout<<arr[i]<<" ";
        }*/

	}
    return 0;
}