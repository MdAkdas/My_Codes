#include<iostream>
using namespace std;

void replacePi(char a[],int i)
{
	if(a[i]=='\0' or a[i+1]=='\0')
		return;

	if(a[i]==a[i+1])
	{
		//cout<<a<<endl;
		int j=i+1;

		//move j to last postion
		while(a[j]!='\0')
			j++;

		//shift from right till i+2
		while(j>=i+1)
		{
			a[j+1]=a[j];
			j--;
		}
		//cout<<a<<endl;

		//a[i]='3';
		a[i+1]='*';
		//a[i+2]='1';
		//a[i+3]='4';
		//cout<<a<<endl;
		replacePi(a,i+2);

	}
	else
	{
		replacePi(a,i+1);
	}
	return ;
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[10000];
		cin>>a;
		//cout<<a<<endl;
		replacePi(a,0);
		cout<<a<<endl;
	}
	
	return 0;
}