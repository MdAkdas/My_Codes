#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,q;
	cin>>n;
	//int a[n];
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int el;
		cin>>el;
		v.push_back(el);
	}
	cin>>q;
	while(q--)
	{
		int no;
		cin>>no;
		vector<int>::iterator lower,upper; 
		lower = lower_bound (v.begin(), v.end(), no);  
		upper = upper_bound (v.begin(), v.end(), no);
		if(lower==upper)
			cout<<"-1"<<endl;

		else
		{
			cout << (lower- v.begin()) << " "; 
			cout  << (upper - v.begin())-1 << '\n';
		}


	}
	return 0;
}