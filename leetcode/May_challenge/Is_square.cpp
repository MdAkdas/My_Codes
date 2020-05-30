 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
#define endl "\n"


const int inf=(int)1e9;


int main() 
{  
    ios_base::sync_with_stdio(false);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t,num,i,j,p,q,r,flag=0,temp;
    cin>>t;
    while(t--)
    {
        cin>>num;

        if(num == 1) 
            cout<<"1"<<endl;
        int l=0, r = num/2;
        while(l <= r)
        {
            double mid = l + (r-l)/2;
            cout << mid << endl;
            cout << num/mid << endl;
            if(mid==num/mid)
             cout<<"1"<<endl;
            if(mid> num/mid){
                r = mid-1;
            }
            else l = mid+1;
        }
        cout<<"0"<<endl;
    }
    return 0;
}