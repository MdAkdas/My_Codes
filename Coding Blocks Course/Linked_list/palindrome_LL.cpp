#include<iostream>
#include<unordered_map>
#include<stack>
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

bool palindrome(node* head)
{ 
    node* slow= head; 
    stack <int> s; 

    while(slow != NULL)
    { 
        s.push(slow->data); 
        slow = slow->next; 
    } 

    
    while(head != NULL )
    { 
        int i=s.top(); 
        s.pop(); 

        if(head -> data != i)
        { 
            return false; 
        } 
        head=head->next; 
    } 
    return true; 
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
    if(palindrome(head))
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

    return 0;
}