
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

int kadane_algo(int a[],int n)
{
	int max_sum_so_far=0;
	int max_sum=0;
	for(int i=0;i<n;i++)
	{
		max_sum_so_far+=a[i];
		if(max_sum_so_far<0)
		{
			max_sum_so_far=0;
		}
		max_sum=max(max_sum_so_far,max_sum);
	}
	return  max_sum;
}

void max_circular_sum(int a[],int n)
{
	//case 1
	int ans1 = kadane_algo(a,n);
	//cout<<ans1<<endl;

	int total_sum=0;
	int max_if_All_neg= INT_MIN;
	rep(i,n)
	{
		max_if_All_neg=max(max_if_All_neg,a[i]);
		total_sum+=a[i];
		a[i]=-a[i];
	}
	int ans2 = total_sum + kadane_algo(a,n);
	// cout<<ans2<<endl;
	// cout<<max_if_All_neg<<endl;

	if(ans1==0 && ans2==0)
		cout<<max_if_All_neg<<endl;
	else
		cout<<max(ans1,ans2)<<endl;

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
		cin>>n;
		int a[n];
		rep(i,n)
		cin>>a[i];

		max_circular_sum(a,n);


	}
	return 0;
}