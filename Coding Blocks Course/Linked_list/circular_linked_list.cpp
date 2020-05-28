#include <iostream>
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

  void insert(node*&head,int data)
  {
  	node*n=new node(data);
  	n->next=head;

  	node*temp=head;
   if(head!=NULL)
   { 
  	  while(temp->next!=head)
  	  {
  	  	temp=temp->next;
  	  }
  	  temp->next=n;
  	   
   }
   else
   	n->next=n;

   head=n;
}

  void print(node*head)
  {
  	node*temp=head;

  	/*if(head=NULL)
  	{
  		cout<<"Linked List is empty.\n";
  	    return;
  	} */
  	
  	
     while(temp->next!=head)
     {
     	cout<<temp->data<<"->";
     	temp=temp->next;
     }
     cout<<temp->data;
    

  }

  node *getNode(node*head,int data)
  {
  	node*temp=head;
    while(temp->next!=head)
    {
    	if(temp->data==data)
    		return temp;
    	temp=temp->next;
    }
    if(temp->data==data)
    	return temp;

    else
    	return NULL;

  }

 void deleteList(node*&head,int data)
 { 
 	node*del=getNode(head,data);
 	if(del==NULL)
 		cout<<"data not present in the linked list.\n";

 	if(head==del)
 	{
 		head=head->next;
 		delete del;
 	}
 	node* temp=head;

 	 while(temp->next!=del)
 	 {temp=temp->next;

 	 }
 	 temp->next=del->next;
 	 delete del;

 }


  int main(int argc, char const *argv[])
  {
  	node* head=NULL;
    
     insert(head,5);
     insert(head,3);
     insert(head,15);
     insert(head,45);
     insert(head,25);
     insert(head,75);
     insert(head,55);
     print(head);
     deleteList(head,45);
     cout<<endl;
     print(head);

  	return 0;
  }