#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

class Solution {
public:
	static bool comp(const pair<int,int> &a,const pair<int,int> &b) 
	{ 
		return (a.second > b.second); 
	} 
	vector<int> topKFrequent(vector<int>& nums, int k) 
	{
		vector<pair<int,int>>vp;
		map<int,int>mp;

		for(int i=0;i<(int)nums.size();i++)
		{
			mp[nums[i]]++;
		}
		for(auto m : mp)
		{
			//cout<<m.first<<" "<<m.second<<endl;
			vp.push_back(m); 
			//vp.push_back({it.first, it.second}); push after making pair

		}

		sort(vp.begin(), vp.end(),comp); 

		nums.clear();

		for (auto& it : vp) 
		{ 
			if(k==0)
				break;

			nums.push_back(it.first); 
			k--;
		} 
		return nums;

	}
};

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;
		v.push_back(no);
	}
	Solution s;
	vector<int>ans=s.topKFrequent(v,k);

	for(auto el : ans)
	{
		cout<<el<<" ";
	}
	cout<<endl;

}