#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{ int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int dp[n],p;
	//memset(dp,1,sizeof(dp));

	for(int i=0;i<n;i++)
		dp[i]=1;

	for(int i=0;i<n;i++)
	{   int m=0;
		for(int j=0;j<i;j++)
		{
			if(a[j]<=a[i])
			{
				 m =max(m,dp[j]);
			}
		}
		dp[i]=dp[i]+m;
	}
	for(int i=0;i<n;i++)
		cout<<dp[i]<<" ";
	sort(dp,dp+n);
	cout<<dp[n-1]<<endl;


}