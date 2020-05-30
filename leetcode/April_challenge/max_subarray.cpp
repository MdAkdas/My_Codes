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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t,n,i,j,p,q,r,flag=0,temp;
    cin>>n;
    int a[n];
    rep(i,n)
    {
        cin>>a[i];
    }

    int cs=0,ms1=INT_MIN,ms=0,f0=0;

    for(int i=0;i<n;i++)
    { 
        if(a[i]==0)
        {
            f0=1;
        }
        cs=cs+a[i];
        if(cs<0)
        {   
            ms1=max(cs,ms1);
            cs=0;
        } 
        //cout<<"cs "<<cs<<endl;
        ms=max(cs,ms);
        //cout<<"ms "<<ms<<endl;
    }
    
    if(f0==1 || ms>0)
        cout<<ms<<endl;
    else
     cout<<ms1<<endl;

    return 0;
}