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

  ll dayofweek(ll d, ll m, ll y) 
{ 
    static ll t[] = { 0, 3, 2, 5, 0, 3, 
                    5, 1, 4, 6, 2, 4 }; 
    y -= m < 3; 
    return ( y + y / 4 - y / 100 + 
            y / 400 + t[m - 1] + d) % 7; 
} 
 
 bool isLeapYear(ll year)
{
   if (year % 4 != 0)
      return false;
   if (year % 100 != 0)
      return true;
   if (year % 400 == 0)
      return true;
   else
      return false;
}

  



int main() 
{  
   freopen("input.txt",   "r", stdin);
   freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   ll d=1,t,No,m1,y1,y,m2,y2;
   cin>>t;

   while(t--)
    { cin>>m1>>y1;
      cin>>m2>>y2;

      //cout<<m1<<" "<<y1;
      //cout<<m2<<" "<<y2;
      if(m1>2)
        y1=y1+1;

      if(m2<2)
        y2=y2-1;
       
       ll count=0;
      for(ll y=y1;y<=y2;y++)
      {
      ll day1 = dayofweek(6, 2, y); 
      //cout <<y<<"\t"<< "day1 "<<day1<<endl; 
         
         

      ll day2 = dayofweek(7, 2, y); 
     // cout<<y <<"\t"<<"day2 "<< day2<<endl<<endl;

      if(day1==5)
         {
            if(isLeapYear(y))
              {//cout<<y<<" yes "<<endl;
              continue;
              }
         } 
       
       if(day1==5||day2==5)
       {  //cout<<"YEAR \t"<<y%400<<endl;
          count++;

       }
      
    }
    cout<<count<<endl;
  }
 return 0;
}