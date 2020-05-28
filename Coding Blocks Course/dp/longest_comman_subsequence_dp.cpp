#include<iostream>
#include<cstring>
using namespace std;

int LCS(char x[],char y[])
{ int m=strlen(x);
  int n=strlen(y);

  int dp[100][100];
  int i,j,q;

  for(int i=0;i<=n;i++) dp[0][i]=0;
      for(int i=0;i<=m;i++) dp[i][0]=0;
    
    for( i=1;i<=m;i++)
    {
        for( j=1;j<=n;j++)
        {  
            q=0;
             cout<<x[j]<<" "<<y[j]<<endl;
            if(x[i-1]==y[j-1])
            {
                cout<<x[i]<<endl;
                q=1+dp[i-1][j-1];
            }

            else
            q=max(dp[i-1][j],dp[i][j-1]);

            dp[i][j]=q;
        }

    }	
        for( i=1;i<=m;i++)
        {
            for( j=1;j<=n;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

     return dp[m][n];

  }


  int main()
  { char x[100],y[100];
   cin>>x;
   cin>>y;

   cout<<LCS(x,y);

}