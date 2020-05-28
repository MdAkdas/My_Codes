#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int minStep_topDown(int n, int dp[])
{
    if (n == 1) //base case
        return 0;

    if (dp[n] != 0)
    {
        return dp[n];
    }

    int ans1 = minStep_topDown(n - 1, dp) + 1, ans2 = INT_MAX, ans3 = INT_MAX;
    if (n % 2 == 0)
    {
        ans2 = minStep_topDown(n / 2, dp) + 1;
    }
    if (n % 3 == 0)
    {
        ans3 = minStep_topDown(n / 3, dp) + 1;
    }
    dp[n] = min(ans1, min(ans2, ans3));
}

int minStep_bottomUp(int n)
{
    int dp[n + 1] = {0};
    dp[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        int ans1 = INT_MAX, ans2 = INT_MAX, ans3 = INT_MAX;
        //cout<<ans1<<endl;
        ans1 = dp[i - 1] + 1;
        if (i % 2 == 2)
            ans2 = dp[i / 2] + 1;
        if (i % 3 == 0)
            ans3 = dp[i / 3] + 1;

        dp[i] = min(ans1, min(ans2, ans3));
        //cout << i << " " << dp[i] << endl;
    }
    return dp[n];
}

int main()
{
    int n;

    cin >> n;
    int dp[n + 1] = {0};
    cout << minStep_topDown(n, dp) << endl;
    cout << minStep_bottomUp(n) << endl;
}
