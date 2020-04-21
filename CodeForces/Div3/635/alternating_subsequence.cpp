 /******************************************
* AUTHOR : MD AKDAS AHMAD *
* MOTTO : IMTB
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
#define F first
#define S second
#define endl "\n"


const int inf=(int)1e9;


int main() 
{  
	ios_base::sync_with_stdio(false);
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	ll t,n,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll a[n];

		rep(i,n)
		{
		 cin>>a[i];
		}

		ll prevPos=0,preNeg=0;
		ll prevPosNo=0, preNegNo=0;
		ll sum=0;
		if(a[0]>=0)
		{
			prevPos=1;
			prevPosNo=a[0];
			sum+=a[0];
		}
		else
		{
			preNeg=1;
			preNegNo=a[0];
			sum+=a[0];
		}
		//cout<<"sum "<<sum<<endl;
		for(int i=1;i<n;i++)
		{	
			//cout<<"a[i] "<<a[i]<<endl;
			if(a[i]>=0)
			{
				if(prevPos==1)
				{
					if(a[i]>prevPosNo)
					{
						sum=sum - prevPosNo + a[i];
						prevPosNo=a[i];
						prevPos=1;
					}

				}
				else if(preNeg==1)
				{
					sum+=a[i];
					prevPos=1;
					prevPosNo=a[i];
					preNeg=0;
				}
				//cout<<"sum "<<sum<<endl;

			}
			else
			{
					if(preNeg==1)
					{
						if(a[i]> preNegNo)
						{
							sum=sum+ preNegNo - a[i];
							preNegNo =a[i];
							preNeg=1;
							prevPos=0;
						}

					}
					else if(prevPos==1)
					{
						sum+=a[i];
						preNeg=1;
						preNegNo =a[i];
						prevPos=0;
					}
					//cout<<"sumn "<<sum<<endl;


			}
		}
			cout<<sum<<endl;

   

  

	}
	return 0;
}