#include <iostream>
using namespace std;
#define R 10
#define C 10
void print_spiral(int n, int m, int arr[R][C])
{
    int i, k = 0, l = 0;

    int cnt = 0;
    // elements in matrix
    int total = m * n;

    while (k < m && l < n)
    {
        if (cnt == total)
            break;

        // Printing the first column
        for (i = k; i < m; ++i)
        {
            cout << arr[i][l] << ", ";
            cnt++;
        }
        l++;

        if (cnt == total)
            break;

        // Printing the last row from
        for (i = l; i < n; ++i)
        {
            cout << arr[m - 1][i] << ", ";
            cnt++;
        }
        m--;

        if (cnt == total)
            break;

        // Print the last column
        // from the remaining columns
        if (k < m)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << arr[i][n - 1] << ", ";
                cnt++;
            }
            n--;
        }

        if (cnt == total)
            break;

        // Print the first row
        // from the remaining rows
        if (l < n)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << arr[k][i] << ", ";
                cnt++;
            }
            k++;
        }
    }
    cout << "END" << endl;
}
int main()
{
    int t, n, m;
    cin >> n >> m;
    int arr[R][C];
    for (int i = 0; i < n; i++)// C++ implementation to print
// the counter clock wise
// spiral traversal of matrix
#include <bits/stdc++.h>
using namespace std;

#define R 10
#define C 10

// function to print the
// required traversal
void counterClockspiralPrint(int m,
                             int n,
                             int arr[R][C])
{
    int i, k = 0, l = 0;

    int cnt = 0;
    // elements in matrix
    int total = m * n;

    while (k < m && l < n)
    {
        if (cnt == total)
            break;

        // Printing the first column
        for (i = k; i < m; ++i)
        {
            cout << arr[i][l] << ", ";
            cnt++;
        }
        l++;

        if (cnt == total)
            break;

        // Printing the last row from
        for (i = l; i < n; ++i)
        {
            cout << arr[m - 1][i] << ", ";
            cnt++;
        }
        m--;

        if (cnt == total)
            break;

        // Print the last column
        // from the remaining columns
        if (k < m)
        {
            for (i = m - 1; i >= k; --i)
            {
                cout << arr[i][n - 1] << ", ";
                cnt++;
            }
            n--;
        }

        if (cnt == total)
            break;

        // Print the first row
        // from the remaining rows
        if (l < n)
        {
            for (i = n - 1; i >= l; --i)
            {
                cout << arr[k][i] << ", ";
                cnt++;
            }
            k++;
        }
    }
    cout << "END" << endl;
}

// Driver Code
int main()
{
    int t, n, m;
    cin >> n >> m;
    int arr[R][C];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    counterClockspiralPrint(n, m, arr);
    return 0;
}

    {
        for (int j = 0; j < m; j++)
            cin >> arr[i][j];
    }
    print_spiral(n,m,arr);

    return 0;
}

/* 4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44 */