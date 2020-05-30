#include <iostream>
using namespace std;

#define ll long long

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll mulFive = 5, count = 0;

        for (ll i = 1; mulFive <= n; i++)
        {
            count += n / mulFive;
            mulFive *= 5;
        }
        cout << count << endl;
    }
}