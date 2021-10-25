#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node * left;
    int data;
    Node * right;

    Node(int data)
    {
        left=NULL;
        this->data= data;
        right=NULL;
    }
};

Node* makeCBT(Node * root,int data)
{
    if(root==NULL)
    {
        root=new Node(data);
        return root;
    }
    else if(root->left==NULL)
    {
        root->left=new Node(data);
    }
    else if(root->right==NULL)
    {
        root->right=new Node(data);
    }
    else
    {
        root->left=makeCBT(root->left,data);
        root->right=makeCBT(root->right,data);
    }
    return root;
}

void inorder(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    Node* root=NULL;
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeCBT(root,arr[i]);
    }
    inorder(root);
    return 0;
}