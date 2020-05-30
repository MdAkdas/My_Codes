#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
     freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        int prefx[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int minm = n, max = 1,maxm;
        for (int i = 1; i < n; i++)
        {
            if (a[i] - a[i - 1] > 2)
            {

                minm = min(minm, max);
                max = 1;
            }
            else
            {
                max++;
            }
        }
        cout<<minm<<" "<<max<<endl;
    }
    return 0;
}