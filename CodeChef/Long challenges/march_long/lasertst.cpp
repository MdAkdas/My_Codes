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
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll t,n,m,k,q,z;
   cin>>t;
   while(t--)
   {
   	cin>>n>>m>>k>>q;

   	ll a[n+1];

   	rep(i,n+1)
     a[i]=1;

   	ll x1=0,x2=0,y=1,H,c,d;
     
    vector<pair<ll,ll> >vq;

     rep(i,q)
     {
     	cin>>c>>d;
     	vq.pb(make_pair(c,d));
     }
     
     for(int i=1,x1=1,x2=n/2; i<3 ; i++)
     { 
     	cout<<"1 "<<x1<<" "<<x2<<" "<<y<<endl;
     	
     	cin>>H;
     	a[x2]+=H;

     	x1=x2+1;
     	x2=n;

     } 

     REP(i,1,n+1)
     cout<<a[i]<<" ";
     cout<<endl;
     cout<<"2"<<" ";
     for(int i=0;i<q;i++)
     {
     	cout<<abs(a[vq[i].first]-a[vq[i].second])<<" ";
     }
     cout<<endl;
     cin>>z;
     if(z==1)
     	continue;
     else
     	exit(0);
   }

  


 return 0;
}

