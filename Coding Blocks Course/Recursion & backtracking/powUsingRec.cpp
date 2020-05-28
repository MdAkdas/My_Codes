#include<iostream>
using namespace std;

int power(int a,int b)
{
	if(b==0)
		return 1;

	//return a*power(a,b-1);
	//O(b)

	if(b%2==0) //O(logb)
	{
		return power(a,b/2)*power(a,b/2);
	}
	else
	{
		return a*power(a,b/2)*power(a,b/2);
	}

}

int main()
{   
	int a,b;
	cout<<"Enter the base and exponent: ";
	cin>>a>>b;
	cout<<power(a,b)<<endl;
	return 0;
}