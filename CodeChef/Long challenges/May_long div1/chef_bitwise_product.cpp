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


int main() 
{  
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,flag=0,temp,x,y,l,r;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>l>>r;

		for(i=l;i<=r;i++)
		{
			int res= (x & i) * (y & i);
			cout<<x<<"\t\t\t"<<y<<"\t\t\t"<<i<<"\t\t\t"<<res<<endl;
			cout << bitset<8>(x)  <<"\t" << bitset<8>(y)<<"\t"<<bitset<8>(i)<<"\t"<<bitset<8>(res)<<endl<<endl;
		}


   

  

	}
	return 0;
}
7			12			4			16
00000111	00001100	00000100	00010000

7			12			5			20
00000111	00001100	00000101	00010100

7			12			6			24
00000111	00001100	00000110	00011000

7			12			7			28
00000111	00001100	00000111	00011100

7			12			8			0
00000111	00001100	00001000	00000000

7			12			9			8
00000111	00001100	00001001	00001000

7			12			10			16
00000111	00001100	00001010	00010000

7			12			11			24
00000111	00001100	00001011	00011000

7			12			12			48
00000111	00001100	00001100	00110000

7			12			13			60
00000111	00001100	00001101	00111100

7			12			14			72
00000111	00001100	00001110	01001000

7			12			0			0
00000111	00001100	00000000	00000000

7			12			1			0
00000111	00001100	00000001	00000000

7			12			2			0
00000111	00001100	00000010	00000000

7			12			3			0
00000111	00001100	00000011	00000000

7			12			4			16
00000111	00001100	00000100	00010000

7			12			5			20
00000111	00001100	00000101	00010100

7			12			6			24
00000111	00001100	00000110	00011000

7			12			7			28
00000111	00001100	00000111	00011100

7			12			8			0
00000111	00001100	00001000	00000000

