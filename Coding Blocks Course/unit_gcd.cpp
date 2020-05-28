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
#define rep2(i,b) for(int i=2;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
const int inf=(int)1e9;

bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

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
		ll a[n+1];

		a[1]=1;
		int countPrime=0,CountNotPrime=0;
		rep2(i,n)
		{
			if(isPrime(i))
			{
				a[i]=1;
				countPrime++;
			}
			else
			{
				CountNotPrime++;
				a[i]=-1;
			}
		}

		rep(i,n)
		{
			cout<<i<<" "<<a[i]<<" ";
		}


   

  

	}
	return 0;
}