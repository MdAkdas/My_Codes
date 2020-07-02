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
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{	
		ll count=0;
		cin>>n;
		ll a[n];
		rep(i,n)
		{
			cin>>a[i];
		}
		// rep(i,n)
		// {
		// 	cout<<a[i];
		// }
		
		//cout<<endl;
		ll pro=1;

		for (int i=0; i <n; i++) 
	    { 
	        
	        for (int j=i; j<n; j++) 
	        { 
	            pro=1;
	            for (int k=i; k<=j; k++) 
	            	{ 
	            		//cout<<a[k]<<" ";
	               		pro*=a[k];
	            	}
	            //cout<<"pro"<<pro<<endl;
	  
	            if(pro%2!=0 || pro%4==0)
	            	count++;
	        } 
	    }
	    cout<<count<<endl; 
  
	}
	return 0;
}