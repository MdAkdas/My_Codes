/* In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.

 

Example 1:


Input: root = [1,2,3,4], x = 4, y = 3
Output: false */

//Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
    int find_Hight(TreeNode *curr, int &Parent, int value, int height)
    {
        if (!curr)
            return 0;

        if (curr->val == value)
            return height;

        Parent = curr->val;
        int left = find_Hight(curr->left, Parent, value, height + 1);
        if (left)
            return left;

        Parent = curr->val;
        int right = find_Hight(curr->right, Parent, value, height + 1);
        return right;
    }

public:
    bool isCousins(TreeNode *root, int x, int y)
    {
        if (root->val == x || root->val == y)
            return false;

        int xParent = -1;
        int xHght = find_Hight(root, xParent, x, 0);

        int yParent = -1;
        int yHght = find_Hight(root, yParent, y, 0);

        if (xParent != yParent && xHght == yHght)
            return true;
        else
            return false;
    }
};