#include <iostream>
#include <string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
	string reverseWords(string s) 
	{
		int n = s.length();
		char charArry[n+1]; //converting string into char array for strtok
		strcpy(charArry,s.c_str());

		vector<string>v;
		char *ptr = strtok(charArry," ");
		if(ptr==NULL)
			return s="";

		while(ptr!=NULL)
		{
			v.push_back(ptr);
			ptr = strtok(NULL," ");			
		}
		reverse(v.begin(), v.end());
		s="";
		for(auto rl : v)
		{
			s+=rl+" ";
		}
		s.erase(s.begin()+s.length()-1);
		return s;

	}
};

int main()
{
	Solution sol;
	string s;
	getline(cin,s);
	cout<<sol.reverseWords(s);
	return 0;
}