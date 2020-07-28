#include<iostream>
using namespace std;
#define ll long long

int partition(ll *a,int s,int e)
{
	int i=s-1;

	for(int j=s;j<=e-1;j++)
	{
		if(a[j]<=a[e])
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	i++;
	swap(a[e],a[i]);
	return i;
}
void quick_sort(ll a[],int s,int e)
{
	//base case
	if(s>=e)
		return;
	//Follow 2 steps

	//1.decide pivot position
	int pivot = partition(a,s,e);

	//2.recursivily sort left and right part of array
	quick_sort(a,s,pivot-1);
	quick_sort(a,pivot+1,e);

	return;
}

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	int n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	quick_sort(a,0,n-1);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
