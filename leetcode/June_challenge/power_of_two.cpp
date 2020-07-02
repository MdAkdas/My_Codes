#include<iostream>
#include<math.h>


using namespace std;

int brian_algo(int n)
{
	if(n==0)
		return 0;

	return (n&1) + brian_algo(n>>1);
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	/*if(brian_algo(n)==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}*/

	return floor(log2(n))==ceil(log2(n));


	return 0;
}
