#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    char s[n][10000];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;s[i][j]!='\0';j++)
        {
            if(j%2==0)
            {
                cout<<s[i][j];
            }
        }
        cout<<" ";
        for(int k=0;s[i][k]!='\0';k++)
        {
            if(k%2!=0)
            {
                cout<<s[i][k];
            }
        }
        cout<<endl;
    }
    return 0;
}