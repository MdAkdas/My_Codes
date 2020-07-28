#include<iostream>
using namespace std;

void selectionSort(int *a,int n)
{	
	for(int i=0;i<n;i++)
	{
		int minIdx=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
				minIdx=j;
		}
		swap(a[i],a[minIdx]);
	}

}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selectionSort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<endl;
}