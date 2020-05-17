#include <iostream>
#include <cstring>
using namespace std;
#define ll long long
#define MOD 1000000009
#define N 1000000

 int billiards_TopDown(int n,int dp[])
{
    //cout << "stck\t" << n << endl;

    if(n==0)
        return 1;

    if(dp[n]!=0)
        return dp[n];

    int count1=0;
    if (n - 2 >= 0)
        count1 += billiards_TopDown(n - 2,dp);

    if (n - 3 >= 0)
        count1 += billiards_TopDown(n - 3,dp);

    return dp[n] = count1;
} 

int main()
{
    ll t, n;
    cin >> t;

    ll dp[N] = {0};
    dp[0] = 0, dp[1] = 0, dp[2] = 1, dp[3] = 1;

    for (int i = 4; i <= N; i++)
    {
        dp[i] = dp[i - 2] + dp[i - 3];
        dp[i] = dp[i] % MOD;
    }

    while (t--)
    {
        cin >> n;
        int dp1[100]={0};
       
        cout << billiards_TopDown(n,dp1) << endl;

        //cout << dp[n] % MOD << endl;
    }
    return 0;
}
