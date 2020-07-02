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

 bool is_palindromic(string str,int i,int j)
 { int n=str.length();
 	if(n==0)
 		return true;
 	if(i==j)
 		return true;

 	if(str[i]!=str[j])
 	{ 
 		return false;

 	}
 	
 	if(i<j+1)
 		return is_palindromic(str,i+1,j-1);

 	else
 		return true;


 }

int main() 
{  
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  // freopen("error.txt", "w", stderr);
   int n;
   string s,t;
   cin>>n;
   char c;
   for(int i=0;i<n;i++)
   { cin>>c;
   	s.push_back(c);

   }
   if(is_palindromic(s,0,n-1))
   	cout<<"true"<<endl;
   else
   	cout<<"false"<<endl;

 return 0;
}