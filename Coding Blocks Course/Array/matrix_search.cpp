#include<iostream>
using namespace std;
int main() 
{
	int n,m,x;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	}
	cin>>x;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
			if(a[i][j]==x)
			{
				flag=1;
				break;
			}
	}
	flag==1 ? cout<<"1"<<endl : cout<<"0"<<endl;

	return 0;
	
}