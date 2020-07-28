#include<iostream>
using namespace std;
#define ll long long

void merge(ll *a,int s,int e)
{
	ll temp[e+1];
	int mid = (s+e)/2;
	int i=s;
	int k=s;
	int j=mid+1;

	while(i<=mid && j<=e)  //2.sort		
	{
		if(a[i]<=a[j])
			temp[k++]=a[i++];
		else
			temp[k++]=a[j++];
	}
	while(i<=mid)
	{
		temp[k++]=a[i++];
	}
	while(j<=e)
	{
		temp[k++]=a[j++];
	}

	for(int i=s;i<k;i++) //3.merge
	{
		a[i]=temp[i];
		//cout<<temp[i]<<"   "; 
		//cout<<a[i]<<" "<<endl; 
	}
}
void merge_sort(ll a[],int s,int e)
{
	//base case
	if(s>=e)
		return;
	//Follow 3 steps

	//1. divide
	int mid = (s+e)/2 ;
	merge_sort(a,s,mid);
	merge_sort(a,mid+1,e);

	//3.sort and merge
	merge(a,s,e);
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

	merge_sort(a,0,n-1);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
