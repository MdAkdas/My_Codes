#include <iostream>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    	int n = (int)digits.size();

    	digits[n-1]=digits[n-1]+1;
    	int carry = digits[n-1]/10;
    	digits[n-1]=digits[n-1]%10;

    	int i=n-2;
    	while(i>=0)
    	{
    		digits[i]=digits[i]+carry;
    		carry=digits[i]/10;
    		digits[i]=digits[i]%10;
    		i--;
    	}
    	if(carry==1)
    		digits.insert(digits.begin(),1);

    	return digits;
        
    }
};

int main()
{
	Solution s;
	std::vector<int> v;
	std::vector<int> digits({1,0,0});
	v = s.plusOne(digits);

	for(auto el : v)
	{
		cout<<el<<" ";
	}cout<<endl;
	return 0;
}