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

bool comp(pair<int,int>a,pair<int,int>b)
{
	return (pow(a.F,2)+pow(a.S,2)) < (pow(b.F,2)+pow(b.S,2));
}
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
		vector<pair<int,int>>v;
		int a,b;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(mp(a,b));
		}

		for(auto el : v)
		{
			cout<<el.F<<" "<<el.S<<endl;
		}
		sort(v.begin(),v.end(),comp);
		for(int i=0;i<k;i++)
		{
			cout<<v[i].F<<" "<<v[i].S<<endl;
		}

	}
	return 0;
}