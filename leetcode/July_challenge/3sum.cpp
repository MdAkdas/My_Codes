#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
	vector<vector<int>> threeSum(vector<int>& nums) 
	{
		sort(nums.begin(), nums.end());
		vector<vector<int>>ans;

		for(int i=0;i<(int)nums.size();i++)
		{
			int start=i+1;
			int end=(int)nums.size()-1;

			if(i>0 && nums[i]==nums[i-1])
				continue;

			while(start<end)
			{

				int str = nums[start];
				int en = nums[end];
				if(nums[i]+nums[start]+nums[end]==0)
				{
					vector<int>v({nums[i],nums[start],nums[end]});
					ans.push_back(v);
					start++,end--;
					while(start<end && nums[start]==str) start++;
					while(start<end && nums[end]==en) end--;
				}
				else if(nums[i]+nums[start]+nums[end]<0)
					start++;
				else
					end--;


			}
		}
		return ans;

	}
};

int main()
{
	Solution s;

	vector<int> v({1,-1,-1,0});

	vector<vector<int>>ans;
	ans = s.threeSum(v);

	for(auto v : ans)
	{
		for(auto el : v )
			cout<<el<<" ";
		cout<<endl;
	}
	return 0;
}