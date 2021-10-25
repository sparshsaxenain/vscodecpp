#include<iostream>
using namespace std;

void Array(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>*(arr+i);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    Array(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}