#include<iostream>

using namespace std;

#define int_ll long long

int_ll optimalGame(int_ll n, int_ll coins[])
{
    int_ll dp[n][n];

    for(int i=0;i<n;i++)
     for(int j=0;j<n;j++)
        dp[i][j]=0;

    int_ll i,j;

    for(j=0;j<n;j++)
        dp[j][j]=coins[j];


    for(j=0;j<n-1;j++)
        dp[j][j+1]=max(coins[j],coins[j+1]);
    
    for(i=2;i<n;i++)
    {
        for(j=0;j+i<n;j++)
        {
            int_ll x=coins[j]+min(dp[j+2][j+i],dp[j+1][j+i-1]);

            int_ll y=coins[j+i]+min(dp[j+1][j+i-1],dp[j][j+i-2]);
            /*cout<<"x "<<x<<endl;
            cout<<"y "<<y<<endl;*/

            dp[j][j+i]=max(x,y);

        }

    }
   /* for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;

    }cout<<endl;*/
    
    return dp[0][n-1];

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int_ll i,n;
    cin>>n;
    int_ll coins[n];
    for(i=0;i<n;i++)
        cin>>coins[i];

    cout<<optimalGame(n,coins);
    cout<<endl;

    return 0;

}