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

Node * DeleteInBST(Node * root,int key)
{
    if(key<root->data)
    {
        root->left= DeleteInBST(root->left,key);
    }
    else if(key>root->data)
    {
        root->right=DeleteInBST(root->right,key);
    }
    else
    {
        if(root->left==NULL)
        {
            Node * temp =root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            Node * temp=root->left;
            free(root);
            return temp;
        }
        
    }
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

}