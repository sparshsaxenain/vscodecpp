#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node * left;
    struct Node * right;

    Node(int val)
    {
        data=val;
        left=NULL;
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
    int choice;
    do
    {
        cout<<"Enter 1 to insert\nEnter 2 to display\nChoice:";
        cin>>choice;
        switch (choice)
        {
            case 1: {int n;
                    cin>>n;
                    root= insert(root,n);}
                    break;
            case 2: {inorder(root); cout<<endl;}
                    break;
        
        }
    } while (choice!=4);
    return 0;
    
}