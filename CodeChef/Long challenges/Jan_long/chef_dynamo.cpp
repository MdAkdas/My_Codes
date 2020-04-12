#include<bits/stdc++.h>
 using namespace std;
#define ll long long
int main()
{ ll t,n,a,S,b,c,d,e,r;
   cin>>t;

   while(t--)
   { cin>>n;
     cin>>a;

     ll res=1;
     for(ll i=1;i<=n;i++)    
         { res=res*10;

        }

      S=2*res+a;
      cout<<S<<endl;
    
          cin>>b;
         
          c=res-b;
          cout<<c<<endl;

          cin>>d;
          e=res-d;
          cout<<e<<endl;

          cin>>r;
          if(r==-1)
             exit(0);
          
          else
          continue;
    
   }
  return 0;
} 