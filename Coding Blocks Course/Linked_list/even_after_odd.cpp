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

int len(node*head)
{ 
    int l=0;
    while(head!=NULL)
    { 
        l++;
        head=head->next;
    }
    return l;
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

node* evenAfterOdd(node* head)
{
    node*evenStart=NULL,*evenEnd=NULL;
    node*oddStart=NULL,*oddEnd=NULL;
    node*curr=head;

    while(curr!=NULL)
    {
        int val=curr->data;

        if(val%2==0)
        {
            if(evenStart==NULL)
            {
                evenStart=curr;
                evenEnd=evenStart;
            }
            else
            {
                evenEnd->next=curr;
                evenEnd=evenEnd->next;
            }
        }
        else
        {
            if(oddStart==NULL)
            {
                oddStart=curr;
                oddEnd=oddStart;
            }
            else
            {
                oddEnd->next=curr;
                oddEnd=oddEnd->next;
            }
        }
        curr=curr->next;
    }
    ///////////////////////
    if(evenStart==NULL)
    {
        return oddStart;
    }
    else if(oddStart==NULL)  //why imp?
    {
        return evenStart;
    }
    ///////////////////////
    
    oddEnd->next=evenStart;
    evenEnd->next=NULL;
    return oddStart;

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
    /*print(head);
    cout<<endl;*/
    head=evenAfterOdd(head);
    print(head);
    cout<<endl;
    
    return 0;
}