// C++ program to count number of distinct 
// subsequences of a given string. 
#include <bits/stdc++.h> 
using namespace std; 
const int MAX_CHAR = 256;
#define MOD 1000000007 

// Returns count of distinct sunsequences of str. 
int countSub(string str) 
{ 

	vector<int> last(MAX_CHAR, -1); 

	int n = str.length(); 
	//cout<<MAX_CHAR<<endl;
	int dp[n + 1]; 

	// Empty substring has only one subsequence 
	dp[0] = 1; 

	// Traverse through all lengths from 1 to n. 
	for (int i = 1; i <= n; i++) 
	{ 
		// Number of subsequences with substring 
		// str[0..i-1] 
		dp[i] = 2 * dp[i - 1]%MOD; 

		// If current character has appeared 
		// before, then remove all subsequences 
		// ending with previous No of times of occurrence. 
		if (last[str[i - 1]] != -1) 
			dp[i] = dp[i] - dp[last[str[i - 1]]]; 

		// Mark occurrence of current character 
		last[str[i - 1]] = (i - 1);
		// cout<<str[i-1]<<" "; 
		// cout<<last[str[i-1]]<<endl; 
	}
	// for(int i=1;i<=n;i++)
	// 	cout<<dp[i]<<" "; 
	// cout<<endl;

	return dp[n]%MOD; 
} 

// Driver code 
int main() 
{ 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		cout<<countSub(s)<<endl;
	} 
	return 0; 
} 
