#include <iostream>
using namespace std;

#define mod 1000000007

//dp
int tilling(int n,int m)
{
	int count[n+1];
	count[0] = 0;

	for(int i=1;i<=n;i++)
	{
		if(i>m)
			count[i] = (count[i-1]+count[i-m])%mod;

		else if(i==m)
			count[i] = 2;

		else
			count[i] = 1;
	}

	return count[n];
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ans = tilling(n,m);
		cout<<ans<<endl;
	}
	return 0;
}
