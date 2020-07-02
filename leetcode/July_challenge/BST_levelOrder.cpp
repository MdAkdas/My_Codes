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
class Solution {
public:
    int height(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
        int lh = height(root->left);
        int rh = height(root->right);
        
        return max(lh,rh)+1;
    }
    void printKlevel(TreeNode* root,int k,vector<int>&a)
    {
        if(root==NULL)
            return;
        
        if(k==1)
        {
            //cerr<<root->val;
            a.push_back(root->val);
            return;
        }
        printKlevel(root->left,k-1,a);
        printKlevel(root->right,k-1,a);
        return ;
    }
    vector<vector<int>> printAllLevel(TreeNode* root)
    {
        int h = height(root);
        vector<vector<int>> v;
        
        for(int i=h;i>=1;i--)
        {
            
            vector<int>a;
            printKlevel(root,i,a);
            
            if(a.size()>0)
            v.push_back(a);
        }
        return v;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        return printAllLevel(root);
    }
};