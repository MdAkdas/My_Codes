 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(ll i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

#define N1 1000000009

const int inf=(int)1e9;

ll a[N][N];
bool visited[N][N];
ll strength=0;
ll c_size=0;

void initialize(int n,int m)
{
	for (ll i = 0; i <=n+1; i++)
	{
		for(ll j =0;j<=m+1;j++)
		{
			a[i][j]=0;
			visited[i][j]=0;
		}
	}
}
void print(int n,int m)
{
	for (ll i = 0; i <=n+1; i++)
	{
		for(ll j =0;j<=m+1;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}

bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.second == b.second)
		return a.first < b.first;
	else
		return a.second>b.second;
}

void mayhem_again(ll a[][N], ll i, ll j)
{
	if(a[i][j])
	{
		if(a[i][j]!=strength)
			return;

		c_size+=1;
		
		visited[i][j]=1;
		a[i][j]=0;

		mayhem_again(a,i+1,j);
		mayhem_again(a,i,j+1);
		mayhem_again(a,i-1,j);
		mayhem_again(a,i,j-1);
	}

}

void floodFill_helper(ll a[][N],ll n,ll m)
{
	
	vector<pair<ll,ll>>vp;
	pair<ll,ll>p;
	rep1(i,n)
	{
		rep1(j,m)
		{
			c_size=0;
			if(!visited[i][j])
			{
				strength = a[i][j];
				mayhem_again(a,i,j);
				p = make_pair(strength,c_size);
				vp.push_back(p);
			}
			
		}

		
	}
	sort(vp.begin(),vp.end(),comp);
	cout<<vp[0].first<<" "<<vp[0].second;

}

int main() 
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,i,j,p,q,r,flag=0,temp;
	ll m,n;
	cin>>n>>m;
	initialize(n,m);
	rep1(i,n)
	{
		rep1(j,m)
		cin>>a[i][j];
	}
	
	floodFill_helper(a,n,m);

	return 0;
}