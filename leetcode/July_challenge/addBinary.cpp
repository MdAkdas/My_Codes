#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
	string addBinary(string a, string b) 
	{
		string s;
		int n = a.length();
		int m = b.length();
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());

		for(int i=0;i<max(n,m);i++)
			s+='0';

		int i=0,j=0,k=0;
		int carry=0;
		while(i<n && j<m)
		{
			s[k]= (a[i]-'0') + (b[j]-'0') + (carry) + '0';
			//cout<<s[k]<<endl;
			i++,j++,k++;
			if(s[k-1]=='2')
			{
				s[k-1]='0';
				carry=1;
			}

			else if(s[k-1]=='3')
			{
				s[k-1]='1';
				carry = 1;
			}
			else
				carry = 0;
		}
		while(i<n)
		{
			s[k]= a[i]-'0' + carry + '0';
			i++,k++;
			if(s[k-1]=='2')
			{
				s[k-1]='0';
				carry=1;
			}

			else if(s[k-1]=='3')
			{
				s[k-1]='1';
				carry = 1;
			}
			else
				carry = 0;

		}
		while(j<m)
		{
			s[k]= b[j]-'0' + carry + '0';
			j++,k++;

			if(s[k-1]=='2')
			{
				s[k-1]='0';
				carry=1;
			}

			else if(s[k-1]=='3')
			{
				s[k-1]='1';
				carry = 1;
			}
			else
				carry = 0;
		}
		if(carry)
		s+=carry+'0';
		reverse(s.begin(),s.end());
		//cout<<s<<endl;
		return s;
	}
};

int main()
{
	Solution s;

	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	//cout<<s1<<" "<<s2<<endl;
	cout<<s.addBinary(s1,s2)<<endl;
	return 0;
}
/*
class Solution {
public:
    string addBinary(string a, string b) {
        int i(a.size()-1), j(b.size()-1), carry_in(0), carry_out(0);
        string res;
        
        while(i>=0 || j>=0 || carry_in){
            int ai = (i>=0 && a[i] == '1')? 1:0;
            int bj = (j>=0 && b[j] == '1')? 1:0;
            res += (ai ^ bj ^ carry_in)? '1' : '0';
            carry_out = (ai && bj) || (ai && carry_in) || (bj && carry_in);
            carry_in = carry_out;
            i--;
            j--;
        }
        
        reverse(res.begin(), res.end());
        
        return res;
    }
};*/