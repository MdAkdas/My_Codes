#include<bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	getline(cin,s);
	int len = s.length();

	string ans="";
	for(int i=0;i<len;i++)
	{
		int count=0;
		ans+=s[i];
		//cout<<ans<<endl;
		for(int j=i;j<len;j++)
		{	
			
			count++;
			if(s[j+1]!=s[i])
			{
				i=j;
				//cout<<count<<endl;
				string rev="";
				while(count)
				{
					int rem = count%10;
					rev+=rem+'0';
					count/=10;
				}
				reverse(rev.begin(),rev.end());
				//cout<<rev<<endl;
				ans+=rev;
				break;

			}

		}
	}
	cout<<ans<<endl;

	return 0;
}