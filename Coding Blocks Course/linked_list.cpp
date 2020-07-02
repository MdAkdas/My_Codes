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

  int len(node*head)
  { int l=0;
  	while(head!=NULL)
  	{ l++;
  		head=head->next;

  	}
  	return l;
  }
 
  void insertAtHead(node*&head,int data)
  { node*n=new node(data);
  	n->next=head;
  	//(*n).next=head;
  	head=n;

  }
  
  void insertAtTail(node*&head,int data)
  { node*temp=head;
  	while(temp->next!=NULL)
  	{
  		temp=temp->next;
  	}
  	temp->next=new node(data);
  	
  }

  void inserAtMiddle(node*&head,int data,int pos)
  { node*temp=head;

  	if(head==NULL || pos==0)
  	{
  		insertAtHead(head,data);
  	}

  	else if(pos>len(head))
  	{ insertAtTail(head,data);

  	}

  	else
  	{
  		while(--pos)
  		{ temp=temp->next;

  		}
  		node*n=new node(data);
  		n->next=temp->next;
  		temp->next=n;

  	}


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
 	insertAtHead(head,1);
 	insertAtHead(head,3);
 	insertAtHead(head,4);
 	insertAtHead(head,5);
 	insertAtHead(head,10);
 	inserAtMiddle(head,50,1);
 	inserAtMiddle(head,60,4);
 	inserAtMiddle(head,70,0);
 	insertAtTail(head,100);
 	insertAtTail(head,200);

 	
 

 	print(head);

 return 0;
 }