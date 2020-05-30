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
		//cout<<"hi"<<endl;
		ll k;
		cin>>n>>k;

		if(k>n)
		{
			cout<<"NO"<<endl;
			continue;
		}
		else if(n==k)
		{
			cout<<"YES"<<endl;
			for(ll i=1;i<=k;i++)
			{
				cout<<"1"<<" ";
			}
			cout<<endl;
			continue;
		}

		if(n%2==0 && k%2==0)
		{
			if(n<2*k)
			{
				cout<<"YES"<<endl;
				cout<<n-(k-1)<<" ";
				for(ll i=1;i<=k-1;i++)
				cout<<"1"<<" ";
				cout<<endl;
			}
			else
			{
				cout<<"YES"<<endl;
				cout<<n-(k-1)*2<<" ";
				for(ll i=1;i<=k-1;i++)
					cout<<"2"<<" ";
				cout<<endl;

			}
		}
		else if(n%2==0 && k%2!=0)
		{
			if(n<2*k)
				cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
				cout<<n-(k-1)*2<<" ";
				for(ll i=1;i<=k-1;i++)
					cout<<"2"<<" ";
				cout<<endl;

			}
		}
		else if(n%2!=0 && k%2==0)
		{
				cout<<"NO"<<endl;

		}
		else if(n%2!=0 && k%2!=0)
		{

				cout<<"YES"<<endl;
				cout<<n-(k-1)<<" ";
				for(ll i=1;i<=k-1;i++)
					cout<<"1"<<" ";
				cout<<endl;

			
		}

	}
	return 0;
}