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

void midpoint(node*head)
{ node*slow=head,*fast=head;

    while(fast!=NULL && fast->next!=NULL)
        { fast=fast->next->next;
          slow=slow->next;

      }
      cout<<slow->data<<endl;

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


int main()
{ 

    int t;
    cin>>t;
    while(t--)
    {
        node*head1=NULL,*head2=NULL,*head3=NULL;

        int n1,n2;
        cin>>n1;

        while(n1--)
        {
            int no;
            cin>>no;
            insertAtTail(head1,no);
        }
        cin>>n2;
        while(n2--)
        {
            int no;
            cin>>no;
            insertAtTail(head2,no);
        }
        /*print(head1);
        cout<<endl;
        print(head2);
        cout<<endl;*/
        head3=merge(head1,head2);
        print(head3);
        cout<<endl;

    }
    return 0;
}