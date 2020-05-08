 /*QUE : Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.*/

#include <bits/stdc++.h>

int firstUniqChar(string s) 
{
        int a[26]={0};
        
        for( int i = 0 ; i < s.length() ; i++ ){
            a[ s[i] -'a']++;
        }
        
        for( int i = 0 ; i < s.length() ; i++ ){
            if( a[ s[i] -'a' ] == 1)
                return i;
        }
        return -1;
}


int main() 
{  
	ios_base::sync_with_stdio(false);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<firstUniqChar(s)<<endl;
	}
	return 0;
}