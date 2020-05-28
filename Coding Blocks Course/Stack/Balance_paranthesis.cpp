#include <iostream>
#include<stack>
using namespace std;

 bool isBalance(string s)
 { stack<char> c;
 	for(int i=0;i<s.size();i++)
 	{
 		if(s[i]=='(')
 			c.push(s[i]);

 	    else if (s[i]==')')
 		{
 			if(c.top()!='(' || c.empty())
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
	cout<<s;
	cout<<isBalance(s);
	return 0;
}