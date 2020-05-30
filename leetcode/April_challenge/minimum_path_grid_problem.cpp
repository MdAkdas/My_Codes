class Solution {
public:
    
	int minCost(vector<vector<int>>grid,int n, int m)
	{   int r,c;
	    //int dp[100][100]={};
	    
	    vector<vector<int>> dp(n, vector<int>(m,0));
	    dp[0][0]=grid[0][0];

	    //minimum first row
	    for(int i=1;i<m;i++)
	        dp[0][i]=dp[0][i-1]+grid[0][i];

	    //minimum first column
	    for(int i=1;i<n;i++) 
	        dp[i][0]=dp[i-1][0]+grid[i][0];

	    for(r=1;r<n;r++)
	    {
	        for(c=1;c<m;c++)
	        {
	            dp[r][c]=min(dp[r-1][c],dp[r][c-1])+grid[r][c];
	        }
	    } 
	    return dp[n-1][m-1];	
	}

	int minPathSum(vector<vector<int>>& grid) 
	{   
	    int n = grid.size();
	    int m = grid[0].size();
	        int ans=minCost(grid,n,m);
	        return ans;
	        
	}
};