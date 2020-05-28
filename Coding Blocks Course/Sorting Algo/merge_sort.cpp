#include<iostream>
using namespace std;

void merge(int *a,int s,int e)
{
	int temp[100];
	int mid = (s+e)/2;
	int i=0;
	int k=0;
	int j=mid+1;
	//cout<<s<<" and "<<e<<endl;
	while(i<=mid && j<=e)		
	{
		//cout<<a[i]<<" "<<a[j]<<endl;
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
	for(int i=0;i<k;i++)
	{
		a[i]=temp[i];
		//cout<<temp[i]<<" "<<endl; 
		//cout<<a[i]<<" "<<endl; 
	}

}
void merge_sort(int a[],int s,int e)
{
	//base case
	if(s>=e)
		return;
	//Follow 3 steps

	//1. divide
	int mid = (s+e)/2 ;

	//2. recursion in the array from s to mid and mid+1 to e
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
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	merge_sort(a,0,n-1);

	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
