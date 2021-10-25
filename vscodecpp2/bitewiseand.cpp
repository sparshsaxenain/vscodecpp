#include<bits/stdc++.h>
using namespace std;
#define e25 33554431

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long n,res=e25,sum=0;
		cin>>n;
		long arr[n];
		long copy[n];
		for(long i=0;i<n;i++)
		{
			cin>>arr[i];
			copy[i]=arr[i];
		}
		for(long i=0;i<n;i++)
		{
			copy[i]=e25;
            res=e25;
			for(long j=0;j<n;j++)
			{
				res=res & copy[j];
			}
            sum=sum+res;
			copy[i]=arr[i];
		}
        for(int i=0;i<n-1;i++)
        {
            res=e25;
            copy[i]=copy[i+1]=e25;
            for(long j=0;j<n;j++)
			{
				res=res & copy[j];
			}
            sum=sum+res;
            copy[i]=arr[i];
            copy[i+1]=arr[i+1];
        }
        cout<<sum<<endl;
	}
    
}