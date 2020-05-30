#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll arr[n + 1];
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    int i1, i2, i3, count = n, steps = 0;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i)
        {
            i1 = i;       //2
            i2 = arr[i];  //8
            i3 = arr[i2]; //2
            if (i1 == arr[i3] && arr[i1] == i2)
            {
                steps++;
                arr[i2] = i2, arr[i3] = i3, arr[i1] = i1;
                v.push_back(i1);
                v.push_back(i2);
                v.push_back(i3);
                count -= 3;
            }
        }
    }

    vector<int> NotSet;
    int nextTwo[n];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] != i)
        {
            NotSet.push_back(arr[i]);
            cout<<arr[i]<<endl;
        }
    }

    for (int i = 1; i <= n;i++)
    {
        if (arr[i] == i)
        {
            continue;
        }
        else if (count == 2)
        {
            k = 0;
            break;
        }
        for (int k = 1; k <= n; k++)
            cout << arr[k] << " ";
        cout << endl;

        i1 = i;       //2
        i2 = arr[i];  //8
        i3 = arr[i2]; //2
        
        if (i1 == i3)
        {
            nextTwo[i1] = i2;
            // rep1(p,n)
            // cout<<fortwoa[p]<<" ";
            // cout<<endl;
            if (nextTwo[i1] == i2 && nextTwo[i2] == i1)
            {
                for (int j = NotSet.size() - 1; j >= 0; j--)
                {
                    if (NotSet[i] != i1 && NotSet[i] != i2)
                    {
                        i3 = NotSet[i];
                        break;
                    }
                }
            }
            else
            {
                
                continue;
            }
        }5
        cout<<"i1 "<<i1<<endl;
        cout<<"i2 "<<i2<<endl;
        cout<<"i3 "<<i3<<endl;

        steps++;
        v.push_back(i1);
        v.push_back(i2);
        v.push_back(i3);

        int x = arr[i2]; //2
        //cout<<"x "<<x<<endl;
        int y = arr[i3]; //6
        //cout<<"y "<<y<<endl;

        arr[i2] = arr[i], count--;
        auto it = find(NotSet.begin(), NotSet.end(), arr[i]);
        NotSet.erase(it); //a[8]=8 seta[8]=T

        arr[i3] = x; //a[4]=2
        if (i3 == x)
        {

            count--;
            auto it = find(NotSet.begin(), NotSet.end(), i3);
            NotSet.erase(it);
            //notseta.erase(v3);
        }

        arr[i1] = y; //a[2]=6
        if (i1 == y)
        {

            count--;
            auto it = find(NotSet.begin(), NotSet.end(), i1);
            NotSet.erase(it);
        }
    }
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << steps << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
}

int main()
{
    ll t, n;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}