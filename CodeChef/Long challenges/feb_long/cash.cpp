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

   ll t,n,k,r,i;
   cin>>t;
   while(t--)
   { cin>>n>>k;
   	  ll a[n];
   	rep(i,n)
   	  cin>>a[i];
       
       ll sum=0;
    rep(i,n)
   	   sum+=a[i];

   	  r=sum%k;
   	  cout<<r<<endl;

   }


 return 0;
}