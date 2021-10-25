/*WAP to find a unique number in an array where all number except one, are present thrice*/
#include<iostream>
using namespace std;

bool getbit(int n,int pos)
{
    return ((n & (1<<pos))!=0);
}

int setbit(int n,int pos)
{
    return n|(1<<pos);
}

int unique3(int arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if(getbit(arr[j],i))
            {
                sum++;
            }
        }
        if(sum%3!=0)
        {
            result=setbit(result,i);
        }
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<unique3(arr,n);
    return 0;
}