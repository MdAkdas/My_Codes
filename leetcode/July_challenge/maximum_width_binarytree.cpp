#include<iostream>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution 
{
	long long int ans=0;

	void solve(TreeNode *root)
	{
		if(!root)
        return; 
    
    queue<pair<TreeNode*,unsigned long long int>> q;  
    

    q.push({root,1}); 
    // if root at some id then its left and right child will be at 2*id and 2*id+1;
    
    while(!q.empty())
    {

    	long long int curr_size=q.size(),start=0,end=0;

    	for(int i=0;i<curr_size;i++)
    	{

    		pair<TreeNode*,unsigned long long int> curr_node=q.front();
    		q.pop();
    		if(i==0)
    		{
    			start=curr_node.second;
    		}
    		if(i==curr_size-1)
    		{
    			end=curr_node.second;
                ans=max(ans,end-start+1); // update my answer
            }
            if(curr_node.first->left)
                q.push({curr_node.first->left,2*curr_node.second}); //2*id
            
            if(curr_node.first->right)
                q.push({curr_node.first->right,2*curr_node.second+1}); //2*id+1
        }
    }
}

int widthOfBinaryTree(TreeNode* root) 
{
	solve(root);
	return ans;
}
};