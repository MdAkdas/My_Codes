#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool comp(pair<int,int>v1,pair<int,int>v2)
{
	return v2.second > v1.second;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		vector<pair<int,int>>v;
		int a,b;
		for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			v.push_back(make_pair(a,b));
		}
/*
		for(auto el : v)
		{
			cout<<el.first<<" "<<el.second<<endl;
		}
*/
		sort(v.begin(),v.end(),comp);

		/*for(auto el : v)
		{
			cout<<el.first<<" "<<el.second<<endl;
		}*/
		int count=1;
		int end=v[0].second;
		for(int i=1;i<n;i++)
		{
			if(v[i].first>=end)
			{
				count++;
				end=v[i].second;
			}
		}
		cout<<count<<endl;

	}
	return 0;


}