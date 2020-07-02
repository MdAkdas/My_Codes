 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define LL long long
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
   string s,t;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    getline(cin,s);
    int l=s.length();
    //cout<<"length "<<l<<endl;

    for(int i=0;i<l;i++)
    { 
        t.push_back(s[i]);

        if(i==l-1)
            cout<<t<<endl;

        else
        { int val=(s[i+1]-'0')-(s[i]-'0');
           
           if(val<0)
           { t.push_back('-');
              val=-val;
              if(val>9)
              { char c=(val%10)+'0';
                val=val/10;
                char b=(val%10)+'0';
                t.push_back(b);
                t.push_back(c);

              }
               else
                t.push_back(val+'0');

           }

            else 
            {
                if(val>9)
              { char c=(val%10)+'0';
                val=val/10;
                char b=(val%10)+'0';
                t.push_back(b);
                t.push_back(c);

               }
           else
             t.push_back(val+'0');
         }
          
        }
     }

 return 0;
}