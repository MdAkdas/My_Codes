#include <iostream>
using namespace std;

#define ll long long

int binarySearch(ll a[],int n,int m)
{
	int start,end,mid;
	start=0,end=n-1;
	
	int idx=-1;

	while(start<=end)
	{
		mid = (start+end)/2;
		if(a[mid]==m)
		{
			idx=mid;
			break;
		}
		else if(a[mid]>m)
			end=mid-1;
		else
			start=mid+1;
	}
	return idx;
}

int main()
{
	int n;
	cin>>n;
	ll a[n];
	int m;

	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	cout<<binarySearch(a,n,m)<<endl;
	return 0;
}