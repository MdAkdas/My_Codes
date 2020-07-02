#include <iostream>
using namespace std;
#define ll unsigned long long

/* int countIncreasing(ll arr[], ll n)
{
    ll cnt = 0;

    ll len = 1;

    // Traverse through the array
    for (ll i = 0; i < n - 1; ++i)
    {
        if (arr[i + 1] >= arr[i])
            len++;

        else
        {
            cnt += (((len - 1) * len) / 2);
            len = 1;
        }
    }

    // If last length is more than 1
    if (len > 1)
        cnt += (((len - 1) * len) / 2);

    return cnt + n;
} */

int main()
{
    /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 */
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll cnt = 0;

        ll len = 1;

        // Traverse through the array
        for (ll i = 0; i < n - 1; ++i)
        {
            if (arr[i + 1] >= arr[i])
                len++;

            else
            {
                cnt += (((len - 1) * len) / 2);
                len = 1;
            }
        }

        // If last length is more than 1
        if (len > 1)
            cnt += (((len - 1) * len) / 2);

        cout << cnt + n << endl;

        //cout << countIncreasing(a, n) << endl;
    }
    return 0;
}