#include <iostream>
#include<stack>
using namespace std;

void isBalance(string str)
{ 
	stack<char> s;
	int flag=1;
	 for(int i=0;i<(int)str.length();i++)
	 {
            
        if(str[i]==')')
        {
            if(s.top()=='(')
                flag=0;
                //cout<<cnt<<" ";
            while(!s.empty() && s.top()!='(')
					s.pop();

				if(!s.empty())
				 s.pop();	
        }
        
        else 
        s.push(str[i]);
    }
        if(!flag)
			cout<<"Duplicate"<<endl;
		else 
			cout<<"Not Duplicates"<<endl;

}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		//cout<<s<<endl;
		isBalance(s);
	}
	
	return 0;
}

