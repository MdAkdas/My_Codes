#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
	void subsetsHelper(vector<int>nums,vector<int>&subs,vector<vector<int>>&res,int indx)
	{
		res.push_back(subs);

		for(int i=indx;i<(int)nums.size();i++)
		{	
			//including the current element
			subs.push_back(nums[i]);
			subsetsHelper(nums,subs,res,i+1);

			//excluding the elements from the subset and backtracking
			subs.pop_back();

		}
		return;
	}

    vector<vector<int>> subsets(vector<int>& nums) 
    {
    	vector<int>subs;
    	vector<vector<int>>res;
    	int indx=0;
    	subsetsHelper(nums,subs,res,indx);
    	return res;       
    }
};

int main()
{	
	vector<int>nums({1,2,3});
	Solution s;
	vector<vector<int>>res;
	res=s.subsets(nums);

	for(auto v : res)
	{
		for(auto el : v)
			cout<<el<<" ";
		cout<<endl;
	}
	return 0;

}