#include <iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {

    	if(n==1)
    		return 1;

    	vector<int>uglyNumber;
    	uglyNumber.push_back(1);

    	int i,j,k;
    	i=j=k=0;


    	while((int)uglyNumber.size()<n)
    	{	

    		int no = min(2*uglyNumber[i],min(3*uglyNumber[j],5*uglyNumber[k]));
    		uglyNumber.push_back(no);
    		//cout<<uglyNumber.size()<<"   "<<uglyNumber.back()<<endl;
    		if(no==2*uglyNumber[i])i++;
    		if(no==3*uglyNumber[j])j++;
    		if(no==5*uglyNumber[k])k++;
    	}
        return uglyNumber.back();
  
    }
};

int main()
{
	Solution s;
	int n;
	cin>>n;
	cout<<s.nthUglyNumber(n)<<endl;
	return 0;
}