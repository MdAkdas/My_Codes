#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	int x =0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		x = x xor a[i];
	}
	//cout<<x<<endl;
	int temp=x,pos=0;

	while((temp&1)==0)
	{
		pos++;
		temp = temp>>1;

	}
	//cout<<pos<<endl;

	int x2=0;
	for(int i = 0;i<n;++i)
	{
		if(((a[i]>>pos)&1)>0)
		{
			//cout<<a[i];
			x2 = x2 xor a[i];
		}

	}
	cout<<x2<<" "<<(x xor x2)<<endl;

	
	return 0;
}