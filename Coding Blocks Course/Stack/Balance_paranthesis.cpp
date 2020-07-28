#include <iostream>
#include<stack>
using namespace std;

bool isBalance(string s)
{ 
	stack<char> c;
	for(int i=0;i<(int)s.size();i++)
	{
		//cout<<s[i]<<endl;
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
		{
			//cout<<"     "<<s[i]<<endl;
			c.push(s[i]);
		}

		else if (s[i]==')')
		{
			if(c.top()!='(' || c.empty())
				return false;

			c.pop();
		}
		else if ( s[i]=='}')
		{
			if(c.top()!='{' || c.empty())
				return false;

			c.pop();
		}
		else if (s[i]==']')
		{
			//cout<<"     "<<c.top()<<endl;
			if(c.top()!='[' || c.empty())
				return false;

			c.pop();
		}
	}
	return c.empty();

}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	//cout<<s<<endl;
	if(isBalance(s))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}