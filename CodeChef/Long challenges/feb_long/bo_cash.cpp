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
{  
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   ll t,n,p;
   cin>>t;
   while(t--)
   { cin>>n>>p;
   	ll a[n];
   	ll c[n]={0};

   	 rep(i,n)
   	 cin>>a[i];

   	 sort(a,a+n);
     
     ll p1=p;
       for(ll i=n-1;i>=0;i--)
      	 { 
   	 	  if(p1%a[i]==0)
   	 		{ c[i]=(p1/a[i])-1;
   	 			//cout<<c[i]<<endl;
         	  p1=p1-(a[i]*c[i]);
         	  //cout<<p1<<endl;
   	 		}

   	 		else
   	 		{  c[i]=(p1/a[i])+1;
       	     	break;

   	 		}


   	 		}
   	  ll sum=0;
   	  rep(i,n)
   	  { sum+=a[i]*c[i];

   	  }
   	  //cout<<" "<<sum<<endl;
   	  if(sum>p)
   	  {
   	  	cout<<"YES ";
        rep(i,n)
        cout<<c[i]<<" ";
   	  }
   	  else
   	  	cout<<"NO";

    cout<<endl;

   }

 return 0;
}