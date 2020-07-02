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
	ll t,n;
	cin>>t;
	while(t--)
	{   cin>>n;
		string s="";
		char a;
	
     for(int i=0;i<n;)
         { cin>>a;
         	if(a>='0' && a<='9')
         	  s=s+a,i++;

         }
     bool val  = next_permutation(s.begin(), 
                           s.end()); 
    for(int i=0;i<n;i++)
    { cout<<s[i]<<" ";

    }
    cout<<endl;
	}

 return 0;
}