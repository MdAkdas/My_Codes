#include <iostream>
using namespace std;

int main()
{ int n,m;
	cin>>n>>m;
	int a[n][m];

	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];

		int T=0,B=n-1,L=0,R=m-1;
		int dir=0;

    int k;
	while(T<=B && L<=R)
	{
		if(dir==0)
		{for( k=L;k<=R;k++)
			{
				cout<<a[T][k]<<" ";

			}
			T++;

		}
		else if(dir==1)
		{
			for(k=T;k<=B;k++)
			{
				cout<<a[k][R]<<" ";
			}
			R--;
		}
		else if(dir==2)
		{
			for(k=R;k>=L;k--)
				cout<<a[B][k]<<" ";

			B--;
		}
		else if(dir==3)
		{
			for(k=B;k>=T;k--)
				cout<<a[k][L]<<" ";
			L++;
		}
		

		dir=(dir+1)%4;
	}
	return 0;	


}