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
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int Ocount=0,Zcount=0;
		int TOcount=0,TZcount=0;

		if(n<3)
		{
			cout<<"0"<<endl;
			continue;
		}
		string temp="";
		rep(i,n)
		{
			

			if(s[i]=='0')
				Zcount++;
			else
				Ocount++;

			if(i>0 && i<n-1)
			{
				temp+=s[i];
				if(s[i]=='0')
					TZcount++;
				else
					TOcount++;
			}
		}
		// cout<<s<<endl;
		// cout<<Zcount<<" "<<Ocount<<endl;
		// cout<<temp<<endl;
		// cout<<TZcount<<" "<<TOcount<<endl;
		// cout<<endl;
		if(TOcount<=TZcount)
		{
			if(s[0]=='1' && s[n-1]=='1')
			{
				cout<<TOcount+1<<endl;
			}
			else
			{
				cout<<TOcount<<endl;
			}
		}
		else
		{
			if(s[0]=='0' && s[n-1]=='0')
			{
				cout<<TZcount+1<<endl;
			}
			else
			{
				cout<<TZcount<<endl;
			}
		}

	}
	return 0;
}