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
        data = val;
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

void printLeftView(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node * n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(q.front()==NULL)
            {
                cout<<n->data<<" ";
            }
            if(n->right!=NULL)
            {
                q.push(n->right);
            }
            if(n->left!=NULL)
            {
                q.push(n->left);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}

void printRightView(Node * root)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node * n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(q.front()==NULL)
            {
                cout<<n->data<<" ";
            }
            if(n->left!=NULL)
            {
                q.push(n->left);
            }
            if(n->right!=NULL)
            {
                q.push(n->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
        }
    }
}

int main()
{
    Node * root=NULL;
    int arr[]={50,30,40,60,55,58};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    cout<<"Left View=\n";
    printLeftView(root);
    cout<<"\nRight View=\n";
    printRightView(root);
    return 0;
}