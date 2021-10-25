#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    cin>>s;
    int n= strlen(s);
    int i;
    for(i=0;i<n/2;i++)
    {
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    s[n]='\0';
    cout<<s;
    return 0;
}