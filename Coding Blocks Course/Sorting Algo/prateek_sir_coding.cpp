#include <iostream>
#include<stack>
using namespace std;


int main(int argc, char const *argv[])
{
	stack<int> s;
	int n;
	cin>>n;

	int type,price;
	for(int i=0;i<n;i++)
	{
		cin>>type;
		if(type==2)
		{
			cin>>price;
			s.push(price);
		}
		else
		{
			if(!s.empty())
			{
				cout<<s.top()<<endl;
				s.pop();
			}
			else
			{
				cout<<""<<endl;
			}
			
		}
	}
	return 0;
}