//given 1-A, 2-B, ....12-L...
#include <iostream>
using namespace std;

void generateString(char *input,char *output,int i,int j)
{	
	//base case
	if(input[i]=='\0')
	{
		output[j]='\0';
		cout<<output<<endl;
		return;
	}

	//rec case
	int digit = input[i]-'0';
	if(digit!=0)
	{
		char ch = digit -1 + 'A';

		//one digit at a time
		output[j]=ch;
		generateString(input,output,i+1,j+1);
	}

	if(input[i+1]!='\0')
	{
		int secondDigit = input[i+1]-'0';
		int number = digit*10+secondDigit;

		if(number<27)
		{
			char ch = number-1 + 'A';
			output[j]=ch;
			generateString(input,output,i+2,j+1);
		}
	}
	return;

}

int main()
{
	char input[100];
	cin>>input;
	char output[100];

	generateString(input,output,0,0);
	return 0;
}