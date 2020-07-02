 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define N 100005
#define p 998244353
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair

const int inf=(int)1e9;
 
 
ll nCrModpDP(ll n, ll r) 
{ 
    
    ll C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
  
    
    for (ll i = 1; i <= n; i++) 
    { 
        
        for (ll j = min(i, r); j > 0; j--) 
  
            
            C[j] = (C[j] + C[j-1])%p; 
    } 
    return C[r]; 
} 

ll nCrModpLucas(ll n, ll r) 
{ 
   
	if (r==0) 
      return 1; 
  
   
   ll ni = n%p, ri = r%p; 
  
   
   return (nCrModpLucas(n/p, r/p) * 
           nCrModpDP(ni, ri)) % p;  
} 


int main() 
{  
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll t,n,q;
   cin>>t;
   while(t--)
   {
	   	cin>>n;
	   	ll a[n];
	   	unordered_map<ll,ll>myMap;
	   	rep(i,n)
	   	{
	   	cin>>a[i];

	    }

   	    cin>>q;
	   	while(q--)
	   	{  
	   	    myMap.clear();
	   		ll myXor=0,l,r,ans=0;
	   		cin>>l>>r;
	   		l--,r--;
	   		
	   		for(ll i=l;i<=r;i++)
		   	{
			   	
			   	if(myMap.find(a[i])==myMap.end())
			   	{
			   		myMap[a[i]]=1;
			   	}
			   	else
			   		myMap[a[i]]++;

		    }

		    for(auto el : myMap)
		    { 
		    	myXor ^= el.second;
		    }

		    if(myXor==0)
		    { cout<<ans<<endl;
		     continue;
		    }

		    for(auto el : myMap)
		    { 
		    	ll m = el.second;
		   		if((myXor ^ m) < m)
  			     ans+=nCrModpLucas(m,m - (myXor ^ m));
  			  
		    }
		    cout<<ans%p<<endl;
	   	 }

	   }
  
 return 0;
}