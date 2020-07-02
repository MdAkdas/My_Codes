#include <iostream>
#include<bitset>

using namespace std;
#define int long long

int getR(int n)
{
    while(n%2==0)
    {
        n/=2;
    }
    return n;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;

        cin>>a>>b;
        
        if(a>b)
        {
            swap(a,b);
        }
        int r = getR(a);

        if(r!=getR(b))
        {
            cout<<"-1"<<endl;
            continue;
        }
        int ans=0;
        b=b/a;

        while(b>=8)
        {
            b=b/8;
            ans++;
        }
        if(b>1)
            ans++;

        cout<<ans<<endl;
    }

}