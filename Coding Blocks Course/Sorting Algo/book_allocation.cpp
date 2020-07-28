#include <iostream>
#include<climits>
using namespace std;

bool ifPossible(int a[],int n,int m,int curr_min)
{
	int students=1;
	int noOfPages=0;

	for(int i=0;i<n;i++)
	{
		if(noOfPages+a[i]>curr_min)
		{
			students++;

			noOfPages=a[i];

			if(students>m)
				return false;
		}
		else
			noOfPages+=a[i];

	}
	return true;
}
int findPage(int a[],int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=a[i];

	int start = a[n-1];
	int end = sum;
	int ans=INT_MAX;
	while(start<end)
	{
		int mid = (start+end)/2;
		if(ifPossible(a,n,m,mid))
		{
			ans = min(ans,mid);
			end=mid-1;
		}
		else
		{
			start = mid+1;
		}
	}
	return ans;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<findPage(a,n,m)<<endl;
	}
	return 0;
}