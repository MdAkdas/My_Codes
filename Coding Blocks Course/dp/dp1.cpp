#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{ int n;
	cin>>n;
	int a[n],b[n];

	for(int i=0;i<n;i++)
         cin>>a[i];

     for(int i=0;i<n;i++)
         cin>>b[i];

     int dp[n]={0};
     dp[0]=max(b[0],a[0]);
     dp[1]=max(max(b[1],a[1]),dp[0]);

     for(int i=2;i<n;i++)
     { dp[i]=max(max(a[i],b[i])+dp[i-2],dp[i-1]);
     	cout<<dp[i]<<" ";

     }
     cout<<endl;

     cout<<dp[n-1]<<endl;

     return 0;
 

}