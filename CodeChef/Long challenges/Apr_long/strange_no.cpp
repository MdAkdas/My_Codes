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

int pFactors(ll n) 
{ 
	ll count=0;
	
	while (n % 2 == 0) 
	{ 
		//cout << 2 << " "; 
		count++;
		n = n/2; 
	} 

	
	for (int i = 3; i <= sqrt(n); i = i + 2) 
	{ 
		
		while (n % i == 0) 
		{ 
			//cout << i << " "; 
			count++;
			n = n/i; 
		} 
	} 

	
	if (n > 2) 
	 count++;
		
	
	return count;
} 

int main() 
{  
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp,x,k;
	cin>>t;
	while(t--)
	{
		cin>>x>>k;

		if(pFactors(x)>=k)
		{
			cout<<"1"<<endl;
		}
		else
			cout<<"0"<<endl;
  
	}
	return 0;
}