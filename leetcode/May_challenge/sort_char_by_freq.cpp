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

static bool comp(pair<char,int>a,pair<char,int>b)
{
	return a.second>b.second;
}


int main() 
{  
	ios_base::sync_with_stdio(false);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		map<char,int>mp;
		for(auto se : s)
			mp[se]++;

		vector<pair<char,int>>v(mp.begin(),mp.end());
		sort(v.begin(),v.end(),comp);

		string s2;
		for(auto m : v)
		{
			while(m.second--)
			{
				s2+=m.first;
			}
		}
		cout<<s2;

	}
	return 0;
}
