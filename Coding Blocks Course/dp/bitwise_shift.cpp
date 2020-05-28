// Iterative C++ program to print sums of all 
// possible subsets. 
#include<bits/stdc++.h> 
using namespace std; 

// Prints sums of all subsets of array 
void subsetSums(int arr[], int n) 
{ 
	// There are totoal 2^n subsets 
	long long total = 1<<n; 
	int x=0,max_x=0;

	// Consider all numbers from 0 to 2^n - 1 
	for (long long i=0; i<total; i++) 
	{ 
		long long sum = 0; 

		// Consider binary reprsentation of 
		// current i to decide which elements 
		// to pick. 
		for (int j=0; j<n; j++) 
			{ int l=1<<j;
				
		      int k=i & (1<<j);
		     
			if (i & (1<<j)) 
			{//cout<<"i "<<i<<" 1<<j "<<l<<endl;
			 //cout<<"i & (1<<j) "<<k<<endl<<endl;
				x=x xor arr[j]; 
			}
		}
		x=x xor k;

		// Print sum of picked elements. 
		if(x>max_x)
			max_x=x;
		
	} 
	return max_x;
} 

// Driver code 
int main() 
{ 
	int arr[] = {5, 4, 3}; 
	int n = sizeof(arr)/sizeof(arr[0]); 

	subsetSums(arr, n); 
	return 0; 
} 
