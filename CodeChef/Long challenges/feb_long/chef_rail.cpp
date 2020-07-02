 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define dl double
#define N 100005
#define MOD 1000000007
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair

const int inf=(int)1e9;
 
 bool check(dl x1,dl x2,dl x3)
  {  
  	dl h=pow((x1-x2),2);
  	//cout<<"h "<<h<<endl;

  	dl b=pow(x3,2)+pow(x2,2);
  	//cout<<"b "<<b<<endl;

  	dl p=pow(x3,2)+pow(x1,2);
  	//cout<<"p "<<p<<endl;


  	if(h==b+p||b==h+p||p==h+b)
  		return true;

  	else
  		return false;
  }

int main() 
{  
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   ll t,n,m,i;
   cin>>t;

   while(t--)
   { cin>>n>>m;
   	  vector<dl>a,b,yp,yn,xp,xn;
   	  dl y;
   	  ll count=0;
   	  rep(i,n)
   	  { cin>>y;
   	    a.pb(y);
   	   if(y>=0)
   	   	xp.pb(y);
   	    if(y<=0)
   	   	xn.pb(y);
   	  }

   	  sort(xp.begin(),xp.end());
   	  sort(xn.begin(),xn.end(),greater<int>());

   	 /* for(auto it=a.begin();it<a.end();it++)
   	   	   cout<<*it<<" ";
   	   	cout<<endl;*/

   	  rep(i,m)
   	  {
   	   cin>>y;
       b.pb(y);
   	   if(y>=0)
   	   	yp.pb(y);
   	   if(y<=0)
   	   	yn.pb(y);
   	  }

   	   sort(yp.begin(),yp.end());
   	   sort(yn.begin(),yn.end(),greater<int>());
      /*for(auto it=yp.begin();it<yp.end();it++)
   	   	   cout<<*it<<" ";
   	   	   	   	cout<<endl;
       for(auto it=yn.begin();it<yn.end();it++)
   	   	   cout<<*it<<" ";
   	   	   	   	cout<<endl;  */

   	   for(auto i=yp.begin();i<yp.end();i++)
   	   {  
         for(auto j=yn.begin();j<yn.end();j++)
             {
               for(auto k=a.begin();k<a.end();k++)
               	  {
               	  	//cout<<*i<<" "<<*j<<" "<<*k<<endl;
                    if(check(*i,*j,*k)&& *i!=*j)
                    { 
               	  	 cout<<*i<<" "<<*j<<" "<<*k<<endl;

                    	count++;
                    	//break;
                    }

               	  }

             }



   	   }
   	   //cout<<"count 1 "<<count<<endl;

   	   for(auto i=xp.begin();i<xp.end();i++)
   	   {  
         for(auto j=xn.begin();j<xn.end();j++)
             {
               for(auto k=b.begin();k<b.end();k++)
               	  {
               	  	//cout<<*i<<" "<<*j<<" "<<*k<<endl;
                    if(check(*i,*j,*k)&& *i!=*j)
                    {cout<<*i<<" "<<*j<<" "<<*k<<endl;
                    	count++;
                    	//break;
                    }
               	  }

             }
   	   }
   	    cout<<count<<endl;

        

   }

 return 0;
}