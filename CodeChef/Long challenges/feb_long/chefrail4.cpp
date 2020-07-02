
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
    ll t,n,m,i,x,y;
   cin>>t;

   while(t--)
   {     
   	    cin>>n>>m;

	   	ll a[n],b[m];
	   	ll zx=0,zy=0,count=0;

	   	vector<int>arr1(N,0);
		vector<int>arr2(N,0);
		vector<int>arr3(N,0);
		vector<int>arr4(N,0);
  	
       /*memset(arr1,0,sizeof(arr1));
       memset(arr2,0,sizeof(arr2));
       memset(arr3,0,sizeof(arr3));
       memset(arr4,0,sizeof(arr4));*/
   
    rep(i,n)
    { cin>>a[i];
    	if(a[i]>0)
    	{ 
    		arr1[a[i]]=1;

    	}
    	if(a[i]<0)
    	{ arr2[abs(a[i])]=1;

    	}
    	if(a[i]==0)
    	{
    		zx=1;
    	}
    }

    rep(i,m)
    { cin>>b[i];
    	if(b[i]>0)
    	{ 
    		arr3[b[i]]=1;

    	}
    	if(b[i]<0)
    	{ arr4[abs(b[i])]=1;

    	}
    	if(b[i]==0)
    	{
    		zy=1;
    	}
    }

    //sort(a,a+n,greater<int>());
   	//sort(b,b+m,greater<int>());

    float f=0;
    ll s=0;
    rep(i,n)
    {  x=a[i];
    	
    	if(x==0)
    		continue;

       rep(j,m)
       { 
       	f=-(((float)b[j]*(float)b[j])/(float)x);
       
       	if(floor(f)-f!=0)
       	{ 
       		continue;
       	}


         	s=f;
       	
       	 if(s>0)
       	 { 
       	 	if(arr1[s]==1)
       	 		{ 
       	 		   count++;
       	 		   //cout<<"a[i] b[j] s arr1 "<<a[i]<<" "<<b[j]<<" "<<s<<endl;
       	 	    }

       	 }
       	 else
       	 {
       	 	if(arr2[abs(s)]==1)
       	 	{
       	 		count++;
       	 		//cout<<"a[i] b[j] s arr2 "<<a[i]<<" "<<b[j]<<" "<<s<<endl;
       	 	}
       	 }
       	 

       }

    }
   
    rep(i,m)
    {  y=b[i];
    	
    	if(y==0)
    		continue;

       rep(j,n)
       {
       	f=-(((float)a[j]*(float)a[j])/(float)y);
       	
       	
       	if(floor(f)-f!=0)
       	{
       		continue;
       	}
       	  s=f;
       	
       	 if(s>0)
       	 {
       	 	if(arr3[s]==1)
       	 		{ 
       	 		count++;
       	 		//cout<<"b[i] a[j] s arr3 "<<b[i]<<" "<<a[j]<<" "<<s<<endl;
       	 	    }

       	 }
       	 else
       	 {
       	 	if(arr4[abs(s)]==1)
       	 		{
       	 		count++;
       	 		//cout<<"b[i] a[j] s arr4 "<<b[i]<<" "<<a[j]<<" "<<s<<endl;
       	 	     }
       	 }
       	 


       }

    }
     count/=2;

    if(zx==1&&zy==1)
     	count+=(n-1)*(m-1);
     else if(zx==1)
     	count+=(n-1)*m;
     else if(zy==1)
     	count+=(m-1)*n;

   cout<<count<<endl;


    }
 return 0;
}