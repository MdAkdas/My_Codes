#include <iostream>
using namespace std;

int wine_profit_TopDown(int wines[], int i, int j, int y)
{
    if (i > j)
        return 0;

    int ans1 = wines[i] * y + wine_profit_TopDown(wines, i + 1, j, y + 1);
    int ans2 = wines[j] * y + wine_profit_TopDown(wines, i, j - 1, y + 1);

    return max(ans1, ans2);
}
//Giving wrong output
int wine_profit_BootomUp(int wines[], int i, int j, int y, int dp[][100])
{
    if (i > j)
    {
       return 0;
    }
    if (dp[i][j] != 0)
    {
        return dp[i][j];
    }

    int ans1 = wines[i] * y + wine_profit_BootomUp(wines, i + 1, j, y + 1, dp);
    int ans2 = wines[j] * y + wine_profit_BootomUp(wines, i, j - 1, y + 1, dp);

    dp[i][j] = max(ans1, ans2);
}

int main()
{
    int wines[] = {2, 3, 5, 1, 4};
    int n = sizeof(wines) / sizeof(int);
    int y = 1;
    int dp[100][100] = {0};
    cout << wine_profit_TopDown(wines, 0, n - 1, y) << endl;
    cout << wine_profit_BootomUp(wines, 0, n - 1, y, dp) << endl;
}
