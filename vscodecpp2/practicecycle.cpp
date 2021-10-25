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

Node* insertAtTail(Node * head,int val)
{
    if(head==NULL)
    {
        head=new Node(val);
        return head;
    }
    else if(head->next==NULL)
    {
        head->next=new Node(val);
        return head;
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
    return head;
}

void display(Node * head)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

void createCycle(Node * head,int pos)
{
    Node * temp = head;
    Node * cycle;
    int count=1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
        if(count==pos)
        {
            cycle=temp;
        }
    }
    temp->next=cycle;
}

bool detectCycle(Node * head)
{
    Node * slow=head;
    Node * fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            return true;
        }
    }
    
    return false;
}

void removeCycle(Node * head)
{
    Node * fast=head;
    Node * slow = head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast && fast->next!=NULL);

    slow=head;

    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    if(fast->next==slow->next)
    {
        fast->next=NULL;
    }
    
}

int main()
{
    Node * head=NULL;
    head=insertAtTail(head,10);
    head=insertAtTail(head,20);
    head=insertAtTail(head,30);
    head=insertAtTail(head,40);
    head=insertAtTail(head,50);
    head=insertAtTail(head,60);
    head=insertAtTail(head,70);
    head=insertAtTail(head,80);
    bool cycle=detectCycle(head);
    if(cycle)
    {
        cout<<"cycle detected\nAfter removing cycle"<<endl;
        removeCycle(head);
    }
    else
    {
        cout<<"No Cycle"<<endl;
    }
    display(head);
    return 0;
}