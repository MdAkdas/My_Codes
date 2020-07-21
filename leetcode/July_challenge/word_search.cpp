/*Given a 2D board and a word, find if the word exists in the grid.

The word can be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring. The same letter cell may not be used more than once.

Example:

board =
[
  ['A','B','C','E'],
  ['S','F','C','S'],
  ['A','D','E','E']
]

Given word = "ABCCED", return true.
Given word = "SEE", return true.
Given word = "ABCB", return false.
*/

class Solution {
    
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]==word[0] && dfs(board,i,j,0,word))
                    return true;
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>& board,int i,int j, int curr,string &word)
    {
        if(curr==word.size())
            return true;
        
        if(i<0 || j<0 || i>=board.size() || j>=board[0].size() || board[i][j]!=word[curr])
            return false;
        
        char temp=board[i][j];
        board[i][j]='#';
        
        bool ans = dfs(board,i,j+1,curr+1,word) || dfs(board,i+1,j,curr+1,word) || 
            dfs(board,i,j-1,curr+1,word) ||dfs(board,i-1,j,curr+1,word);
        
        board[i][j]=temp;
        
        return ans;
        
    }
};