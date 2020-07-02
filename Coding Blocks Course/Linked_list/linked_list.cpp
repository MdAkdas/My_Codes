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
   //Insertion at head, in middle and at tail

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
  { node*temp=head;
  	node*prev=NULL;
  	if(head==NULL)
  		return;

  	while(temp->next!=NULL)
  	{prev=temp;
  		temp=temp->next;

  	}
  	
  	delete temp;
  	prev->next=NULL;
  	return;

  }

  void deleteAtPos(node*&head,int pos)
   { int l=len(head);

   	if(pos==1)
   		deleteHead(head);
   	else if(pos==l)
   		deleteTail(head);

   	else
   	{ node*temp=head,*prev;

   		while(pos--)
   		{    prev=temp;
   			temp=temp->next;

   		}
   		prev->next=temp->next;
   		delete temp;

   	}
   }

   void search(node*head,int key)
   { while(head!=NULL)
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




 int main()
 { node*head=NULL;
 	int ch,data,pos;

 	while(1)
 	{ cout<<"0. Print the linked list \n";
 	  cout<<"1. Insert at head \n";
 	  cout<<"2. Insert at a position \n";
 	  cout<<"3. Insert at tail \n";
 	  cout<<"4. delete head \n";
 	  cout<<"5. delete at a position \n";
 	  cout<<"6. delete at tail \n";
      cout<<"7. search a key. \n";

 	  cout<<"8. EXIT! \n";
 	  cin>>ch;

 	  switch(ch)
 	  { case 0 : print(head);cout<<endl;
 	  	         break;

 	  	case 1: cout<<"Enter data.\n";
 	            cin>>data;
 	            insertAtHead(head,data);
 	            print(head);cout<<endl;
 	             break;
        
        case 2: cout<<"Enter data and position.\n";
 	            cin>>data>>pos;
 	            inserAtMiddle(head,data,pos);
 	            print(head);cout<<endl;
 	             break;  

 	    case 3: cout<<"Enter data.\n";
 	            cin>>data;
 	            insertAtTail(head,data);
 	           print(head);cout<<endl;
 	            break;
        
        case 4: deleteHead(head);
               print(head);cout<<endl;
                break;
 	                 
        case 5: cout<<"Enter position.\n";
                 cin>>pos;
                deleteAtPos(head,pos);
                print(head);cout<<endl;
                break;

        case 6: deleteTail(head);
               print(head);cout<<endl;
                break; 

         case 7: cout<<"Enter key.\n";
                 cin>>pos;
                search(head,pos);
                break;

        case 8: exit(0);               

 	  }
 	}
 	  return 0;

 }