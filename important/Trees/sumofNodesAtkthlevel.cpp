#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node * Left;
    int Data;
    Node * Right;

    Node(int val)
    {
        Left=NULL;
        Data=val;
        Right=NULL;
    }
};

Node * makeBST(Node * root,int val)
{
    if(root==NULL)
    {
        root=new Node(val);
        return root;
    }
    else if(val>root->Data)
    {
        root->Right=makeBST(root->Right,val);
    }
    else
    {
        root->Left=makeBST(root->Left,val);
    }
    return root;
}

void SumLevel(Node * root,int pos)
{
    if(root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level=1;
    int sum=0;
    while(!q.empty())
    {
        Node * node = q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==pos)
            {
                sum=sum + (node->Data);
            }
            if(node->Left!=NULL)
            {
                q.push(node->Left);
            }
            if(node->Right!=NULL)
            {
                q.push(node->Right);
            }
        }
        else if(!q.empty())
        {
            level++;
            q.push(NULL);
        }
    }
    cout<<sum;
}

int main()
{
    Node * root=NULL;
    int arr[]={50,45,46,40,55,60,54};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        root=makeBST(root,arr[i]);
    }
    SumLevel(root,3);
    return 0;
}