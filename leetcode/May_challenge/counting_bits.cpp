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

class Solution {
public:
    vector<int> countBits(int num) 
    {
        if(num < 0) return vector<int> {};
        
        vector<int> res(num + 1, 0);
        for(int i=1;i<=num;++i)
        {
            res[i] = res[i & (i - 1)] + 1;
        }
        return res;
    }
};

int countSetBits(int n) 
{ 
	// base case 
	if (n == 0)
	{ 
		return 0; 
 	}
	else
	{
		// if last bit is set, add 1 else add 0 
		return (n & 1) + countSetBits(n >> 1);
	} 
} 


int main() 
{  
	ios_base::sync_with_stdio(false);
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<int> v;
		for(int i=0;i<=n;i++)
		{
			int no_bits = countSetBits(i);
			//int no_bits = __builtin_popcount(i);
			v.push_back(no_bits);
		}

		for(auto el : v)
		{
			cout<<el<<" ";
		}
		cout<<endl;
	}
	return 0;
}

