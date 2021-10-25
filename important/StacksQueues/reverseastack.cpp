#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> & st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topele);
}

void reverse(stack<int> & st)
{
    if(st.empty())
    {
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

int main()
{
    stack<int> st;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        st.push(a);
    }
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}