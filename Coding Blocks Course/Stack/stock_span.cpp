#include<iostream>
#include<stack>
using namespace std;

void stockSpan(int stock[],int span[],int n)
{
	if(n==0)return;
	stack<int>s;
	s.push(0);
	span[0]=1;

	for(int i=1;i<=n-1;i++)
	{
		int currPrice=stock[i];

		while(!s.empty() and stock[s.top()]<=currPrice)
			s.pop();

		if(!s.empty())
		{
			int prevHighst=s.top();
			span[i]=i- prevHighst;
		}
		else
			span[i]=i+1;

		s.push(i);

	}

	for(int i=0;i<n;i++)
		cout<<span[i]<<" ";
	cout<<endl;


}

int main()
{
	
	int n;
	cin>>n;
	int stock[n];
	for(int i=0;i<n;i++)
	{
		cin>>stock[i];
	}
	int span[n]={0};
	stockSpan(stock,span,n);
	return 0;
}