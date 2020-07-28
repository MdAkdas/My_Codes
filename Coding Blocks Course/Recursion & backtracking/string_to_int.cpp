#include <iostream>
#include<cstring>
using namespace std;

int toInt(char *s,int n)
{
	if(n==0)
	{
		return 0;
	}
	int digit = s[n-1]-'0';
	int smallerAns = toInt(s,n-1);

	return smallerAns*10 + digit;
}

int main()
{
	char s[11];
	cin>>s;
	int len = strlen(s);

	int x = toInt(s,len);
	cout<<x<<endl;
	//cout<<x+1<<endl;
	return 0;
}