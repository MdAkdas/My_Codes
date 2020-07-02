
 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* YEAR : 2nd *
* INSTITUTION : JMI *
******************************************/
#include <bits/stdc++.h>
 #include<string>
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
  // freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   string str;
   getline(cin,str);
   int len=str.length();
       
    int len1=0,len2=0;
    char d;
    for(int i=0;i<len;i++)
    { char c=str[i];
    	len1=0;
    	for(int j=i;j<len;j++)
    	{   if(str[i]==str[j])
    		 { len1++;

    		 }

    		 if(len1>len2)
    		 {
    		 	len2=len1;
                  d=str[i];
    		 }

    	}



    }
    cout<<d<<endl;

 return 0;
}