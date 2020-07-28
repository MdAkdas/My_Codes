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

//Insertion at head, in middle and at tail
void insertAtHead(node*&head,int data)
{ 
    node*n=new node(data);
    n->next=head;
  	//(*n).next=head;
    head=n;
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

void inserAtMiddle(node*&head,int data,int pos)
{ 
    node*temp=head;

    if(head==NULL || pos==0)
    {
        insertAtHead(head,data);
    }

    else if(pos>len(head))
    { 
        insertAtTail(head,data);

    }

    else
    {
        while(--pos)
        {  
            temp=temp->next;

        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;

    }
}

void deleteHead(node*&head)
{  
    if(head==NULL)
    return;

    node*temp=head;
    head=head->next;
    delete temp;
    return;
}

void deleteTail(node*&head)
{ 
    node*temp=head;
    node*prev=NULL;
    if(head==NULL)
    return;

    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;

    }

    delete temp;
    prev->next=NULL;
    return;
}

void deleteAtPos(node*&head,int pos)
{ 
    int l=len(head);

    if(pos==1)
    deleteHead(head);
    else if(pos==l)
     deleteTail(head);

    else
    { 
        node*temp=head,*prev;

        while(pos--)
        {    
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        delete temp;

    }
}

void search(node*head,int key)
{ 
    while(head!=NULL)
    {
        if(head->data==key)
        {
            cout<<"Key is present.\n";
            return;
        }
        head=head->next;
    }
    cout<<"Key is not present.\n";
    return;
}

void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" -> ";
        head=head->next;
    }
}

node* kthElement(node*head,int k)
{
    node*slow=head;
    node*fast=head;

    while(k--)
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

int main()
{ 
    node*head=NULL;

    int no;
    cin>>no;
    while(no!=-1)
    {
        insertAtTail(head,no);
        cin>>no;
    }
    // print(head);
    // cout<<endl;
    int k;
    cin>>k;
    node*kthEle = kthElement(head,k);
    cout<<kthEle->data<<endl;

    return 0;
}