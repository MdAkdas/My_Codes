#include<iostream>
using namespace std;

void allIndices(int a[],int n,int i,int m)
{
	if(i==n)
		return;

	if(a[i]==m)
	{
		cout<<i<<" ";
		allIndices(a,n,i+1,m);
	}
	else
		allIndices(a,n,i+1,m);

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;

	allIndices(a,n,0,m);
	return 0;
}