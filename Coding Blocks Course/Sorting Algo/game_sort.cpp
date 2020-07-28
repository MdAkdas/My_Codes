#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class student
{
public:
	string name;
	int marks;
};

bool comp(student s1,student s2)
{
	return s1.name < s2.name;
}

void bucketSort(student s[],int n,int x)
{
	vector<student>v[101];

	for(int i=0;i<n;i++)
	{
		int m=s[i].marks;
		v[m].push_back(s[i]);
	}

	for(int i=100;i>=0;i--)
	{
		if(i<x)
			break;
		sort(v[i].begin(),v[i].end(),comp);
		for(auto el : v[i])
		{
			cout<<el.name<<" "<<el.marks<<endl;
		}
	}
}

int main()
{
	student s[1000];
	int n,x;
	cin>>x;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>s[i].name>>s[i].marks;
	}
	bucketSort(s,n,x);
	return 0;
}