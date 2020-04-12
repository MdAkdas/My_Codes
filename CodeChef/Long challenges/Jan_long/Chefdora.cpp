#include <bits/stdc++.h>

 using namespace std;

 #define ll long long

int main()
{ ll t,n,m,i,j,p,q,r,s;
	cin>>t;

	while(t--)
	{ cin>>n>>m;
		ll a[n][m];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>a[i][j];
          
          ll count=n*m;
	  	for(i=0;i<n;i++)
	  	 {	
			for(j=0;j<m;j++)	
			{   p=q=j;
                r=s=i;

				while(q>0&&p<m-1 && r>0&&s<n-1)
				{ if(a[i][--q]==a[i][++p] && a[--r][j]==a[++s][j] )
					{ count++;

					}
					else
						break;

				}
			}

         }
         cout<<count<<endl;
    }
    return 0;
}    



 
