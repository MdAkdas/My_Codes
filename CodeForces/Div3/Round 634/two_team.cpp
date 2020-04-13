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
int min(int a, int b)
{
	if(a<b)
		return  a;
	else
		return b;

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
		ll a[n];
		map<int,int>frq,dist;
		frq.clear(),dist.clear();

		rep(i,n)
		{
			cin>>a[i];

			frq[a[i]]++;
			dist[a[i]]=1;
		}

		ll maxFreq=0;

		for(auto m : frq)
		{
			if(maxFreq<m.second)
				maxFreq=m.second;
		}

		//cout<<"maxFreq freq "<<maxFreq<<endl;
		//cout<<"distn "<<dist.size()<<endl;
		int dis=dist.size()-1;

		//cout<<"distn "<<dis<<endl;

		int mn1=0,mn2=0;
		mn1= min(dis,maxFreq);

		//cout<<"mn1 "<<mn1<<endl;

		dis+=1;
		maxFreq-=1;

		mn2 = min(dis,maxFreq);
		//cout<<"mn2 "<<mn2<<endl;

		cout<<max(mn1,mn2)<<endl;


	}
	return 0;
}