#include <iostream>
using namespace std;

int profit(int item,int Capacity,int *weight,int *price)
{
	if(item==0 || Capacity==0)
		return 0;

	int inc,exc;
	inc=exc=0;

	//including current item
	if(Capacity>=weight[item-1])
		inc = price[item-1] + profit(item-1,Capacity-weight[item-1],weight,price);

	//excluding current item
	exc = profit(item-1,Capacity,weight,price);
	cout<<inc<<" "<<exc<<endl;

	return max(inc,exc);
}

int main()
{
	int weight[]={1,2,3,5};
	int price[]={40,20,30,100};

	int item=4;
	int Capacity=7;

	cout<<profit(item,Capacity,weight,price)<<endl;
	return 0;
}
