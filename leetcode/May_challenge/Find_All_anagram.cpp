// C++ program to search all anagrams of a pattern in a text 
#include<iostream> 
#include<string> 
#include <vector>
#define MAX 256 
using namespace std; 

bool compare(char arr1[], char arr2[]) 
{ 
	for (int i=0; i<MAX; i++) 
		if (arr1[i] != arr2[i]) 
			return false; 
		return true; 
} 

	bool search(string pat, string txt) 
	{ 
		int M = pat.length(), N = txt.length(); 
		vector<int>v;

		char countP[MAX] = {0}, countTW[MAX] = {0};

		for (int i = 0; i < M; i++) 
		{ 
			(countP[pat[i]])++; 
			(countTW[txt[i]])++; 
		} 

		for (int i = M; i < N; i++) 
		{ 
			if (compare(countP, countTW))
				v.push_back(i-M); 

			(countTW[txt[i]])++; 

			countTW[txt[i-M]]--; 
		} 

		if (compare(countP, countTW))
			v.push_back(N-M); 
			//cout << "Found at Index " << (N - M) << endl;

		/*for(auto el : v)
		{
			cout<<el <<" ";
		}
		cout<<endl; */

		if(v.size()>0)
			return true;
		else
			return false;
	} 

/* Driver program to test above function */
	int main() 
	{ 
	/*char txt[] = "BACDGABCDA"; 
	char pat[] = "ABCD";*/
		string txt,pat; 
		cin>>pat>>txt;

		cout<<search(pat,txt)<<endl; 
		return 0; 
	} 
