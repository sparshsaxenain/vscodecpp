#include<iostream>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restarray);
}


int main()
{
    int arr[]={1,3,2,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sorted(arr,n);
} 