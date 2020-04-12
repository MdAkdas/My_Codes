 /******************************************
* AUTHOR : MD AKDAS AHMAD *
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

const int inf=(int)1e9;
  map<ll,bool>mp;

int main() 
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   ll t,s,n;
   cin>>t>>s;

   while(t--)
   {
   	cin>>n;
   	
   	ll a[n],b[n];
     ll i;
     ll count=0;
    
   
    rep(i,n)
   	cin>>a[i];
   	sort(a,a+n);

   	rep(i,n)
   	{
   	cin>>b[i];
    }
    sort(b,b+n);

       
       
       if(a[0]>=b[0])
       {
        cout<<"NO"<<endl;
        continue;
       }

      mp.insert({a[0],true});
      mp.insert({b[0],true});
       count++;

       // for(auto it=mp.begin();it!=mp.end();it++)
       //  {
       //    cout<<(*it).first<<" "<<(*it).second<<" "<<endl;
       //  }

       

	    for(ll i=1;i<n;i++)
	    { 
        if(mp.find(a[i])!=mp.end()&& mp[a[i]]==true)
        {
            if(b[i]>a[i])
              { 
                 count++;
                 mp.insert({a[i],true});
                 mp.insert({b[i],true});

              }
          
        }         
	    }
      if(count==n)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl; 
        mp.clear();   

   }
   
 return 0;
}