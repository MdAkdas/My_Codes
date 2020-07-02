#include <iostream>
#include<cstring>
using namespace std;

int countA(int a[], int n)
{
	int count=0;
	for(int i=0;i<n;i++)
		if(a[i]==1)
			count++;

	return count;	
}

int main(int argc, char const *argv[])
{
	/*freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout); */
	int t;
	cin>>t;
	while(t--)
	{
		int  n,m;
		cin>>n>>m;
		int a[n][m];

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}

		int row[n],col[m];
		memset(row,0,sizeof(row));
		memset(col,0,sizeof(col));

		/*for(int i=0;i<n;i++)
			cout<<row[i]<<" ";
		cout<<endl;
		for(int i=0;i<m;i++)
			cout<<col[i]<<" ";
		cout<<endl;*/

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]==1)
				{
					row[i]=1;
					col[j]=1;
				}
			}

		}
		/*for(int i=0;i<n;i++)
			cout<<row[i]<<" ";
		cout<<endl;
		for(int i=0;i<m;i++)
			cout<<col[i]<<" ";
		cout<<endl<<endl;*/
		int ValidrowCount = n - countA(row,n); 
		int ValidcolCount = m - countA(col,m);

		int valid = min(ValidcolCount,ValidrowCount);

		if(valid % 2== 0)
		cout<<"Vivek"<<endl;
		else
		cout<<"Ashish"<<endl; 
	}
	return 0;
}
