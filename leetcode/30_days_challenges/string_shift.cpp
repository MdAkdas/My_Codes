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
void leftrotate(string &s, int d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} 

void rightrotate(string &s, int d) 
{ 
   leftrotate(s, s.length()-d); 
}


int main() 
{  
	ios_base::sync_with_stdio(false);
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<vector<int>>& shift;
		int leftRot=0,rightRot=0;

		for(i=0;i<shift.size();i++)
		{
			
				cout<<shift[i][0]<<" "<<shift[i][1];
				if(shift[i][0]==0)
				{
					leftRot+=shift[i][1];
				}
				else
				{
					rightRot+=shift[i][1];
				}
				
			
		}
		if((leftRot- rightRot) > 0)
		{
			int d= (leftRot - rightRot)%s.length();
			leftrotate(s,d);
		}
		else
		{
			int d= (rightRot - leftRot)%s.length();
			rightrotate(s,d);
		}
		cout<<s<<endl;

	}
	return 0;
}