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

int len(node*head)
{ 
    int l=0;
    while(head!=NULL)
    { 
        l++;
        head=head->next;
    }
    return l;
}

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

node* kthElement(node*head,int k)
{
    node*slow=head;
    node*fast=head;

    while(k--   )
    {
        fast=fast->next;
    }

    while(fast!=NULL)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

node* appendK(node* head,int k)
{
    int l=len(head);
    if(k>n)
    k=k%n;

    node*preK_Node = kthElement(head,k+1);
    node* startK_Node = preK_Node->next;
    preK_Node->next=NULL;

    node*temp=startK_Node;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head;

    return startK_Node;
}

int main()
{ 
    node*head=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int no;
        cin>>no;
        insertAtTail(head,no);
    }
    // print(head);
    // cout<<endl;
    int k;
    cin>>k;
    node*kthNode = appendK(head,k);
    print(kthNode);
    return 0;
}