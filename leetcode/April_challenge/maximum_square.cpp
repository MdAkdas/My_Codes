 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"


const int inf=(int)1e9;


int main() 
{  
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,n,m,i,j,p,q,r,flag=0,temp;
	cin>>t;

	while(t--)
	{
		cin>>m>>n;

		int a[m][n],dp[m][n];
		memset(dp,0,sizeof(dp));

		rep(i,m)
		{
			rep(j,n)
			{
				cin>>a[i][j];
				dp[i][j]=a[i][j];
			}
		}
		int maxm=0;
		for(i=1;i<m;i++)
		{
			for(j=1;j<n;j++)
			{
				//cout<<dp[i][j]<<" ";
				//cout<<"i "<<i<<" j "<<j<<endl;

				if(dp[i][j]==1)
				{
					if(dp[i-1][j]!=0 && dp[i][j-1]!=0 && dp[i-1][j-1]!=0)
					dp[i][j]=dp[i-1][j-1]+1;
				}
				maxm=max(dp[i][j],maxm);
			}
			cout<<endl;
		}
		rep(i,m)
		{
			rep(j,n)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}

		cout<<maxm*maxm<<endl;

		
	}
	return 0;
}