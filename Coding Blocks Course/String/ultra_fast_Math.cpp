#include<iostream>
#include <bitset>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		
		string c="";

		for(int i=0;i<a.length();i++)
		{
			if(a[i]!=b[i])
				c+='1';
			else
				c+='0';
		}
		cout<<c<<endl;	

	}
	return 0;
}