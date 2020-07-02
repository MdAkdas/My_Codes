
 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair

const int inf=(int)1e9;

int reduceNo(int n)
{ int dp[10000];
	dp[0]=0,dp[1]=0;
	dp[2]=1,dp[3]=1;
	

   for(int curr=4;curr<=n;curr++)
   {
   	int d1=inf,d2=inf,d3=inf;
    if(n%3==0)
    	d1=1+dp[curr/3];
    if(n%2==0)
    	d2=1+dp[curr/2];

     d3=1+dp[curr-1];

     dp[curr]=min(d1,min(d2,d3));
     //cout<<dp[curr]<<endl;
    }
   
   return dp[n];



}


int main() 
{  
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);

   int n;
   cin>>n;
   cout<<"Ans "<<reduceNo(n)<<endl;


 return 0;
}