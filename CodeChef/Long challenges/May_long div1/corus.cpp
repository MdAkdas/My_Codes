#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void solve(long long a[], long long c)
{
    //cout<<"hi";
    /* for(int i=0;i<26;i++)
    cout<<a[i]<<" "; */
    //cout<<endl;
    for (int i = 0; i < 26; i++)
    {
        a[i] -= c;

        if (a[i] < 0)
            a[i] = 0;
    }

    int count = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] > 0)
            count += a[i];
    }
    /* for(int i=0;i<26;i++)
    cout<<a[i]<<" ";
    cout<<endl; */

    cout << count << endl;
}

int main()
{
    /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); */
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
       //cout<<"hi";
        long long a[26];
        memset(a, 0, sizeof(a));
        char c;

        for (int i = 0; i < n; i++)
        {
            cin >> c;
            a[c - 'a']++;
        }

        while (q--)
        {
            long long c;
            cin >> c;
            long long b[26];
            for(int i=0;i<26;i++)
                 b[i]= a[i];
            
            solve(b, c);
        }
    }
    return 0;
}