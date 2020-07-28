#include <iostream>
using namespace std;

void permute(char *input,int i)
{
	//base case
	if(input[i]=='\0')
	{
		cout<<input<<", ";
		return;
	}
	//recursion
	for(int j=i;input[j]!='\0';j++)
	{
		swap(input[i],input[j]);
		permute(input,i+1);

		//backtracking
		swap(input[i],input[j]);
	}

}

int main()
{
	char inp[10];
	cin>>inp;
	permute(inp,0);
	return 0;
}