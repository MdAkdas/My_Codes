/*Given inorder and postorder traversal of a tree, construct the binary tree.
*/
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
    int i;
    TreeNode* buildTreeUtil(vector<int>& inorder, vector<int>& postorder,int s,int e)
    {
        if(s>e || i<0)
            return NULL;
        //cerr<<i<<endl;
        TreeNode *root = new TreeNode(postorder[i]);
        int index=-1;
        
        for(int j=s;j<=e;j++)
        {
            if(inorder[j]==postorder[i])
            {
                index = j;
                break;
            }
        }
        i--;
        root->right = buildTreeUtil(inorder,postorder,index+1,e);        
        root->left = buildTreeUtil(inorder,postorder,s,index-1);
     
        return root;
        
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        i=n-1;
        return buildTreeUtil(inorder,postorder,0,n-1);
        
    }
};

            //SECOND SOLUTION
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
    TreeNode *buildTreeUtil(vector<int>&inorder, int inStart, int inEnd,
        vector<int>&postorder, int postStart, int postEnd) 
    {
        if (inStart > inEnd || postStart > postEnd)
            return NULL;
 
        int rootValue = postorder[postEnd];
        TreeNode *root = new TreeNode(rootValue);
 
        int k = 0;
        for (int i = 0; i < inorder.size(); i++) 
        {
            if (inorder[i] == rootValue)
            {
                k = i;
                break;
            }
    }
 
    root->left = buildTreeUtil(inorder, inStart, k - 1, postorder, postStart,postStart + k - (inStart + 1));
    // Becuase k is not the length, it it need to -(inStart+1) to get the length
    root->right = buildTreeUtil(inorder, k + 1, inEnd, postorder, postStart + k- inStart, postEnd - 1);
    // postStart+k-inStart = postStart+k-(inStart+1) +1
 
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = inorder.size();
        return buildTreeUtil(inorder,0,n-1,postorder,0,n-1);
        
    }
};