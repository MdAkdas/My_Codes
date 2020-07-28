#include<iostream>
#include<algorithm>

using namespace std;

bool canPlace(int stall[],int n,int c,int curr_min_sep)
{
	int secondCow=stall[0];
	int count=1;

	for(int i=1;i<n;i++)
	{
		if(stall[i]-secondCow>=curr_min_sep)
		{
			secondCow=stall[i];
			count++;
			if(count==c)
				return true;

		}
	}
	return false;

}

int main()
{
	int n,c;
	cin>>n>>c;
	int stall[n];
	for(int i=0;i<n;i++)
		cin>>stall[i];

	sort(stall,stall+n);
	int s=stall[0];
	int e=stall[n-1]-stall[0];

	int res=0;
	while(s<=e)
	{
		int mid=(s+e)/2;
		int decide = canPlace(stall,n,c,mid);

		if(decide)
		{
			res=mid;
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	cout<<res<<endl;
	return 0;
}