#include<iostream>
using namespace std;

//in subsequence we have two choice of every element take it or leave it.

void printSubSeq(string input,char output[],int i,int j)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	//excluding current element
	printSubSeq(input,output,i+1,j);

	//including current element
	output[j]=input[i];
	printSubSeq(input,output,i+1,j+1);

	


}

int main()
{
	//char input[10]="abc";
	char output[10];

	string s;
	cin>>s;
	int n = (int)s.length();

	printSubSeq(s,output,0,0);
	cout<<(1<<n);
	return 0;
}
