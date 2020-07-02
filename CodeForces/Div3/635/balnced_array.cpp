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
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll halfn=n/2;

		if((halfn)%2!=0)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else
		{
			cout<<"YES"<<endl;
			ll evensum=halfn*(halfn+1);
			for(ll i=2;i<=n;i+=2)
			{
				cout<<i<<" ";
			}
			ll oddsum=0;
			for(ll j=1;j<=n-3;j+=2)
			{
				cout<<j<<" ";
				oddsum+=j;

			}

			cout<<(halfn*(halfn+1))-oddsum;
			cout<<endl;
		}
		


	}
	return 0;
}