
#include <bits/stdc++.h>
using namespace std;

long long dp1[100000 + 1] = {0}, dp2[100000 + 1] = {0}, dp3[100000 + 1] = {0}, dp4[100000 + 1] = {0}, dp5[100000 + 1] = {0};
long long factorCount[100000 + 1] = {0};
bool prime[100000 + 1];

int maximumNumberDistinctPrimeRange(int m, int n)
{
    
    for (int i = 0; i <= n; i++)
    {
        factorCount[i] = 0;
        prime[i] = true; // Used in Sieve
    }

    for (int i = 2; i <= n; i++)
    {

       
        if (prime[i] == true)
        {

            // Number is prime
            factorCount[i] = 1;

            // number of factor of a prime number is 1
            for (int j = i * 2; j <= n; j += i)
            {

                // incrementing factorCount all
                // the factors of i
                factorCount[j]++;

                // and changing prime status to false
                prime[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        //cout << i << " " << factorCount[i] << endl;

        if (factorCount[i] == 1)
        {
            dp1[i] = 1;
        }
        else if (factorCount[i] == 2)
        {
            dp2[i] = 1;
        }
        else if (factorCount[i] == 3)
        {
            dp3[i] = 1;
        }
        else if (factorCount[i] == 4)
        {
            dp4[i] = 1;
        }
        else if (factorCount[i] == 5)
        {
            dp5[i] = 1;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        dp1[i] += dp1[i - 1];
        dp2[i] += dp2[i - 1];
        dp3[i] += dp3[i - 1];
        dp4[i] += dp4[i - 1];
        dp5[i] += dp5[i - 1];
    }
    
}

// Driver code
int main()
{
    int t;
    cin >> t;
    maximumNumberDistinctPrimeRange(2, 100000);
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        

        long long ans = 0;

        if (k == 1)
        {
            ans = dp1[b] - dp1[a];
           
            if (factorCount[a] == 1)
            {
                ans++;
            }
        }
        else if (k == 2)
        {
            ans = dp2[b] - dp2[a];
            if (factorCount[a] == 2)
                ans++;
        }
        else if (k == 3)
        {
            ans = dp3[b] - dp3[a];
            if (factorCount[a] == 3)
                ans++;
        }
        else if (k == 4)
        {
            ans = dp4[b] - dp4[a];
            if (factorCount[a] == 4)
                ans++;
        }
        else if (k == 5)
        {
            ans = dp5[b] - dp5[a];
            if (factorCount[a] == 5)
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}

/* 4
2 5 1
4 10 2
14 15 2
2 20 3 */