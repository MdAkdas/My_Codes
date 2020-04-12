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
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int>v;
		for(int i=0;i<n;i++)
		{
			cin>>r;
			v.pb(r);
		}
		sort(v.begin(),v.end(),greater<int>());
		while(1)
		{
			if(v.size()==1)
			break;
			
			
			if(v[0]>=v[1])
			{

				v[0]=v[0]-v[1];
				v[1]=0;
			}
			sort(v.begin(),v.end(),greater<int>());
			// for(auto el : v)
			// 	cout<<el<<" ";
			// cout<<"size"<<v.size();
			// cout<<endl;
			
			
			if(v.back()==0)
				v.erase(v.end()-1);
			// for(auto el : v)
			// 	cout<<el<<" ";
			// cout<<"size"<<v.size();
			// cout<<endl;


		}
		cout<<v[0]<<endl;
	}
	return 0;
}
/*1
6
2 7 4 1 8 1
O/P
1*/