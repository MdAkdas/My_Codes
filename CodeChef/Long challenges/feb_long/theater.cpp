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
#define mp make_pair

const int inf=(int)1e9;


int main() 
{  
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   ll t,i,n,idx;
   char m;
   ll T,overAllPro=0;

   cin>>t;
   while(t--)
   {  ll a[4][4]={0},visited[4]={0},max[4]={0};
   	  cin>>n;

   	   rep(i,n)
   	   { cin>>m>>T;
          
          if(T==12)
          	T=0;
          if(T==3)
          	T=1;
          if(T==6)
          	T=2;
          if(T==9)
          	T=3;

   	   	  if(m=='A')
   	   	  	a[0][T]++;

   	   	  if(m=='B')
   	   	  	a[1][T]++;

   	   	  if(m=='C')
   	   	  	a[2][T]++;

   	   	  if(m=='D')
   	   	  	a[3][T]++;

   	   	}

   	   	 /* rep(i,4)
   	   	  {
   	   	   rep(j,4)
   	   	   {
   	   	     cout<<a[i][j]<<" ";
   	   	   }
   	   	   cout<<endl;
   	   	  } 
   	   	  cout<<endl; */

   	    rep(i,4)
   	    {  
   	    	rep(j,4)
   	    	{  if(a[j][i]>max[i] && visited[j]==0)
   	    		{ max[i]=a[j][i];
   	    			 idx=j;

   	    		}
   	    		

   	    	}
   	    	if(max[i]!=0)
   	    		{  
   	    		  visited[idx]=1;
   	    		 
   	    		}
   	    }

   	   /* rep(i,4)
   	    cout<<max[i]<<" ";
   	    cout<<endl;

   	    rep(i,4)
   	    cout<<visited[i]<<" ";
   	    cout<<endl;   */

   	    sort(max,max+4,greater<int>());
   	    
     
     ll proft=0,price=100;

   	    rep(i,4)
   	    { 
   	    	if(max[i]!=0)
   	    	{ proft+=max[i]*price;
   	    		   	    //cout<<" inside proft "<<proft<<endl;

   	    		price-=25;

   	    	}
   	    	if(max[i]==0)
   	    		proft-=100;

   	    }

   	    cout<<proft<<endl;
   	    overAllPro+=proft;
   }
   cout<<overAllPro<<endl;

 return 0;
}