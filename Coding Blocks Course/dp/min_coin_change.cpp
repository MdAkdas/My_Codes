//Complexity O(TN)

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int minCoinChange_Topdown(int n, int coins[], int T, int dp[])
{
    if (n == 0)
        return 0;

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans = INT_MAX;
    for (int i = 0; i < T; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subProblem = minCoinChange_Topdown(n - coins[i], coins, T, dp) + 1;
            ans = min(ans, subProblem);
        }
    }
    dp[n] = ans;
    return dp[n];
}

int minCoinChange_BottomUp(int N, int coins[], int T, int dp[])
{
    dp[0] = 0;

    for (int n = 1; n <= N; n++)
    {
        dp[n] = INT_MAX;

        for (int j = 0; j < T; j++)
        {
            if (n - coins[j] >= 0)
            {
                int subProblme = dp[n - coins[j]] + 1;
                dp[n] = min(dp[n], subProblme);
            }
        }
        //dp[i]=ans;
    }
    /* for(int i =0;i<=N;i++)
    cout<<dp[i]<<" ";
    cout<<endl;  */
    return dp[N];
}

int main()
{
    int n;
    cin >> n;
    int coin[] = {1, 7, 10};
    int dp[100] = {0};
    int type = sizeof(coin) / sizeof(int);
    cout << minCoinChange_Topdown(n, coin, type, dp) << endl
         << endl;
    cout << minCoinChange_BottomUp(n, coin, type, dp) << endl
         << endl;

    return 0;
}