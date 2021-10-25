#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node * next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val)
{
    if(head==NULL)
    {
        head=new Node(val);
    }
    else if(head->next==NULL)
    {
        head->next=new Node(val);
    }
    else
    {
        Node * temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=new Node(val);
    }
}

int numberOfNodes(Node* &head)
{
    Node * temp=head;
    int count=0;
    if(head==NULL)
    {
        return 0;
    }
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

void Append(Node* &head,int k)
{
    if(head==NULL)
    {
        return;
    }
    else if(k==0)
    {
        return;
    }
    else
    {
        Node * newtail=head;
        Node * newhead=head->next;
        
        int count=1;

        while(count!=k && newtail!=NULL)
        {
            newtail=newtail->next;
            newhead=newhead->next;
            count++;
        }
        Node * temp=newhead;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=head;
        newtail->next=NULL;
        head=newhead;
    }
    
}

void display(Node* &head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node * head=NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    insertAtTail(head,40);
    insertAtTail(head,50);
    insertAtTail(head,60);
    display(head);
    int k;
    k=3;
    Append(head,numberOfNodes(head)-k);
    display(head);
}