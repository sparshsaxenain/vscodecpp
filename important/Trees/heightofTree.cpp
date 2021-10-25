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

Node* makeBST(Node * root,int val)
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

void display(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

int calcHeight(Node * root)
{
    if(root==NULL)
    {
        return 0;
    }
    int lh = calcHeight(root->left);
    int rh = calcHeight(root->right);
    return max(lh,rh)+1;
}

int main()
{
    Node * root=NULL;
    int arr[]={50,49,48,55,56,54,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    display(root);
    cout<<endl;
    int res=calcHeight(root);
    cout<<res<<" \n";
    return 0;
}