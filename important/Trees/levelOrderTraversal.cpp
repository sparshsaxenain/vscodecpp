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

Node* makeBST(Node* root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }
    if(val>root->data)
    {
        root->right=makeBST(root->right,val);
    }
    else
    {
       root->left= makeBST(root->left,val);
    }
    return root;
}

void display(Node * &root)
{
    if(root==NULL)
    {
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}

void printLevelOrder(Node * root)
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
        Node* node=q.front();
        q.pop();
        if(node!=NULL)
        {
            cout<<node->data<<" ";
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
        }
        else if(!q.empty())
        {
            q.push(NULL);
            cout<<endl;
        }
    }
}

int main()
{
    Node * root=NULL;
    int arr[]={50,49,48,55,54,56,53};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    printLevelOrder(root);
    cout<<"\n";
    display(root);
    return 0; 
}