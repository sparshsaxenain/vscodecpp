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

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    Node * head=new Node(1);
    Node * temp=head;
    for(int i=2;i<=n;i++)
    {
        Node * p=new Node(i);
        temp->next=p;
        temp=temp->next;
    }
    temp->next=head;
    temp=temp->next;

    int c=n-1;
    Node * temp1=temp->next;
    while(c--)
    {
        int m=k-2;
        while(m--)
        {
            temp1=temp1->next;
            temp=temp->next;
        }
        temp->next=temp1->next;
        temp1=temp1->next->next;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    //display
    /*do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<"head"<<endl;*/
    return 0;
}