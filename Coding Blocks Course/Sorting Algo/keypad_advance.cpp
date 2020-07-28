#include <iostream>
#include<string>
using namespace std;

char table[][10] = { " ", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wx", "yz" };

void generate(char *in,char *out,int i,int j,int &count)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<" ";
		count++;
		return;
	}
	int digit = in[i]-'0';

	if(digit==0)
		generate(in,out,i+1,j,count);

	for(int k=0;table[digit][k]!='\0';k++)
	{
		out[j]=table[digit][k];
		generate(in,out,i+1,j+1,count);
	}
	return ;


}

int main()
{
	char input[1000];
	char output[1000];
	cin>>input;
	int count=0;
	generate(input,output,0,0,count);
	cout<<"\n"<<count<<endl;
	return 0;
}