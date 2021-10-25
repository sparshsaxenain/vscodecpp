#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node * next;

        Node(int data)
        {
            this->data=data;
            next=NULL;
        }
};

int main()
{
    Node * head=NULL;
    head=new Node(1);
    Node * temp=head;
    for(int i=2;i<10;i++)
    {
        Node * p=new Node(i);
        temp->next=p;
        temp=temp->next;
    }
    temp->next=head;
    temp=head;
    temp=temp->next;
    while(temp!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }

    return 0;
}