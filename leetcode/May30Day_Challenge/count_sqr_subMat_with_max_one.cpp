/*Que-Count Square Submatrices with All Ones
Given a m * n matrix of ones and zeros, return how many square submatrices have all ones.

 

Example 1:

Input: matrix =
[
  [0,1,1,1],
  [1,1,1,1],
  [0,1,1,1]
]
Output: 15
Explanation: 
There are 10 squares of side 1.
There are 4 squares of side 2.
There is  1 square of side 3.
Total number of squares = 10 + 4 + 1 = 15.*/

class Solution {
public:
    int countSquares(vector<vector<int>>& a) {
        int m = a.size();
        int n = a[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(a[i][j]==0)
                    continue;
                
                if(i==0 || j==0)
                    count++;
                
                else
                {
                    a[i][j]=min(a[i][j-1],min(a[i-1][j],a[i-1][j-1]))+1;
                    count+=a[i][j];
                }
            }
        }
	return count;
        
    }
};