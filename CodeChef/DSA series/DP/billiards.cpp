#include <iostream>
using namespace std;
#define ll long long
#define MOD 1000000009
#define N 1000000

/* int billiards_TopDown(int n, int count)
{
    cout << "stck\t" << n << endl;

    if (n == 1 || n == 0)
        return 0;
    if (n == 2 || n == 3)
        return 1;

    int ans1 = 0, ans2 = 0;
    if (n - 2 >= 0)
        count += billiards(n - 2, count);
    cout << "count1 " << count << endl;

    if (n - 3 >= 0)
        count += billiards(n - 3, count);
    cout << "count2 " << count << endl;

    return count;
} */

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
        //cout << billiards_TopDown(n, 0) << endl;

        cout << dp[n] % MOD << endl;
    }
    return 0;
}
