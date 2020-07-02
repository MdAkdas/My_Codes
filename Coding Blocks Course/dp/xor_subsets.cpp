 /******************************************
* AUTHOR : MD AKDAS AHMAD *
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

const int inf=(int)1e9;

ll subsetXor(ll arr[], ll n,ll k) 
{ 
	long long total = 1<<n; 
	ll x=0,max_x=0;

	// Consider all numbers from 0 to 2^n - 1 
	for (long long i=0; i<total; i++) 
	{ 
		long long sum = 0; 

		// Consider binary reprsentation of 
		// current i to decide which elements 
		// to pick. 
		for (int j=0; j<n; j++) 
		{ 
		   	if (i & (1<<j)) 
			{
				x=x xor arr[j]; 
			}
		}
		x=x xor k;

		// Print sum of picked elements. 
		if(x>max_x)
			max_x=x;
		
	} 
	return max_x;
} 


int main() 
{  
   
   ll t,n,k;
   cin>>t;
   while(t--)
   {
   	cin>>n>>k;
   	ll a[n];
   	rep(i,n)
   	cin>>a[i];

   cout<<subsetXor(a,n,k);
   }
 return 0;
}