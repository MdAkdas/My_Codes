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


int main() 
{  
	ios_base::sync_with_stdio(false);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,m,i,j,p,q,r,flag=0,temp;
	cin>>n>>m;
	int a[m];
	rep(i,m)
	{
		cin>>a[i];
	}
	sort(a,a+m);
	/*rep(i,m)
	{
		cout<<a[i]<<" ";
	}cout<<endl;*/

	int ans=INT_MAX;
	for(int i=0;i<=m-n;i++)
	{
		ans=min(ans,a[i+n-1]-a[i]);

	}
	cout<<ans<<endl;
	return 0;
}