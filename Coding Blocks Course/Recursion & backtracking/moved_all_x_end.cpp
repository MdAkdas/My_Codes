#include <iostream>
#include<vector>
#include<cstring>
using namespace std;

void move(char *a,int n,int i)
{
	if(i>=n)
	{
		return;
	}

	if(a[i]!='x')
		cout<<a[i];
	move(a,n,i+1);

	if(a[i]=='x')
		cout<<a[i];

	return;
}

int main()
{
	char a[1000];
	cin>>a;
	int n=strlen(a);
	move(a,n,0);
	return 0;
}