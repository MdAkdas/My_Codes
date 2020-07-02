 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
	cin.tie(NULL);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>p;
		ll n=p/2;

		ll ans=0;
		ans= (n*(n+1)*(2*n+1))/6;

		cout<<ans*8<<endl;


   

  

	}
	return 0;
}