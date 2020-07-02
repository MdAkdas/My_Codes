#include<iostream>
#include<cstring>
using namespace std;

int solveCellProblem(int n,int x,int y,int z)
{ int dp[n+1]={0};
  dp[0]=0;
  dp[1]=0;

  for(int i=2;i<=n;i++)
  {
  	if(i%2==0)
  	{
  		dp[i]=min(dp[i/2]+x,dp[i-1]+y);
  	}
  	else
  	{ dp[i]=min(dp[i-1]+y,dp[(i+1)/2]+z+x);

  	}
  }
  return dp[n];

}

int main()
{
  int n,x,y,z;
  cin>>n>>x>>y>>z;
  cout<<solveCellProblem(n,x,y,z)<<endl;

}