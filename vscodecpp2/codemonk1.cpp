#include<bits/stdc++.h>
using namespace std;

int main()
{
	int input;
	cin>>input;
	int res[input];
	for(int t=0;t<input;t++)
	{
		int n;
		cin>>n;
		int count=0;
		int arr[n][n];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{ 
			for(int j=1;j<=n;j++)
			{
                for(int a=i;a<=n;a++)
				{
					for(int b=j;b<=n;b++)
					{
						if(arr[i][j]>arr[a][b])
						{
							count++;
						}
					}
				}
			}
		}
		res[t]=count;
	}
	for(int i=0;i<input;i++)
	{
		cout<<res[i]<<endl;
	}
}