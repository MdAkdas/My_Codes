#include<iostream>
using namespace std;

class node
{ 
public:
    int data;
    node* next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertAtTail(node*&head,int data)
{ 
    if(head==NULL)
    {
        node*temp=new node(data);
        head=temp;
        return;
    }

    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new node(data);
}


void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}


node* k_reverse(node*head,int k)
{
    node*pre=NULL;
    node*curr=head;
    node*nex=NULL;

    int count=0;
    while(curr!=NULL && count<k)
    {
        nex=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nex;
        count++;
    }
    if(nex!=NULL)
    {
        head->next=k_reverse(nex,k);
    }
    return pre;
}


int main()
{ 
    node*head=NULL;
    int n;
    cin>>n;
    int k;
    cin>>k;

    while(n--)
    {
        int no;
        cin>>no;
        insertAtTail(head,no);
    }
    head=k_reverse(head,k);
    print(head);

    return 0;
}