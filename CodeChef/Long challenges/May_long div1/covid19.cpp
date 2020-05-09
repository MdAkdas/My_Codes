#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    /* freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); */
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
            prefx[i] = 1;
        }

        int maxm=0,minm=100;

        for (int i = 1; i < n; i++)
        {
            if ((a[i] - a[i - 1]) <= 2)
            {
                prefx[i] = prefx[i] + prefx[i - 1];
                prefx[i - 1] = 0;
                
            }
        }
        for (int i = 0; i < n; i++)
        {
            // cout << prefx[i] << " ";
            if(prefx[i]!=0)
            {
                maxm=max(maxm,prefx[i]);
                minm=min(minm,prefx[i]);
            }
        }
       // cout<<endl;
        cout<<minm<<" "<<maxm<<endl;
       
    }
    return 0;
}
