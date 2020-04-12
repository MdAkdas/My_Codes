#include <bits/stdc++.h>
#define ll unsigned long long
#define endl '\n'
using namespace std;

#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second


const int M = 998244353;
struct value
{
    ll zero, one, a, A, pow_f;
};
vector<char> st;
vector<value> L;
vector<value> R;
string opr = "^|&";

ll powM(ll b, int p)
{
    ll r = 1;
    for (; p; b = ((b%M) * (b%M)) % M, p /= 2)
        if (p & 1)
            r = ((r%M) * (b % M))%M;
    return r;
}

void final_ans(ll p, ll pf)
{
    ll ans = p % M * powM((ll)pow(4, pf) % M, M - 2) % M;
    cout << ans << " ";
}
struct value calc(char current_oprator)
{
     //cout << "Calculating for opr : " << current_oprator << endl;
    struct value ans;
    ll v1, v2, v3, v4, p;
    struct value L1 = L.back();
    struct value R1 = R.back();
    L.pop_back();
    R.pop_back();

    if (current_oprator == '|')
    {
        v1 = L1.zero * R1.zero;
        v2 = (L1.zero + L1.one + L1.a + L1.A) * R1.one + (L1.one + L1.A) * R1.a + (L1.one + L1.a) * R1.A + L1.one * R1.zero;
        p = L1.pow_f + R1.pow_f;
        v3 = v4 = ((ll)pow(4, p) - v1 - v2) / 2;
        ans = {v1, v2, v3, v4, p};
    }

    else if (current_oprator == '&')
    {
        v1 = (L1.zero + L1.one + L1.a + L1.A) * R1.zero + L1.zero * (R1.one + R1.a + R1.A) + L1.a * R1.A + L1.A * R1.a;
        v2 = L1.one * R1.one;
        p = L1.pow_f + R1.pow_f;
        v3 = v4 = ((ll)pow(4, p) - v1 - v2) / 2;
        ans = {v1, v2, v3, v4, p};
    }

    else
    {
        v1 = L1.zero * R1.zero + L1.one * R1.one + L1.a * R1.a + L1.A * R1.A;
        v2 = L1.zero * R1.one + L1.one * R1.zero + L1.a * R1.A + L1.A * R1.a;
        p = L1.pow_f + R1.pow_f;
        v3 = v4 = ((ll)pow(4, p) - v1 - v2) / 2;
        ans = {v1, v2, v3, v4, p};
    }
    return ans;
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt","r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
           string s;
           cin >> s;

           struct value ans;
           for (int i = 0; i < s.length(); i++)
           {
            if (s[i] == '(' || opr.find(s[i]) != string::npos)
                st.push_back(s[i]);

            if (s[i] == '#')
            {
                if (st.empty() || st.back() == '(')
                {
                    struct value v = {1, 1, 1, 1, 1};
                    L.push_back(v);
                }

                else
                {
                    struct value v = {1, 1, 1, 1, 1};
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

        ans = L.back();

        // cout << ans.zero << endl;
        // cout << ans.one << endl;
        // cout << ans.a << endl;
        // cout << ans.A << endl;
        final_ans(ans.zero, ans.pow_f);
        final_ans(ans.one, ans.pow_f);
        final_ans(ans.a, ans.pow_f);
        final_ans(ans.A, ans.pow_f);
        cout << endl;
        //cout << endl;
        st.clear();
        L.clear();
        R.clear();
    }

    return 0;
}
