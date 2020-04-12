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
    ll t,n,i,j,p,q,r,flag=0,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;

        ll total= (n*(n+1)/2);

        ll a[n];
        ll a1[n]={};
        //cout<<n;
        rep(i,n)
        {
       
             cin>>a[i];
             if(a[i]<0)
             {
                a[i]= abs(a[i]);
             }
         }

        ll left[n]={};
        ll right[n]={};
        
        rep(i,n)
        {
            if(a[i]%2==0)
            {
                a1[i]=1;

            }
        }
        int count=0;
        rep(i,n)
        {
           // cout<<a1[i]<<" "<<endl;
            if(a1[i]==0)
            {
                 //cout<<a1[i]<<" "<<endl;

                count++;
                // cout<<count<<" "<<endl;
            }
            if(a1[i]==1)
            {
            	if(a[i]%4==0)
            	{
            		left[i]=0;
            		count=0;

                 
            	}
            	else
            	{
	               // cout<<count<<" "<<endl;
	                left[i]=count+1;
	                count=0;
	            }
            }
        }
        count=0;

        for(int i=n-1;i>=0;i--)
        {
            if(a1[i]==0)
            {
                //cout<<a1[i]<<" "<<endl;
                count++;
                //cout<<count<<" "<<endl;
            }
            if(a1[i]==1)
            {
            	if(a[i]%4==0)
            	{
            		right[i]=0;
            		count=0;              
            	}
            	else
            	{
	                //cout<<"RC "<<count<<" "<<endl;
	                right[i]=count+1;
	                count=0;
            	}
            }
        }

        // rep(i,n)
        // {
        //     cout<<a[i]<<" ";
            
        // }
        // cout<<endl;
        // rep(i,n)
        // {
        //     cout<<a1[i]<<" ";
            
        // }
        // cout<<endl;
        // rep(i,n)
        // {
            
        //     cout<<left[i]<<" ";
        // }
        // cout<<endl;
        // rep(i,n)
        // {
            
        //     cout<<right[i]<<" ";
        // }
        // cout<<endl;

        ll count1=0;
        rep(i,n)
        {
            if(a1[i]==1)
            {
                count1+=(left[i]*right[i]);
            }
        }
        // cout<<total<<endl;
        // cout<<count1<<endl;
        cout<<total-count1<<endl;



  

    }
    return 0;
}