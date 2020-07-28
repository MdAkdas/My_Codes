#include<iostream>
#include<deque>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	deque<int>dq;
	int i=0;
	for ( i = 0; i < k; ++i)
	{
		while(!dq.empty() and a[i] > a[dq.back()]) //remove el which are not useful
			dq.pop_back();
		dq.push_back(i);
	}

	for(;i<n;i++)
	{
		cout<<a[dq.front()]<<" ";
		//remove the elements which are not part of window
		while(!dq.empty() and (dq.front()<= (i-k))) 
			dq.pop_front();

		while(!dq.empty() and a[i]>a[dq.back()]) //remove el which are not useful
			dq.pop_back();

		dq.push_back(i); //add new elements
	}
	cout<<a[dq.front()];
}