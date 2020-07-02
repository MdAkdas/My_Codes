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

void foo()
{
	for(int i=2,j=2;i<=4 && j<=4;i++,j++)
   	{ 
       cout<<i<<" "<<j<<endl; 
       cout<<2*i-1<<" "<<"1"<<endl; 
       cout<<"1"<<" "<<2*j-1<<endl; 
       cout<<i<<" "<<j<<endl; 
	   		
	}
      ll TwoT=2;
    for(int i=5,j=5;i<=7 && j<=7;i++,j++,TwoT+=2)
    { 
    	cout<<i<<" "<<j<<endl;
    	cout<<"8"<<" "<<TwoT<<endl;
    	cout<<TwoT<<" "<<"8"<<endl;
    	cout<<i<<" "<<j<<endl;


    }
    cout<<"8"<<" "<<"8"<<endl;

 	
   
}



int main() 
{  ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   // freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
   ll t;
   cin>>t;
   while(t--)
	{	 ll r,c;
	   	cin>>r>>c;
	    
	   	 if(r==1 && c==1)
	   	 { 
	       cout<<"25"<<endl;
	     	foo();

	   	 }
	     
	     else
	     {  

	     	if(r==c)
	       {
	       cout<<"26"<<endl;
	   	   //cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
	   	   cout<<"1"<<" "<<"1"<<endl;
	   	   foo();

	       }	
	       else
	       {
	   	   cout<<"27"<<endl;
	   	   cout<<(r+c)/2<<" "<<(r+c)/2<<endl;
	   	   cout<<"1"<<" "<<"1"<<endl;
	   	   foo();
	     	
	       }
	    }
    }

 return 0;
}