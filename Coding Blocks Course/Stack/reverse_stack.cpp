#include <iostream>
#include<stack>
using namespace std;

 void transfer(stack<int>&s1,stack<int>&s2,int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		s2.push(s1.top());
 		s1.pop();
 	}
 }
 void reverse(stack<int>&s)
 {  stack<int>s2;
    int n=s.size();
    for(int i=0;i<n;i++)
    { int x=s.top();
    	s.pop();
    	transfer(s,s2,n-i-1);
    	s.push(x);
    	transfer(s2,s,n-1-i);

    } 
 }
 void insertBottom(stack<int>&s,int x)
 {
 	if(s.empty())
 	{
 		s.push(x);
 	    return;
 	}
 	int y=s.top();
 	s.pop();
 	insertBottom(s,x);
 	s.push(y);
 }

 void reverseStackRec(stack<int>&s)
 {
 	if(s.empty())
 		return;

 	int x=s.top();
 	s.pop();
 	reverseStackRec(s);
 	insertBottom(s,x);
 }

int main(int argc, char const *argv[])
{
	stack<int> s;
	for(int i=0;i<5;i++)
		s.push(i);

	reverseStackRec(s);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
	return 0;
}