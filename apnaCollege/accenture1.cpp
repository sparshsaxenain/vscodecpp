#include<iostream>
using namespace std;

int calculate (int r, int unit, int arr[], int n)
{
    if(n==0)
    {
        return -1;
    }
    int c=0;
    int i=0;
    while(c<=r*unit && i<n)
    {
        c=c+arr[i];
        i++;
    }
    if(c>=r*unit)
    {
        return i;
    }
    else
    {
        return 0;
    }
}

int main ()
{
    int r;
    cin >> r;
    int unit;
    cin >> unit;
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    cout << calculate (r, unit, arr, n);
    return 0;
}