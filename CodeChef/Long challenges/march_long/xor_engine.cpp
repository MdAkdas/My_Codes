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

unsigned int countSetBits(int n) 
    { 
        unsigned int count = 0; 
        while (n) { 
            n &= (n - 1); 
            count++; 
        } 
        return count; 
    } 


int main() 
{  
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll t,n,q,p;
   cin>>t;
   while(t--)
   {
   	cin>>n>>q;
   	ll evenC=0,oddC=0;
   	ll a[n];
   	rep(i,n)
   	{
   	 cin>>a[i];
   	 if(countSetBits(a[i])%2==0)
   	 	evenC++;
   	 else
   	 	oddC++;
    }
    while(q--)
    {
    	cin>>p;
    	if(countSetBits(p)%2!=0)
    	{
    		cout<<oddC<<" "<<evenC<<"\n";
    		continue;
    	}
    	else
    	{
    		cout<<evenC<<" "<<oddC<<"\n";
    		continue;
    	}


    }

   }

 return 0;
}