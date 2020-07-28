#include<iostream>
#include<unordered_map>
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

node* cycleBreak(node*head)
{
    unordered_map<int,node*>mp;
    node*pre=head;
    node*temp=head;

    while(head!=NULL)
    {
        if(mp.find(head->data)!=mp.end())
        {
            break;
        }
        mp[head->data]=head;
        pre=head;
        head=head->next;
    }
    pre->next=NULL;
    return temp;
}

int main()
{ 
    node*head=NULL;
    int n;
    cin>>n;
   
    while(n!=-1)
    {
        insertAtTail(head,n);
        cin>>n;
    }
    head=cycleBreak(head);
    print(head);

    return 0;
}