
#include <iostream>
using namespace std;

#define ll unsigned long long

#define MOD 998244353

#define endl "\n"

void solveSubT1()
{

}
int main() 
{  
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll m,n,q;

	cin>>m>>n>>q;
	ll sumPro[m][n];

	ll val[n];
	for(ll i=0;i<n;i++)
	{
		cin>>val[i];
	}

	for(ll i=0;i<m;i++)
	{
		
		for(ll j=0;j<n;j++)
		{
			
			sumPro[i][j]=val[j]%MOD;
		}
	}
	/*for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cout<<sumPro[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;*/
	for (ll i = 1; i < m; i++) 
	{
		sumPro[i][0]= (sumPro[i][0]*sumPro[i-1][0])%MOD; 

	}

	for (ll j = 1; j < n; j++)
	{
		sumPro[0][j]= (sumPro[0][j]*sumPro[0][j-1])%MOD; 
	} 

	/*for(int i=0;i<m;i++)
	{
		
		for(int j=0;j<n;j++)
		{
			cout<<sumPro[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;*/
	for (ll i = 1; i < m; i++) 
	{ 
		for (ll j = 1; j < n; j++) 
		{
			//cout<<sumPro[i][j]<<" "<<sumPro[i-1][j]<<" "<<sumPro[i][j-1]<<endl;
			sumPro[i][j] = (sumPro[i][j] * (sumPro[i-1][j] + sumPro[i][j-1]))%MOD; //+ count[i-1][j-1]; 
		
			//cout<<sumPro[i][j]<<endl;
			//sumPro[i][j] = sumPro[i][j] * (sumPro[i-1][j] + sumPro[i][j-1]); //+ count[i-1][j-1]; 
		}
	}
	/*cout<<endl;
	for (int i = 0; i < m; i++) 
	{ 
		for (int j = 0; j < n; j++) 
			cout<<sumPro[i][j]<<" ";
			cout<<endl; 
	} 
	cout<<endl;*/
	while(q--)
	{ 
		ll k;
		cin>>k;
		cout<<sumPro[k-1][n-1]%MOD<<endl;
	}
	
	return 0;
}