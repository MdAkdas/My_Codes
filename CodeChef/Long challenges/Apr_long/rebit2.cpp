#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

const int M = 998244353;
struct value
{
    ll zero, one, a, A;
    int pow_f;
};

vector<char> st;
vector<value> L;
vector<value> R;
string operator1 = "^|&";

ll power_modulo(ll b, int p)
{
    ll r = 1;
    for (; p; b = b * b % M, p /= 2)
        if (p & 1)
            r = r * b % M;
    return r;
}

void final_ans(ll p, int pf)
{
    ll q = power_modulo((ll)4, pf);
    ll ans = p * power_modulo(q, M - 2) % M;
    cout << ans << " ";
}

struct value calc(char current_operator)
{
    // cout << "Calculating for operator : " << current_operator << endl;
    struct value ans;
    ll value1, value2, value3, value4;
    int p;
    struct value L1 = L.back();
    struct value R1 = R.back();
    L.pop_back();
    R.pop_back();

    if (current_operator == '|') {
        value1 = L1.zero * R1.zero, value1 %= M;
        value2 = (L1.zero + L1.one + L1.a + L1.A) * R1.one % M + (L1.one + L1.A) * R1.a % M + (L1.one + L1.a) * R1.A % M + L1.one * R1.zero % M, value2 %= M;
        value3 = L1.zero * R1.a % M + L1.a * R1.zero % M + L1.a * R1.a % M, value3 %= M;
        value4 = L1.zero * R1.A % M + L1.A * R1.zero % M + L1.A * R1.A % M, value4 %= M;
        p = L1.pow_f + R1.pow_f;
        ans = {value1, value2, value3, value4, p};
    }

    else if (current_operator == '&')
    {
        value1 = (L1.zero + L1.one + L1.a + L1.A) * R1.zero % M + L1.zero * (R1.one + R1.a + R1.A) % M + L1.a * R1.A % M + L1.A * R1.a % M, value1 %= M;
        value2 = L1.one * R1.one, value2 %= M;
        value3 = L1.one * R1.a % M + L1.a * R1.one % M + L1.a * R1.a % M, value3 %= M;
        value4 = L1.one * R1.A % M + L1.A * R1.one % M + L1.A * R1.A % M, value4 %= M;
        p = L1.pow_f + R1.pow_f;
        ans = {value1, value2, value3, value4, p};
    }

    else
    {
        value1 = L1.zero * R1.zero % M + L1.one * R1.one % M + L1.a * R1.a % M + L1.A * R1.A % M, value1 %= M;
        value2 = L1.zero * R1.one % M + L1.one * R1.zero % M + L1.a * R1.A % M + L1.A * R1.a % M, value2 %= M;
        value3 = L1.a * R1.zero % M + L1.zero * R1.a % M + L1.A * R1.one % M + L1.one * R1.A % M, value3 %= M;
        value4 = L1.A * R1.zero % M + L1.zero * R1.A % M + L1.a * R1.one % M + L1.one * R1.a % M, value4 %= M;
        p = L1.pow_f + R1.pow_f;
        ans = {value1, value2, value3, value4, p};
    }

    // cout << value1 << '\t' << value2 << '\t' << value3 << '\t' << value4 << endl;
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    struct value ans;
    if(s.length()<400)
    {
       
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || operator1.find(s[i]) != string::npos)
                st.push_back(s[i]);

            if (s[i] == '#')
            {
                if (st.empty() || st.back() == '(')
                {
                    struct value v = {(ll)1, (ll)1, (ll)1, (ll)1, 1};
                    L.push_back(v);
                }

                else
                {
                    struct value v = {(ll)1, (ll)1, (ll)1, (ll)1, 1};
                    R.push_back(v);
                }
            }

            if (s[i] == ')')
            {
                ans = calc(st.back());
                st.pop_back();
                st.pop_back();
                if (st.empty() || st.back() == '(')
                    L.push_back(ans);
                else
                    R.push_back(ans);
            }
        }

    }

    ans = L.back();
    final_ans(ans.zero, ans.pow_f);
    final_ans(ans.one, ans.pow_f);
    final_ans(ans.a, ans.pow_f);
    final_ans(ans.A, ans.pow_f);

    cout << endl;
    st.clear();
    L.clear();
    R.clear();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
     freopen("input.txt","r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
