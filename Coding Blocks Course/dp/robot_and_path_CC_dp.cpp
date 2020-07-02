#include<iostream>
#include<cstring>
using namespace std;

long long mod=1000000007;
int dp[1001][1001];

int Path(int r,int c)
{ 
	if(dp[0][0]==-1)
		return 0;

	for(int i=0;i<c;i++)
	{ 
		if(dp[0][i]==-1)
		break;

		 dp[0][i]=1;
	}

	for(int i=0;i<r;i++)
	{ 
		if(dp[i][0]==-1)
		break;

		 dp[i][0]=1;
	}
   
    for(int i=1;i<r;i++)
    {
    	for(int j=1;j<c;j++)
    	{  if(dp[i][j]==-1)
    		continue;

    		dp[i][j]=0;
            
            if(dp[i][j-1]!=-1)
    			dp[i][j]=dp[i][j-1]%mod;

    		if(dp[i-1][j]!=-1)
    			dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;

    		

    	}
    }
    //  for(int i=0;i<r;i++)
    // {
    // 	for(int j=0;j<c;j++)
    // 		cout<<dp[i][j]<<" ";
    // 	cout<<endl;
    // }

    if(dp[r-1][c-1]==-1)
    	return 0;

    return dp[r-1][c-1];
}

int main()
{ int n,m,p,x,y;
 cin>>n>>m>>p;
 memset(dp,0,sizeof(dp));

  for(int i=0;i<p;i++)
  { cin>>x>>y;
    dp[x-1][y-1]=-1;

  }
  cout<<Path(n,m)<<endl;

}