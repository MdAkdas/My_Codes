#include<iostream>
using namespace std;

class node
{ public:
  int data;
  node* next;

  node(int d)
  {
     data=d;
     next=NULL;
 }

};

void insertAtHead(node*&head,int data)
{ node*n=new node(data);
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

void print(node*head)
{
 while(head!=NULL)
 {
    cout<<head->data<<" ";
    head=head->next;
}

}

node* midPoint(node* head)
{
    if(head==NULL || head->next==NULL)
        return head;

    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
  node* merge(node*a,node*b)
  { 

    if(a==NULL)
        return b;

    else if(b==NULL)
        return a;

    node*c;

    //compare value
    if(a->data < b->data)
    { 
        c=a;
        c->next=merge(a->next,b);
    }
    else
    { 
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}

node* merge_sort(node*head)
{
    if(head==NULL || head->next==NULL)
        return head;

    node*mid = midPoint(head);
    node*a=head;

    node*b=mid->next;
    mid->next=NULL;

    a=merge_sort(a);
    b=merge_sort(b);

    node*c=merge(a,b);
    return c;
}


int main()
{ 

    int t;
    cin>>t;
    while(t--)
    {
        node*head1=NULL;

        int n1;
        cin>>n1;

        while(n1--)
        {
            int no;
            cin>>no;
            insertAtTail(head1,no);
        }
        
        print(head1);
        cout<<endl;
        
        head1=merge_sort(head1);
        print(head1);
        cout<<endl;

    }
    return 0;
}