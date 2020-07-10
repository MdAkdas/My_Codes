/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) 
    {
        
        if(!head)
            return head;
        
        Node* current = head;

        while(current!=NULL)
        {
        	if(current->child==NULL)
        		current=current->next;

        	else
        	{
        		Node* nextNode= current->next;
        		Node* child=current->child;

        		current->next=child;
        		child->prev=current;
        		current->child=NULL;

        		while(child->next!=NULL)
        			child=child->next;
        		child->next=nextNode;

        		if(nextNode!=NULL)
        			nextNode->prev=child;
        	}
            
        
   		}
   		return head;
    }
};