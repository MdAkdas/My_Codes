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
   //reopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   ll t,n,min_sum,i;
   cin>>t;
   while(t--)
   { cin>>n;
   	 ll a[n],b[n];

   	 rep(i,n)
   	 cin>>a[i];
     sort(a,a+n);

   	 rep(i,n)
   	 cin>>b[i];
   	 sort(b,b+n);

     
     min_sum=0;
   	 rep(i,n)
   	 { min_sum+=min(a[i],b[i]);

   	 }

   	 cout<<min_sum<<endl;


   }




 return 0;
}