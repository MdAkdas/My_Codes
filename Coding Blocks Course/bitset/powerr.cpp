#include<iostream>
using namespace std;

void powerr(int a, int n)
{
	int ans=1;
	while(n)
	{	
		if((n&1))
		{
			ans*=a;
			//cout<<ans<<endl;
		}

		a*=a;
		n=n>>1;

	}
	cout<<ans<<endl;
}
int main() {
	int a,b;
	cin>>a>>b;
	powerr(a,b);
	return 0;
}