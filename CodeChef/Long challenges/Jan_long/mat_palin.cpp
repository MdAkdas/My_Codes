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
LL fibo[1000]={0};

 LL fib(LL n)
 { 
    fibo[0]=fibo[1]=1;

    REP(i,2,n+1)
    fibo[i]=fibo[i-1]+fibo[i-2];

    return fibo[n-1];
 
 }
 
int main() 
{ LL n;
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   freopen("error.txt", "w", stderr);
   cin>>n;
   LL ans=fib(n);
   cout<<n<<"th fibonachi number is..\n"<<ans;


 return 0;
}