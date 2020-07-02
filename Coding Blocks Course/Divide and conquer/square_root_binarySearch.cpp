#include <iostream>

using namespace std;

float square_root(int n , int p)
{
	int start=0,end=n;
	float ans=-1;
	while(start<=end)
	{

		int mid= (start+end)/2;
		//cout<<"mid : "<<mid<<endl;

		if((mid*mid)>n)
		{
			end= mid -1;
		}
		else
		{
			start = mid +1;
			ans = mid;
		}
	}
	//cout<<ans<<endl;
	float inc = 0.1;
	for(int i=1;i<=p;i++)
	{
		while(ans*ans<=n)
		{
			ans=ans+inc;
		}
		ans = ans - inc;
		inc = inc / 10;
	}
	//cout<<ans<<endl;
	return ans;

}

int main()
{
	int n,p;
	cin>>n>>p;
	cout<<square_root(n,p);
}