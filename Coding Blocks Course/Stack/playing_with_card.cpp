#include<iostream>
#include<stack>
using namespace std;


int main()
{

    int n;
    cin>>n;
    int q;
    cin>>q;
    int num;
    stack<int>S;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        S.push(num);
    } 

    int sieve[10000]={0};
    for(int i=1;i<10000;i=i+2)
    {
        sieve[i]=1;
    }
    sieve[0]=0;
    sieve[1]=0;
    sieve[2]=1;
    for(int i=3;i<1000;i=i+2)
    {
        if(sieve[i]!=0)
        {
            for(int j=i*i;j<10000;j=j+2*i)
            {
                sieve[j]=0;
            }
        }
    }
    int primes[10000];
    int j=0;
    for(int i=0;i<=10000;i++)
    {
        if(sieve[i]==1)
        {
            primes[j]=i;
            j++;
        }
    }
    
    stack<int> A,B;
    int data;
    for(int i=0;i<q;i++)
    {
        while(!S.empty())
        {
            data=S.top();
            if(data%primes[i]==0)
                B.push(data);
            else
                A.push(data);
            S.pop();
        }
        while(!B.empty())
        {
            cout<<B.top()<<endl;
            B.pop();
        }
        S=A;
        if(A.empty())
        {
            break;
        }
        while(!A.empty())
        {
            A.pop();
        }
    }
    while(!S.empty())
    {
        cout<<S.top()<<endl;
        S.pop();
    }
    return 0;
}
