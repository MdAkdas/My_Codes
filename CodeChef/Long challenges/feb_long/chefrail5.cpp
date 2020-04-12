
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
#define max 1000000
const int inf=(int)1e9;


int main() 
{  
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
    ll t,n,m,i,x,y;
   cin>>t;

   while(t--)
   {     cin>>n>>m;

	   	vector<int>a,b;

      vector<int>arr1(2*N,0);
      vector<int>arr3(2*N,0);

	   	ll zx=0,zy=0,mycount=0;
      ll z;
    rep(i,n)
    { cin>>z;
        a.pb(z);
    		arr1[a[i]+1e5]=1;
    	if(a[i]==0)
    	{
    		zx=1;
    	}
    }

    rep(i,m)
    { cin>>z;
      b.pb(z);
    		arr3[b[i]+1e5]=1;
    	if(b[i]==0)
    	{
    		zy=1;
    	}
    }

    float f=0;
    ll s;

    rep(i,n)
    {  x=a[i];
    	
    	if(x==0)
    		continue;

       rep(j,m)
       {  if(b[j]==0)
            continue;

       	f=-(((float)b[j]*(float)b[j])/(float)x);
       
       	if(floor(f)-f!=0)
       	{ 
       		continue;
       	}

          s=(ll)f;
       	
       	 	if(arr1[s+1e5]==1)
       	 		{ 
       	 		   mycount++;
       	 		  // cout<<"a[i] b[j] s arr1 "<<a[i]<<" "<<b[j]<<" "<<s<<endl;
       	 	    }

       	 
       	 }
       	 

       }
   
    rep(i,m)
    {  y=b[i];
    	
    	if(y==0)
    		continue;

       rep(j,n)
       { if(a[j]==0)
           continue;

       	f=-(((float)a[j]*(float)a[j])/(float)y);
       	
       	
       	if(floor(f)-f!=0)
       	{
       		continue;
       	}
       	  s=(ll)f;
       	
       	 	if(arr3[s+1e5]==1)
       	 		{ 
       	 		mycount++;
       	 		//cout<<"b[i] a[j] s arr3 "<<b[i]<<" "<<a[j]<<" "<<s<<endl;
       	 	    }
       	 
         }
      }

     mycount/=2;

    if(zx==1&&zy==1)
     	mycount+=2*(n-1)*(m-1);
     else if(zx==1)
     	mycount+=(n-1)*m;
     else if(zy==1)
     	mycount+=(m-1)*n;

   cout<<mycount<<endl;


    }
 return 0;
}