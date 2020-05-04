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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t,n,k,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;

		int a[n+1];
		a[0]=INT_MAX;
		rep1(i,n)
		{
			cin>>a[i];
		}
		int count=0;

		rep1(i,n)
		{
			//cout<<"i "<<i<<" a[i] "<<a[i]<<endl;
			if(a[i]==i)
				count++;
		}
		if((n-count)%4!=0)
		{
			cout<<"-1"<<endl;
		}
		else
		{	int v1=n,v2=n-1;
			cout<<n/2<<endl;
			for(int i=1;i<=n/2;i++,v1-=2,v2-=2)
			{
				cout<<v1<<" "<<i<<" "<<v2<<endl;
				cout<<v1<<" "<<++i<<" "<<v2<<endl;
			}
		}
		//cout<<endl;
	}

	return 0;
}