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
   int t,n,m,i;
   cin>>t;
   while(t--)
   {
	   	cin>>n>>m;
	   	int f[m+1];

	   for(i=0;i<=m;i++)
	   	f[i]=INT_MAX;

	   // for(i=0;i<=m;i++)
	   // 	cout<<f[i]<<" ";

	    int i,b[n+1]={};
	   	int p[n+1]={};

	   	REP(i,1,n+1)
	   	cin>>b[i];

	   	REP(i,1,n+1)
	   	cin>>p[i];

	   	for(i=1;i<=n;i++)
	   	{
	   		//cout<<"b[i] "<<b[i]<<" "<<"p[i] "<<p[i]<<endl;
	   		if(f[b[i]]==INT_MAX)
	   		{
	   			f[b[i]]=0;
	   		}
	   		
	   		f[b[i]]+=p[i];

	   		//cout<<f[b[i]]<<endl;

	   	}

	   	// for(i=0;i<=m;i++)
	   	// cout<<f[i]<<" ";
     //    cout<<endl;

	   	sort(f,f+(m+1));

	   	// for(i=0;i<=m;i++)
	   	// cout<<f[i]<<" ";
	    
	   cout<<f[0]<<endl;

   }

 return 0;
}