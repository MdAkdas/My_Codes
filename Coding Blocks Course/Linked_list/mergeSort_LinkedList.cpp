#include<iostream>
using namespace std;

 class node
 { public:
 	int data;
 	node*next;

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

  node* midpoint(node*head)
  { node*slow=head,*fast=head->next;
    
    while(fast!=NULL && fast->next!=NULL)
    { fast=fast->next->next;
      slow=slow->next;

    }
    return slow;

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

  node* mergeSort(node*head)
  { //base case
   if(head==NULL || head->next==NULL)
      return head;   

   //Rec case
   //Breaking into two Linked list
    node*mid=midpoint(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;

    //recursivily sort
    a=mergeSort(a);
    b=mergeSort(b);

    //merge a and b

    node*c=merge(a,b);

    return c;


  }


  int main()
 { node*head=NULL,*head2=NULL,*head3=NULL;
 	insertAtHead(head,1000);
  insertAtHead(head,110);
 	insertAtHead(head,900);
  insertAtHead(head,90);
 	insertAtHead(head,800);
  insertAtHead(head,840);
 	insertAtHead(head,700);
  insertAtHead(head,70);
 	insertAtHead(head,600);
  insertAtHead(head,7500);
 	insertAtHead(head,505); 
 	
 	//insertAtHead(head,180);
 	print(head);
 	cout<<endl;
  //print(head2);
  cout<<endl;
  head3=mergeSort(head);

  cout<<"After sorting..\n";
    print(head3);
  cout<<endl;
 	
 	return 0;
 }