#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(k>n)
        {
            k=k-((k/n)*n);
        }
        int temp[k],arr1[n],c=0;
        for(int i=n-k;i<n;i++)
        {
            temp[c]=arr[i];
            c++;
        }
        for(int i=0;i<n-k;i++)
        {
            arr1[i]=temp[i];
        }
        for(int i=n-k-1,j=0;i<n;i++,j++)
        {
            arr1[i]=arr[j];
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr1[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/

/*int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,num;
        cin>>n;
        long long arr[n];

        for(long long i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        long long min = 99999;

        for(long long i=0;i<n-1;i++)
        {
            num=(arr[i] & arr[i+1])^(arr[i] | arr[i+1]);

            if(num<min)
            {
                min=num;
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}*/

/*int* cycle(int *p,int n)
{
	int t=*(p+(n-1));
	for(int i=n-1;i>0;i--)
	{
		*(p+(i+1))=*(p+(i));
	}
	*(p+0)=t;
	return p;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,flag=0;
		cin>>n;
		int count=0;
		char arr1[n],arr[n];
		cin>>k;
		for(int i=0;i<n;i++)
		{
			cin>>arr1[i];
            arr[i]=arr1[i];
		}
        
		int *p=cycle(arr1,n);
		while(k!=0)
		{
            
            p=cycle(p,n);
            count++;
            flag=0;
            for(int i=0;i<n;i++)
            {
                if(*(p+i)!=arr1[i])
                {
                    flag=1;
                    break;
                }
                
            }
            if(flag==0)
            {
                k--;
                count--;
            }
            cout<<count;
		}
	}
    return 0;
}*/

#define pb push_back
vector<string> v;
string a,b;

int main()
{
    int k,i,j;
    cin>>a>>k;
    for(i=0; a[i]; i++)
    {
        b="";
        for(j=i;a[j];j++)
        {
            b+=a[j];
        }
        v.pb(b);
    }
    sort(v.begin(),v.end());
    cout<<v[k-1]<<endl;

    return 0;
}