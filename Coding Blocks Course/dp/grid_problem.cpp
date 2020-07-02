#include<iostream>
using namespace std;

int minCost(int grid[][100],int m, int n)
{ int r,c;
	int dp[100][100]={};
	dp[0][0]=grid[0][0];

	//minimum first row
	for(int i=1;i<n;i++) dp[0][i]=dp[0][i-1]+grid[0][i];

	//minimum first column
	for(int i=0;i<m;i++) dp[i][0]=dp[i-1][0]+grid[i][0];

	for(r=1;r<m;r++)
	{
		for(c=1;c<n;c++)
		{
			dp[r][c]=min(dp[r-1][c],dp[r][c-1])+grid[r][c];
		}
	} 
return dp[m-1][n-1];	

}

int main()
 { //int grid[100][100]={ {1,2,3},
//                         {4,8,2},
//                         {1,5,3} };
                      int grid[100][100] = {{1,2,5},{3,2,1}};
      int ans=minCost(grid,2,3);
      cout<<ans<<endl;                  




}