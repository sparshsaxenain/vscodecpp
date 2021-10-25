#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node * left;
    int data;
    Node * right;

    Node (int val)
    {
        left=NULL;
        data=val;
        right=NULL;
    }
};

Node * buildtree(int i,int n,int arr[],Node * root)
{
    if(i<n)
    {
        Node * temp=new Node(arr[i]);
        root=temp;
        root->left=buildtree(2*i+1,n,arr,root->left);
        root->right=buildtree(2*i+2,n,arr,root->right);
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
    Node * root=NULL;
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    root=buildtree(0,n,arr,root);
    inorder(root);
    return 0;
}