#include<iostream>
using namespace std;

int max(int c[],int Maxlen)
{ int dp[100]={};
   dp[0]=0;

   for(int len=1;len<=Maxlen;len++)
   { int best=0;
   	for(int cut=1;cut<=len;cut++)
   	{
   	   best=max(best,c[cut]+dp[len-cut]);
   	}
   	dp[len]=best;

   } 
   return dp[Maxlen];



}

int main()
{  int len,pieces;
	 cout<<"Enter the length\n";
     cin>>len;

   
    int c[len];

    for(int i=1;i<=len;i++)
    {
    	cin>>c[i];
    } 

    cout<<max(c,len);



}