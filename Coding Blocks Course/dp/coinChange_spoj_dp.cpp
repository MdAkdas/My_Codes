#include <iostream>
#include<vector>
#include<map>
using namespace std;

map<long long int,long long int>dp;

long long int coinChange(long long int n)
{
    if(n<=8)return n;
    if(dp[n]!=0)
    {
        return dp[n];
    }
    
     dp[n]=max(n, coinChange(n/2)+coinChange(n/3)+coinChange(n/4));
   
    return dp[n];
}

int main() {
    long long int n;
    while(scanf("%lld", &n)!= EOF)
    {
    printf("%lld \n", coinChange(n));
    }
    return 0;
}
