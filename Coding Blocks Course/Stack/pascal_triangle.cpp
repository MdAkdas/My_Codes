// C++ program for Pascal’s Triangle 
// A O(n^2) time and O(1) extra space 
// function for Pascal's Triangle 
#include <bits/stdc++.h> 

using namespace std; 
void printPascal(int n) 
{ 
		vector<vector<int> > vec(n); 
	
for (int line = 1; line <= n; line++) 
{      int col; 
		col = line;
		vec[line-1] = vector<int>(col);  

	int C = 1; // used to represent C(line, i) 

	for (int j = 1; j <= line; j++) 
	{ 
		
		// The first value in a line is always 1 
		vec[line-1][j-1] = C; 
		C = C * (line - j) / j; 
	}
	} 
	

	for (int i = 0; i < n; i++) { 
		for (int j = 0; j < vec[i].size(); j++) 
			cout << vec[i][j] << " "; 
		cout << endl; 
	} 
} 


// Driver code 
int main() 
{ 
	int n = 5; 
	printPascal(n); 
	return 0; 
} 

// This code is contributed by Code_Mech 
/* vector<vector > Solution::solve(int A) {
vector<vector >v(A);
int i,j;
for(i=0;i<A;i++)
{
	for(j=0;j<=i;j++)
	{
  	if(j==0 || j==i)
    v[i].push_back(1);

  	else
	v[i].push_back(v[i-1][j]+v[i-1][j-1]);
	}
}
return v;

} */