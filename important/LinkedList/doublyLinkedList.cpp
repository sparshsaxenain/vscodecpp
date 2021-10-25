#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        Node * prev;
        int data;
        Node * next;

        Node(int val)
        {
            prev=NULL;
            data = val;
            next=NULL;
        }
};

Node * insertAtTail(Node * head,Node * tail,int val)
{   
    if(head->next==NULL)
    {
        head->next=new Node(val);
        head->next->prev=head;
        tail=head->next;
        return tail;
    }
    else
    {
        Node * ahead=head->next;
        Node * behind=head;
        while(ahead!=NULL)
        {
            ahead=ahead->next;
            behind=behind->next;
        }
        ahead=new Node(val);
        ahead->prev=behind;
        behind->next=ahead;
        tail=ahead;
    }
    return tail;
}

void displayForward(Node * head,Node * tail)
{
    Node * temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void displayReverse(Node * head,Node * tail)
{
    Node * temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}

Node * insertAtHead(Node * head,Node * tail,int val)
{
    head->prev=new Node(val);
    head->prev->next=head;
    head=head->prev;
    return head;
}

void insertAtNpos(Node * head,Node * tail,int pos,int val)
{
    Node * ahead=head->next;
    Node * behind=head;
    int count=2;
    while(count!=pos)
    {
        ahead=ahead->next;
        behind=behind->next;
        count++;
    }
    Node * p=new Node(val);
    p->prev=behind;
    p->next=ahead;
    behind->next=p;
    ahead->prev=p;
}

Node* delete1(Node * head,Node * tail,int val)
{
    Node * temp = head;
    if(head->data==val)
    {
        head=head->next;
        head->prev=NULL;
        return head;
    }
    else if(tail->data==val)
    {
        tail=tail->prev;
        tail->next=NULL;
        return head;
    }
    else
    {
        while(temp->data!=val)
        {
            temp=temp->next;
            if(temp==NULL)
            {
                cout<<"Not Found\n";
                return head;
            }
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);
    }
    return head;
}

int main()
{
    Node * head=NULL;
    Node * tail=NULL;
    int nodes=0;
    if(head==NULL)
    {
        head=new Node(8);
        tail=head;
        nodes++;
    }

    tail=insertAtTail(head,tail,20);
    nodes++;
    tail=insertAtTail(head,tail,30);
    nodes++;
    head=insertAtHead(head,tail,7);
    nodes++;
    head=insertAtHead(head,tail,6);
    nodes++;
    tail=insertAtTail(head,tail,40);
    nodes++;
    int k,val;
    k=4;
    
    if(k==nodes+1)
    {
        val=tail->data+10;
        tail=insertAtTail(head,tail,val);
    }
    else if(nodes<k)
    {
        cout<<"Not Posiible Total Nodes= "<<nodes<<endl;
    }
    else if(k==1)
    {
        val=head->data-1;
        head=insertAtHead(head,tail,val);
    }
    else
    {
        val=99;
        insertAtNpos(head,tail,k,val);
    }
    displayForward(head,tail);
    displayReverse(head,tail);
    head=delete1(head,tail,100);
    displayForward(head,tail);
    displayReverse(head,tail);
    return 0;
}