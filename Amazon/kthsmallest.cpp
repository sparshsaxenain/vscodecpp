#include<bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node * left;
    int data;
    struct Node * right;

    Node(int val)
    {
        left=NULL;
        data=val;
        right=NULL;
    }
};

Node * insert(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }
    if(val>root->data)
    {
        root->right = insert(root->right,val);
    }
    else
    {
        root->left = insert(root->left,val);
    }
    return root;
}

Node* makeBST(int arr[],int n)
{
    Node * root=NULL;
    for(int i=0;i<n;i++)
    {
        root=insert(root,arr[i]);
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
  int t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    Node * root=makeBST(arr,n);
    vector<int> v;
    inorder(root,v);
    cout<<v[k-1]<<" ";
    cout<<endl;
  }
    return 0;
}
