#include<iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n , m;
	cin>>n;
	//int a[n];
	int a[1000]={0},b[1000]={0};

	for(int i = 0 ; i<n ;i++)
	{
		cin>>a[i];
	}
	reverse(a,a+n);
	cin>>m;
	int s=max(n,m);
	for(int i = 0 ; i<m ;i++)
	{
		cin>>b[i];
	}
	reverse(b,b+m);

	for(int i = 0 ; i<10 ;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
	for(int i = 0 ; i<10 ;i++)
	{
		cout<<b[i]<<" ";
	}cout<<endl;

	int c[1000]={0},carry=0;

	for(int i = 0 ; i<s ;i++)
	{
		if(carry==1)
		{
			c[i]=a[i]+b[i]+1;	
		}
		else
		{
			c[i]=a[i]+b[i];
		}
		carry = c[i]/10;
		if(carry == 1)
			c[i]=c[i]%10;
	}
	reverse(c,c+s);
	for(int i = 0 ; i<s ;i++)
	{
		cout<<c[i]<<", ";
	}
	cout<<"END"<<endl;
	return 0;

}