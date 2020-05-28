#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
	string as= to_string(a);
	string bs= to_string(b);
	string c = as+bs;
	int ci = stoi(c);
	string d = bs+as;
	int di = stoi(d);

	if(ci>di)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int  i=0;i<n;i++)
			cin>>a[i];

		sort(a,a+n,compare);

		for(int  i=0;i<n;i++)
			cout<<a[i];
	}
}