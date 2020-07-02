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
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		vector<int>even;
		vector<int>odd;
		int sum=0;
		rep(i,n)
		{
			cin>>a[i];
			sum+=a[i];

		}
		//cout<<sum<<endl;
		if(sum%2==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		sort(a,a+n);
		flag=0;
		rep(i,n-1)
		{
			if(a[i+1]-a[i]==1)
			{
				cout<<"YES"<<endl;
				flag=1;
				break;
			}
		}
		if(!flag)
		{
			cout<<"NO"<<endl;
		}

  

	}
	return 0;
}