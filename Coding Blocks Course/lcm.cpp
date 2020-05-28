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

 int gcd(LL a, LL b)
 {
 	if(b==0)
 		return a;
 	else
 		return gcd(b,a%b);
 }

 /*int Solution::gcd(int a, int b) 
{
    while(b)
    {
        swap(a%=b, b);
    }
    return a;
}
  */




int main() 
{  
  // freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
    LL n1,n2;
    cin>>n1>>n2;
    LL g=gcd(n1,n2);


    LL lcm=(n1*n2)/g;
    cout<<lcm<<endl;

 return 0;
}