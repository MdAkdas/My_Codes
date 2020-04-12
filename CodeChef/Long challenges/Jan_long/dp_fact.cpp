#include<bits/stdc++.h>
using namespace std;
int main()
{
 unsigned long long int t,n,a[100005],i,mod=1000000007;

        a[0]=1;

        for(i=1;i<=100000;i++)
        a[i]=(a[i-1]*i);

        cin >> t;

        while(t--)
        {
        cin >> n;
        cout << a[n] << "\n";
        }
 }