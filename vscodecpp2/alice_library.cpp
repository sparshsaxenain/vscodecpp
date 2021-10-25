#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin>>str;
    int front,rear;
    int n=str.length();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='/')
        {
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        rear=0;
        front=-1;
        while(rear<str.length())
        {
            if(str[rear]=='/')
            {
                front=rear;
            }
            rear++;
        }
        if(front+1==rear-1)
        {
            str.erase(str.begin()+front);
            str.erase(str.begin()+rear-1);
        }
        else
        {
            str.erase(str.begin()+front);
            str.erase(str.begin()+rear-1);
        }
        cout<<str<<"\n";
    }
    
}