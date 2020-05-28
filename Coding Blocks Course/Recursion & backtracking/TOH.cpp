#include<iostream>
using namespace std;

void TOH(int n, string src, string dest, string aux)
{
	if(n==0)
	return;
    
    //cout<<"Moving "<<n-1<<" disc to aux."<<endl;
	TOH(n-1, src, aux, dest);
	cout<<"Moving "<<n<<" disc from "<<src<<" to "<<dest<<endl;
	TOH(n-1, aux, dest, src);
    return;
}

int main()
{	
	freopen("output.txt", "w", stdout);	int n;
	char s,d,a;
	//cout<<"Enter the no. of disc : ";
	//cin>>n;
	TOH(3,"1","3","2");

	return 0;

}