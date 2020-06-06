/*Invert a binary tree.

Example:

Input:

     4
   /   \
  2     7
 / \   / \
1   3 6   9
Output:

     4
   /   \
  7     2
 / \   / \
9   6 3   1*/

void mirror(struct Node* node)  
{ 
    if (node == NULL)  
        return;  
    else
    { 
        struct Node* temp; 
          
        /* do the subtrees */
        mirror(node->left); 
        mirror(node->right); 
      
        /* swap the pointers in this node */
        temp     = node->left; 
        node->left = node->right; 
        node->right = temp; 
    } 
}