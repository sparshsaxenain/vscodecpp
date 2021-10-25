#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node * left;
    int data;
    Node * right;

    Node(int val)
    {
        left=NULL;
        data=val;
        right=NULL;
    }
};

Node * makeBST(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
    }
    else if(val>root->data)
    {
        root->right=makeBST(root->right,val);
    }
    else if(val<root->data)
    {
        root->left=makeBST(root->left,val);
    }
    return root;
}

void inorder(Node * root,vector<int> &v)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    Node * root=NULL;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        root=makeBST(root,arr[i]);
    }
    vector<int> v;
    inorder(root,v);
    if(k<=n)
        cout<<v[k-1];
    else
        cout<<"\nNot Applicable";
    return 0;
}