#include<bits/stdc++.h>
using namespace std;
//main function to print given array (integer/string) in reverse order
int main()
{
    int i,n;
    cin>>n;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<(n/2);i++)
    {
        char temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n\n\n";
    return 0;
}