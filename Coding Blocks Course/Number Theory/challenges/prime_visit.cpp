#include<iostream>
using namespace std;
#define N 10000000

bool isPrime[N];

void prime(int a, int b) 
{
    int count = 0;
    for (int i = a; i <= b; i++) 
    {
        if (isPrime[i]) 
        {
            count++;
        }
    }
    cout << count << endl;
    return;
}

void gen_primes()
{
    for(unsigned i=3; i<=N; i+=2)
    {
        isPrime[i]=true;
    }
    isPrime[0]=isPrime[1]=false;

    isPrime[2]=true;
    for(unsigned i=2;i*i<=N;i++)
    {
        if(isPrime[i])
        {
        for(unsigned j=i;j*i<=N;j++) 
            isPrime[i*j]=false;
        }
    }
}

int main()
{
  int t;
  cin>>t;
  gen_primes();

  while (t--) 
    {
        int a, b;
        cin>>a>>b;
        prime(a, b);
    }

return 0;
}
