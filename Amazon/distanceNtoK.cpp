#include<bits/stdc++.h>
using namespace std;

struct node
{
    node * left;
    int data;
    node * right;

    node(int val)
    {
        left=NULL;
        data=val;
        right=NULL;
    }
};

node * searchnode(node * root,int val)
{
    if(root->data==val || root==NULL)
    {
        return root;
    }
    searchnode(root->left,val);
    searchnode(root->right,val);
    return root;
}

void SearchD(node * root,int k)
{
    if(root==NULL)
    {
        return;
    }
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    int level=0;
    while(!q.empty())
    {
        node * n=q.front();
        q.pop();
        if(n!=NULL)
        {
            if(level==k)
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
            level++;
        }
    }

}

int main()
{
    node * root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
    root->left->left->left=new node(8);
    root->left->left->right=new node(9);
    root->left->right->left=new node(10);
    root->left->right->right=new node(11);
    node * temp=searchnode(root,2);
    SearchD(temp,2);
    return 0;
}