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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>nums;
		for(int i=0;i<n;i++)
		{
			int no;
			cin>>no;
			nums.push_back(no);
		}
		
		Solution s;
		vector<vector<int>>res;
		res=s.subsets(nums);
		
		res[0].push_back(9999);
		int flag=0;
		for(auto v : res)
		{
			int sum=0;
			for(auto el : v)
			{
				//cout<<el<<" ";
				sum+=el;
			}
			//cout<<sum<<endl;
			if(sum==0)
			{
				//cout<<"yea"<<endl;
				flag=1;
				break;
			}
			//cout<<endl;
		}
		if(flag)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;

}