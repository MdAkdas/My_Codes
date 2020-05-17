

#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define rep1(i, b) for (int i = 1; i <= b; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

const int inf = (int)1e9;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    ll t, n, i, j, p, q, flag = 0, temp;

    cin >> t;
    while (t--)
    {
        ll x, y, l, r, i;
        cin >> x >> y >> l >> r;

        if (x == 0 || y == 0)
            cout << "0" << endl;

        else
        {
            bitset<64> kb1;
            bitset<64> kb2;
            map<ll, ll> mp;

            bitset<64> rb(r);
            //cout <<"rgt "<< rb << endl;

            ll ans1 = (x & r) * (y & r);
            mp[r] = ans1;
            
            for (int i = 63; i >= 0; i--)
            {
                kb2.reset();
                if (rb[i] == 1)
                {
                        kb2 = r;
                        kb2[i] = 0; // us ind ko zer0. aur rght k sabhi 1
                        for (int j = i - 1; j >= 0; j--)
                            kb2[j] = 1;

                        ll z2 = kb2.to_ullong();

                        //cout<<"kb2 "<<kb2<<endl;

                        z2 = ((x | y) & (z2)); // x and y ka | fir z2 ke sath and

                        //bitset<62> a(z2);// commnt out for z2 in bits;
                        //cout<<"z2  "<<a<<endl;
                        //cout<<"z2 "<<z2<<endl;

                        ll ans2 = (x & z2) * (y & z2); // us z2 pe function value
                        //cout<<"ans2 "<<ans2<<endl;
                        if (z2 <= r) //agar r se chhoti. map m store
                        {
                            mp[z2] = ans2;
                        }
                }
            }

            ll val = 0;
            ll k = 0;
            //max value wali key prnt
            for (auto fk : mp)
            {
                if (fk.second > val)
                {
                    val = fk.second;
                    k = fk.first;
                }
                
            }
        
            cout << k << endl;
        }
    }
    return 0;
}
