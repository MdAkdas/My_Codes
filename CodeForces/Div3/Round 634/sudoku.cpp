 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
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
#define F first
#define S second
#define endl "\n"


const int inf=(int)1e9;

int a[9][9];
int main() 
{  
	ios_base::sync_with_stdio(false);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);

	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		

		rep(i,9)
		{
				
			cin>>temp;
			ll div=100000000;
			int j=8;
			while(temp>0)
			{
				int rem=temp%10;
				a[i][j--]=rem;
				temp/=10;
			}
		}

		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				
				if(a[i][j]==1)
					a[i][j]=2;
				//cout<<a[i][j]<<" ";
			}
			
		}
		// a[0][1]=a[0][0];
		// a[1][4]=a[1][3];
		// a[2][7]=a[2][6];

		// a[3][2]=a[3][1];
		// a[4][5]=a[4][4];
		// a[5][8]=a[5][7];

		// a[6][2]=a[6][0];
		// a[7][5]=a[7][3];
		// a[8][8]=a[8][6];

		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				cout<<a[i][j];
			}
			cout<<"\n";
		}


   

  

	}
	return 0;
}

