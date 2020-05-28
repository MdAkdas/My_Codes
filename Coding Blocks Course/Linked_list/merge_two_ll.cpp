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
  
  void print(node*head)
  {
   while(head!=NULL)
   {
   	cout<<head->data<<" -> ";
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
  { node*c;
    if(a==NULL)
      return b;
    else if(b==NULL)
      return a;
   
   //compare value
    if(a->data < b->data)
    { c=a;
      c->next=merge(a->next,b);

    }
    else
    { c=b;
      c->next=merge(a,b->next);

    }
    return c;

  }


  int main()
 { node*head=NULL,*head2=NULL,*head3=NULL;
 	insertAtHead(head,1000);
 	insertAtHead(head,900);
 	insertAtHead(head,800);
 	insertAtHead(head,700);
 	insertAtHead(head,600);
 	insertAtHead(head,500);
 	insertAtHead(head2,995);
  insertAtHead(head2,885);
  insertAtHead(head2,775);
  insertAtHead(head2,665);
  insertAtHead(head2,555);
  insertAtHead(head2,451);
  insertAtHead(head2,250);
 	//insertAtHead(head,180);
 	print(head);
 	cout<<endl;
  print(head2);
  cout<<endl;
  head3=merge(head,head2);

    print(head3);
  cout<<endl;
 	
 	return 0;
 }