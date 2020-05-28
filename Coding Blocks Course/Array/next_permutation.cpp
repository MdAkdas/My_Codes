#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		s.clear();
		int n;		
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s+=(a[i]+'0');
		}

		//cout<<s<<endl;
		next_permutation(s.begin(), s.end());
		//cout<<s;
		for(int i=0;i<n;i++)
		{
			cout<<s[i]-'0'<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}