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

void countAndSum(Node * root,int *sum,int *count)
{
    if(root==NULL)
    {
        return;
    }
    countAndSum(root->left,sum,count);
    *(sum)=*(sum)+root->data;
    *(count)=*(count)+1;
    countAndSum(root->right,sum,count);
}

int main()
{
    Node * root=NULL;
    int arr[]={50,45,55,40,46,54,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    int sum=0,count=0;
    countAndSum(root,&sum,&count);
    cout<<count<<" "<<sum;
    return 0;
}