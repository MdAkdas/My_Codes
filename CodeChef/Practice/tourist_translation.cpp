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
#define nl cout<<endl;


const int inf=(int)1e9;


int main() 
{  
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif	
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	string s;
	cin>>s;
	map<char,char>sa;
	map<char,char>ca;

	char sl='a',cl='A';
	for(int i=0;i<26;i++)
	{
		sa[sl++]=s[i];
		ca[cl++]=toupper(s[i]);

	}
	/*for(auto el : sa)
		cout<<el.F<<" "<<el.S<<endl;
	nl
	for(auto el : ca)
		cout<<el.F<<" "<<el.S<<endl;
	nl*/

	while(t--)
	{
		//nl
		string sen;
		cin>>sen;
		//cout<<sen<<endl;

		string nw="";
		for(int i=0;i<sen.length();i++)
		{
			if(sen[i]=='_')
			{
				nw+=' ';
				continue;
			}
			if(islower(sen[i]))
			{
				nw+=sa[sen[i]];
			}
			else if(isupper(sen[i])) 
			{
				nw+=ca[sen[i]];
			}
			else
			{
				nw+=sen[i];
			}
		}
		cout<<nw<<endl;
	}
	return 0;
}