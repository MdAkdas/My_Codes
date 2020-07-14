#include<iostream>
#include<cmath>
using namespace std;

class Solution {
public:
    double angleClock(int hour, int minutes) {
        
        double angleByMin = minutes*6;
        double angleByMinInHr = (double)minutes/2;
        double angleByHr = hour*30 + angleByMinInHr;
        double diff = (angleByHr-angleByMin);
        diff = abs(diff);
        return min(diff,360-diff);
        
    }
};

int main()
{
	Solution s;
	cout<<s.angleClock(3,15)<<endl;
	return 0;
}