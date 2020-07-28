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
        cout<<head->data<<" ";
        head=head->next;
    }
}

node* sortedInsert(node* sorted_head, node* new_node)
{
    // Insertion at first position
    if(sorted_head == NULL or sorted_head->data >= new_node->data)
    {
        new_node->next = sorted_head;
        return new_node ;
    }
    else
    {
        node* curr = sorted_head;
        while(curr->next != NULL and curr->next->data < new_node->data)
            curr = curr->next;
        new_node->next = curr->next;
        curr->next = new_node;
    }
    return sorted_head;
}

node* insertionSortLinkedList(node*&head)
{
    node* curr = head;
    node* sorted_head = NULL;
    while (curr != NULL)
    {
        node* currNext = curr->next;
        sorted_head = sortedInsert(sorted_head,curr);
        curr = currNext;
    }
    return sorted_head;
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
    head=insertionSortLinkedList(head);
    print(head);
    
    
    return 0;
}