#include <iostream>
#include<vector>
#include<string>

using namespace std;

class student
{
public:
	string name;
	int marks;
};

void bucketSort(student s[],int n)
{
	vector<student>v[101];

	for(int i=0;i<n;i++)
	{
		int m=s[i].marks;
		v[m].push_back(s[i]);
	}

	for(int i=100;i>=0;i--)
	{
		for(auto el : v[i])
		{
			cout<<el.marks<<" "<<el.name<<endl;
		}
	}
}

int main()
{
	student s[1000];
	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>s[i].name>>s[i].marks;
	}
	bucketSort(s,n);
	return 0;
}