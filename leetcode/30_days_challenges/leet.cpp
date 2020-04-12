#include <iostream>
using namespace std;

class Solution 
{
	public:

	int DigitSquare(int n) 
	{ 
	    int sq = 0; 
	    while (n) { 
	        int digit = n % 10; 
	        sq += digit * digit; 
	        n = n / 10; 
	    } 
	    return sq; 
	} 

    bool isHappy(int n) 
	{ 
	    
	    while (1) 
	    { 
	  
	        if (n == 1) 
	            return true; 
	  
	        n = DigitSquare(n); 
	        //cout<<n<<endl;
	  
	        if (n == 4) 
	            return false; 
	    } 
	  
	    return false; 
	} 
};
int main()
{
	Solution sol;
	cout<<sol.isHappy(5);
	return 0;
}