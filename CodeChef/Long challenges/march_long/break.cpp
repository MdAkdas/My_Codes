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


int main() 
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ll t,s,n;
   cin>>t>>s;
   while(t--)
   {
   	cin>>n;
   	
   	ll a[i]={},b[i]={};
    vector<int,int>B;
    vector<int,bool>T;
    vector<make_pair(int,int),bool>B;
    
    rep(i,n)
   	cin>>a[i];

   	sort(a,a+n);

   	rep(i,n)
   	{
   	cin>>b[i];
   	
    }
    sort(b,b+n);
    rep(i,n)
   	{
   	  int mp=make_pair(b[i],i);
   	  B.push_back(mp,false);
   	
    }

    if(a[0]>=b[0])
    {
    	cout<<"NO"<<endl;
    	break;
    }
    else
    {   
    	T[a[0]]=true;
	    T[b[0]]=true;
	    B[make_pair(b[0],0)]==true;

	    for(int i=1;i<n;i++)
	    { 
            if(T[a[i]]==false)
            {
            	cout<<"NO"<<endl;
            	break;
            }

	    	for(int j=0;j<n;j++)
	    	{
	    		if(b[j]>a[i] && B[make_pair(b[j],j)]==false)
	    		{ 
	    			T[a[i]]=true;
	    			T[b[j]]=true;
	    			B[make_pair(b[j],j)]==true;
	    			break;

	    		}
	    	}
	    }

	}

   }
   
  


 return 0;
}