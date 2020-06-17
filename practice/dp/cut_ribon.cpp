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
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"


const int inf=(int)1e9;
int  solve(int n,int a,int b,int c,int *dp)
{
	//cout<<n<<" "<<a<<b<<c<<endl;
	//dp[a]=1,dp[b]=1,dp[c]=1;

	int x,y,z;
	for(int i=1;i<=n;i++)

	{

		x=y=z=-1;



		if(i>=a)

			x=dp[i-a];

		if(i>=b)

			y=dp[i-b];

		if(i>=c)

			z=dp[i-c];

		if(x==-1 && y==-1 && z==-1)

			dp[i]=-1;

		else

			dp[i]=max(max(x,y),z)+1;

	}
	
	//cout<<"n "<<dp[n]<<endl;
	return dp[n];
}


int main() 
{  
	ios_base::sync_with_stdio(false);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	int a,b,c;
	cin>>n>>a>>b>>c;

	int dp[n+1];
	memset(dp,0,sizeof(dp));
	
	cout<<solve(n,a,b,c,dp)<<endl;
	// rep(i,n+1)
	// {
	// 	cout<<dp[i]<<" ";
	// }
	return 0;
}