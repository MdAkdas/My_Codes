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
#define rep(i,n) for(int i = 0; i < n; i++)
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
            ll proft=INT_MIN,Tempproft;
          for(int i=0;i<4;i++)
          {
            for(int j=0;j<4;j++)
                { 
                  for(int k=0;k<4;k++)
                    {
                      for(int l=0;l<4;l++)
                        { if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l)
                          {
                          max[0]=a[i][0];
                          max[1]=a[j][1];
                          max[2]=a[k][2];
                          max[3]=a[l][3];

                          sort(max,max+4,greater<int>());

                          // rep(x,4)
                          // cout<<max[x]<<" ";

                            ll Tmpproft=0,price=100;

                                rep(x,4)
                                { 
                                     if(max[x]!=0)
                                      { Tmpproft+=max[x]*price;
                                  //cout<<" inside proft "<<proft<<endl;

                                        price-=25;

                                       }
                                     if(max[x]==0)
                                      Tmpproft-=100;

                                }
                                //cout<<"tempproft "<<Tmpproft<<endl;
                                if(proft<Tmpproft)
                                  proft=Tmpproft;

                                //cout<<"proft "<<proft<<endl;


                               }
                             }
                                }


                            }
                      }  
    
   	    cout<<proft<<endl;
   	    overAllPro+=proft;
   }
   cout<<overAllPro<<endl;

 return 0;
}