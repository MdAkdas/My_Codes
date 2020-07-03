#include<iostream>
using namespace std;

//in subsequence we have two choice of every element take it or leave it.

void printSubSeq(char input[],char output[],int i,int j)
{
	if(input[i]=='\0')
	{
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	//including current element
	output[j]=input[i];
	printSubSeq(input,output,i+1,j+1);

	//excluding current element
	printSubSeq(input,output,i+1,j);


}

int main()
{
	char input[10]="abc";
	char output[10];

	printSubSeq(input,output,0,0);
	return 0;
}
