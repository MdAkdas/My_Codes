#include<iostream>
using namespace std;

class Solution {
public:
	uint32_t reverseBits(uint32_t n) 
	{
		uint32_t ans = 0;
		for(int i = 31; i >= 0; i--)
		{
			ans = ans | (n & 1) <<i;
			n>>=1;
		}
		return ans;
	}
};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		uint32_t n;
		cin>>n;
		Solution s;
		cout<<s.reverseBits(n)<<endl;
	}
	return 0;
}