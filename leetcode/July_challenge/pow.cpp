#include<iostream>
using namespace std;

class Solution {
public:
	double pow1(double x, int n)
	{
		if(n==1)
			return x;
		double res=1;
		res=pow1(x,n/2);
		if(n%2==0)
			return res*res;
		else
			return x*res*res;
        
	}
	double myPow(double x, int n) 
	{
        if(x==1)
            return 1;
        
		if(n<0)
		{
            if(n==-1)
                return 1/x;
            
            else
			    return  (1/(x * pow1(x,-(n+1)))); //very imp. int cann't store + of -2147483648
		}
		else if(n==0)
			return 1;
		else if(n==1)
            return x;
        else
			return x * pow1(x,n-1);
	}
};

int main()
{
	Solution s;
	double x;
	int n;
	cin>>x>>n;
	cout<<s.myPow(x,n)<<endl;
	return 0;
}