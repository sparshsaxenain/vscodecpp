#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void insertAtHead(node* &head,int val)
{
    node* n=new node(val);

    n->next=head;
    head=n;
}

int search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    node *head=NULL;
    int choice;
    do
    {
        cout<<"\n\nEnter 1 to insert at tail \nEnter 2 to insert at head \nEnter 3 to search a key \nEnter 4 to display \nEnter 5 to exit \nchoice-: ";
        cin>>choice;
        int value;
        switch(choice)
        {
            case 1:cout<<"\nEnter value-: ";
                   cin>>value;
                   insertAtTail(head,value);
                   break;

            case 2:cout<<"\nEnter value-: ";
                   cin>>value;
                   insertAtHead(head,value);
                   break;
            
            case 3:cout<<"\nEnter the key to search-: ";
                   cin>>value;
                   int a;
                   a=search(head,value);
                   if(a==0)
                   {
                       cout<<"\nNot Found";
                   }
                   else
                   {
                       cout<<"\nFound";
                   } 
                   break;

            case 4:cout<<"\nLinked list-:";
                   display(head);
                   break;

            default:cout<<"\nWrong input";
        }
    } while (choice!=5);

    cout<<"\n\n\n\n\n";
    return 0;
}