#include <iostream>
using namespace std;

void printBrackets(int n,char out[],int idx,int open,int close)
{
	if(idx==2*n)
	{
		out[idx]='\0';
		cout<<out<<endl;
		return; 
	}

	if(open<n)
	{
		out[idx]='(';
		printBrackets(n,out,idx+1,open+1,close);
	}

	if(close<open)
	{
		out[idx]=')';
		printBrackets(n,out,idx+1,open,close+1);
	}
	return;
}
	
int main()
{
	int n;
	cin>>n;
	char out[100];

	printBrackets(n,out,0,0,0);
	return 0;
}