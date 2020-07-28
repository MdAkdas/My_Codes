#include <iostream>
#include<cstring>
using namespace std;

void countingSort(int *a,int n)
{
	int largest=0;
	for(int i=0;i<n;i++)
	{
		largest=max(largest,a[i]);
	}
	int frq[largest+1];
	memset(frq,0,sizeof(frq));

	for(int i=0;i<n;i++)
	{
		frq[a[i]]++;
	}
	int j=0;
	for(int i=0;i<=largest;i++)
	{
		while(frq[i]>0)
		{
			a[j]=i;
			frq[i]--;
			j++;
		}
	}


}
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	countingSort(a,n);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}