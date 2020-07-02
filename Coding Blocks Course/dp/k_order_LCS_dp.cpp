#include<iostream>
#include<cstring>
using namespace std;

int dp[2005][2005][8];
int a[2005],b[2005];
int n,m;

int Klcs(int i,int j,int k)
{
	if(i==n||j==m)
	{
		return 0;
	}

	if(dp[i][j][k]!=-1)
		return dp[i][j][k];
     
     int res=0;
	if(a[i]==b[i])
		res= 1+Klcs(i+1,j+1,k);

	else
	{
		if(k>0)
		{
		 res=1+Klcs(i+1,j+1,k-1);
		 }
		  res=max(res,Klcs(i,j+1,k));
		  res=max(res,Klcs(i+1,j,k));

		

	}
	return dp[i][j][k]=res;

}

int main(int argc, char const *argv[])
{
	memset(dp,-1,sizeof(dp));
	int k;
	cin>>n>>m>>k;
	int a[n],b[m];

	for(int i=0;i<n;i++)
		cin>>a[i];

	for(int i=0;i<m;i++)
		cin>>b[i];

	int ans=Klcs(0,0,k);
	cout<<ans;

	return 0;
}