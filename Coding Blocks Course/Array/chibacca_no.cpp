#include <iostream>
#include <string>
using namespace std;

#define ll long long

int main()
{
	string s;
	cin>>s;

	int a[30]={0};
	int size = 0;
	for(auto n : s)
	{
		a[size++]=n-'0';
	}
	if(a[0]>5 && a[0]!=9)
	{
		a[0]=9-a[0];
	}
	cout<<a[0];
	for(int i = 1; i<size;i++)
	{
		if(a[i]>=5)
		{
			a[i]=9-a[i];
		}
		cout<<a[i];
	}

	return 0;

}