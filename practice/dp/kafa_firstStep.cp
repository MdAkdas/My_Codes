 /******************************************
* AUTHOR : MD AKDAS AHMAD 
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

bool comp(int a,int b)
{
	return a>b;
}


int main() 
{  
	ios_base::sync_with_stdio(false);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>n;
	ll a[n];
	rep(i,n)
	{
		cin>>a[i];
	}
	vector<int>dp(n,1);

	rep(i,n-1)
	{
		if(a[i+1]>=a[i])
		{
			dp[i+1]+=dp[i];
		}
	}
	sort(dp.begin(),dp.end(),comp);
	/*rep(i,n)
	{
		cout<<dp[i]<<" ";
	}*/
	cout<<dp[0]<<endl;
	return 0;
}