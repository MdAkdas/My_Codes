#include <iostream>
using namespace std;

void move(int n,char src,char helper,char dist)
{
	if(n==0)
		return;

	//move n-1 from src to helper
	move(n-1,src,dist,helper);
	cout<<"shifting "<<n<<"th disk from "<< src <<" to " << dist<<endl;
	//move the n-1 disks from helper to dist
	move(n-1,helper,src,dist);

}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	move(n,'A','B','C');
	return 0;
}