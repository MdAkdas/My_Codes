#include <iostream>
#include<string>
using namespace std;

char table[][10] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };

void generate(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<endl;
		return;
	}
	int digit = in[i]-'0';

	if(digit==0)
		generate(in,out,i+1,j);

	for(int k=0;table[digit][k]!='\0';k++)
	{
		out[j]=table[digit][k];
		generate(in,out,i+1,j+1);
	}
	return ;


}

int main()
{
	char input[15];
	char output[15];
	cin>>input;
	generate(input,output,0,0);
	return 0;
}