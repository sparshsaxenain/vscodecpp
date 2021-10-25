#include<bits/stdc++.h>
using namespace std;

struct Node
{
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

bool Search(Node * root,int val)
{
    bool a=false;
    if(root==NULL)
    {
        return a; 
    }
    if(root->data==val)
    {
        return true;
    }
    else if(val>root->data)
    {
        a=Search(root->right,val);
    }
    else
    {
        a=Search(root->left,val);
    }
    return a;
}

Node * makeBST(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
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

int main()
{
    Node * root=NULL;
    int arr[]={50,49,55,48,54,56,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    bool a=Search(root,7);
    cout<<a;
    return 0;
}