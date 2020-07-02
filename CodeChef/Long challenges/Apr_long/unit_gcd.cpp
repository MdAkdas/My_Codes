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
    
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  

    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (ll i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

int main() 
{  
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	// 

	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		//cout<<n<<endl;
		if(n==1)
		{
			cout<<n<<endl;
			cout<<"1 1"<<endl;
			continue;
		}

		cout<<n/2<<endl;

		if(n%2==0)
		{
			for(int i=1;i<=n;i+=2)
			{
				cout<<"2 "<<i<<" "<<i+1<<endl;
			}
			cout<<endl;
		}
		else
		{
			for(int i=1;i<=n-4;i+=2)
			{
				cout<<"2 "<<i<<" "<<i+1<<endl;
			}
			cout<<"3 "<<n-2<<" "<<n-1<<" "<<n<<endl;
			//cout<<endl;
		}
		
		
	}

		
	return 0;
}