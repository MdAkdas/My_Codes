#include<iostream>
#include <queue>
using namespace std;

int main()
{
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);*/
	int n , k ;
	cin>>n>>k;
	int a[n];

	for(int i =0;i<n;i++)
	{
		cin>>a[i];
	}

	int cnt0 = 0; 
	int l = 0; 
	int max_len = 0; 
	int b[n];
    // i decides current ending point 
	for (int i = 0; i < n; i++) { 
		if (a[i] == 0)
		{ 
			cnt0++;
			b[i]=1; 
		}
		else
		{
			b[i]=1;
		}


        // If there are more 0's move 
        // left point for current ending 
        // point. 
		while (cnt0 > k) { 
			if (a[l] == 0)
			{ 
				cnt0--; 
				b[l]=0;
			}
			l++; 
		} 

		max_len = max(max_len, i - l + 1); 
	} 

	cout<< max_len<<endl;

	for(int i =0;i<n;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0; 
}