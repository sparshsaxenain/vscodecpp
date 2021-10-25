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
    else
    {
        root->left=makeBST(root->left,val);
    }
    return root;
}

void displayLeft(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL)
    {
        displayLeft(root->right);
    }
    else
    {
        displayLeft(root->left);
    }
    cout<<root->data<<" ";
    
}

void displayRight(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->right==NULL)
    {
        displayRight(root->left);
    }
    else
    {
        displayRight(root->right);
    }
    cout<<root->data<<" ";
}

int main()
{
    Node * root=NULL;
    int n;
    for(int i=0;i<7;i++)
    {
        cin>>n;
        root=makeBST(root,n);
    }
    cout<<"Left View\n";
    displayLeft(root);
    cout<<"\nRight View\n";
    displayRight(root);
    return 0;
}