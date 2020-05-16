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
	ll t,n,i,k,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n],b[n];

		ll suma=0,sumb=0;
		rep(i,n)
		{
			cin>>a[i];
			
		}
		bool bT[n];

		rep(i,n)
		{
			cin>>b[i];
			bT[i]=true;
		}

		sort(a,a+n);
		sort(b,b+n,greater<int>());

		for(int i=0;i<n;i++)
		{
			if(k==0)
				break;

			for(int j=0;j<n;j++)
			{
				if(a[i]<b[j] && bT[j]==true)
				{
					//cout<<a[i]<<" swap "<<b[j]<<endl;
					swap(a[i],b[i]);
					k--;
					bT[j]=false;
					break;
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			suma+=a[i];
		}
		cout<<suma<<endl;

	}
	return 0;
}