#include<iostream>
#include<vector>
using namespace std;

#define N 10000
int p[N];
vector<int>primes;

void prime_seive()
{
	for(int i=3;i<N;i+=2)
	{
		p[i]=1;
	}

	p[0]=p[1]=0;
	p[2]=1;

	for(int i=3;i<N;i+=2)
	{
		if(p[i]==1)
		{
			for(int j = i*i;j<N;j+=i)
			{
				p[j]=0;
			}
		}
	}
	
	for(int i=1;i<1000;i++)
	{
		if(p[i]==1)
		{
			primes.push_back(i);
		}
	}
}

int main()
{
	int n;
	cin>>n;

	prime_seive();

	for(int i=0;i<=n;i++)
	{
		if(primes[i]>n)
			break;
		
		cout<<primes[i]<<endl;

	}
	cout<<endl;
	return 0;
}