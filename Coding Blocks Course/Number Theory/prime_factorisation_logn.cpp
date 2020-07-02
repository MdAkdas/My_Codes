//Prime factorisation in logn
//This can also be used in counting the numbers of factors. just multuply (count+1) of every prime

#include <iostream>
#include<vector>

using namespace std;

#define N 10000
int p[N];
vector<int>primes;

void prime_seive() //O(NloglogN)
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

void print_prime_factor(int n)
{
	vector<pair<int,int>> factors;
	int count;

	int i=0;
	int p = primes[i];

	while(p*p<n)
	{
		if(n%p==0)
		{
			count=0;
			while(n%p==0)
			{
				count++;
				n=n/p;
			}

			factors.push_back(make_pair(p,count));
			i++;
			p=primes[i];
		}
	}

	if(n!=1)
	{
		factors.push_back(make_pair(n,1));
	}

	for(auto p : factors)
	{
		cout<<p.first<<"^"<<p.second<<endl;
	}
}

int main()
{
	prime_seive();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		print_prime_factor(n);
	}

	return 0;
}