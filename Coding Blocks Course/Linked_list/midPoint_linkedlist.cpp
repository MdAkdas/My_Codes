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
  node* midpoint(node*head)
  { node*slow=head,*fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL)
    { fast=fast->next->next;
    	slow=slow->next;

    }
    return slow;

  }
  void print(node*head)
  {
   while(head!=NULL)
   {
   	cout<<head->data<<" -> ";
   	head=head->next;
   }

  }


  int main()
 { node*head=NULL;
 	insertAtHead(head,10);
 	insertAtHead(head,20);
 	insertAtHead(head,30);
 	insertAtHead(head,40);
 	insertAtHead(head,50);
 	insertAtHead(head,60);
 	//insertAtHead(head,70);
 	//insertAtHead(head,180);
 	print(head);
 	cout<<endl;
 	node*c=midpoint(head);
 	cout<<c->data<<endl;
 	return 0;
 }