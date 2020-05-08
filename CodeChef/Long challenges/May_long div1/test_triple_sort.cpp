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
	ll t,n,k,kn,i,j,p,q,r,flag=0,temp;
	cin>>t;
	while(t--)
	{
		cin>>n>>kn;

		int a[n+1];
		int b[n+1];
		bool seta[n+1]={false};
		bool setb[n+1]={false};
		map<int,bool>notseta;
		map<int,bool>notsetb;
		int fortwoa[n+1] = {0};
		int fortwob[n+1] = {0};

		a[0]=INT_MAX;
		a[0]=true;
		int counta=n,countb=n;

		rep1(i,n)
		{
			cin>>a[i];
			b[i]=a[i];
			notseta[i]=false;
			notsetb[i]=false;
			if(a[i]==i)
			{
				seta[i]=true;
				setb[i]=true;
				notseta[i]=true;
				notsetb[i]=true;
				notseta.erase(i);
				notsetb.erase(i);
				counta--,countb--;
			}
		}
		int v1=0,v2=0,v3=0;
		
		//cout<<endl;
		// rep1(i,n)
		// 	cout<<seta[i]<<" ";
		// 	 cout<<endl;
		// rep1(i,n)
		// 	cout<<a[i]<<" ";
		// 	 cout<<endl;	 

			 int k=0;
			 int flag=0;
		for(int i=1;i<=n;i++)
		{
			if(seta[i]==false)
			{
				v1=i;//2
				v2=a[i];//8
				v3=a[a[i]];//2
				if(v1==a[v3] && a[v1]==v2)
				{
					k++;
					flag=1;
					//cout<<"\nYES "<<endl;
					// cout<<v1<<" "<<v2<<" "<<v3<<endl;

					seta[v1]=true, seta[v2]=true,seta[v3]=true;
					//setb[v1]=true, setb[v2]=true,setb[v3]=true;

					notseta.erase(v1),  notseta.erase(v2), notseta.erase(v3),
					//notsetb.erase(v1),  notsetb.erase(v2), notsetb.erase(v3),

					a[v2]=v2, a[v3]=v3, a[v1]=v1;
					//b[v2]=v2, b[v3]=v3, b[v1]=v1;

					counta-=3;
					//countb-=3;

					break;
				}
			}
		}
		/*rep1(i,n)
			cout<<seta[i]<<" ";
			 cout<<endl;
		rep1(i,n)
			cout<<a[i]<<" ";
			 cout<<endl;

		rep1(i,n)
			cout<<setb[i]<<" ";
			 cout<<endl;
		rep1(i,n)
			cout<<b[i]<<" ";
			 cout<<endl;*/	 

		 
		for(int i=1;i<=n;)
		{
			if(seta[i]==true) 
			{
				//cout<<i<<endl;
				i++;
				continue;
			}
			else if(counta==2)
			{
				//cout<<"count "<<count<<endl;
				k=0;
				break;
			}

	
			v1=i;//2
			v2=a[i];//8
			v3=a[a[i]];//2

			// for(auto m : notseta)
			// {
			// 	cout<<m.first<<" ";
			// }
			// cout<<endl;


			// rep1(i,n)
			// 	cout<<a[i]<<" ";
			// 	cout<<endl;

			// cout<<"v1 "<<v1<<endl; 
			// cout<<"v2 "<<v2<<endl; 
			// cout<<"v3 "<<v3<<endl;	

			if(v1==v3)
			{
				fortwoa[v1]=v2;
				// rep1(p,n)
				// cout<<fortwoa[p]<<" ";
				// cout<<endl;
				if(fortwoa[v1]==v2 && fortwoa[v2]==v1)
				{
					// rep1(p,n)
					// cout<<fortwoa[p]<<" ";
					// cout<<endl;

					map<int,bool>::reverse_iterator j; 
  
   
				    for (j = notseta.rbegin(); j != notseta.rend(); j++)
				    { 
				        if(j->first!=v2 && (j->first!=v1))
						{
							v3=j->first;
							//cout<<v3<<endl;
							break;
						}
				    } 
				}
				else
				{
					i++;
					continue;
				}
				
				//break;
				
			}
			//cout<<v1<<" "<<v2<<" "<<v3<<endl; 
			// cout<<"v2 "<<v2<<endl; 
			// cout<<"v3 "<<v3<<endl; 
			k++;

			int x= a[v2];//2
			//cout<<"x "<<x<<endl; 
			int y=a[v3];//6
			//cout<<"y "<<y<<endl; 


			a[v2]=a[i], seta[v2]=true,counta--, notseta.erase(v2);//a[8]=8 seta[8]=T

			a[v3]=x; //a[4]=2
			if(v3==x)
			{
				seta[v3]=true;
				counta--;
				notseta.erase(v3);
			}

			a[v1]=y; //a[2]=6
			if(v1==y)
			{
			 seta[v1]=true;
			 counta--;
			 notseta.erase(v1);
			}

			// rep1(i,n)
			// cout<<seta[i]<<" ";
			 //cout<<endl;

		}

		if(counta==2 || k>kn)
		{
			cout<<-1<<endl;
		}

		else
		{
			//cout<<endl;
			cout<<k<<endl;



			if(flag)
			{
				int k1=0;
				for(int i=1;i<=n;i++)
				{
					if(setb[i]==false)
					{
						v1=i;//2
						v2=b[i];//8
						v3=b[b[i]];//2
						if(v1==b[v3] && b[v1]==v2)
						{
							k++;
							flag=1;
							//cout<<"\nYES "<<endl;
							cout<<v1<<" "<<v2<<" "<<v3<<endl;
							//v11=v1,v22=v2,v33=v3;

							//seta[v1]=true, seta[v2]=true,seta[v3]=true;
							setb[v1]=true, setb[v2]=true,setb[v3]=true;

							//notseta.erase(v1),  notseta.erase(v2), notseta.erase(v3),
							notsetb.erase(v1),  notsetb.erase(v2), notsetb.erase(v3),

							//a[v2]=v2, a[v3]=v3, a[v1]=v1;
							b[v2]=v2, b[v3]=v3, b[v1]=v1;

							//counta-=3;
							countb-=3;

							break;
						}
				    }
				}
			}
		

			int v1=0,v2=0,v3=0;
			
			for(int i=1;i<=n;)
			{
				if(setb[i]==true) 
				{
					//cout<<i<<endl;
					i++;
					continue;
				}
				else if(countb==2)
				{
					//cout<<"count "<<count<<endl;
					//k1=0;
					break;
				}

	
				v1=i;//2
				v2=b[i];//8
				v3=b[b[i]];//2

			// for(auto m : notseta)
			// {
			// 	cout<<m.first<<" ";
			// }
			// cout<<endl;


			// rep1(i,n)
			// 	cout<<a[i]<<" ";
			// 	cout<<endl;

			// cout<<"v1 "<<v1<<endl; 
			// cout<<"v2 "<<v2<<endl; 
			// cout<<"v3 "<<v3<<endl;	

				if(v1==v3)
				{
						fortwob[v1]=v2;
					// rep1(p,n)
					// cout<<fortwob[p]<<" ";
					//cout<<endl;
					if(fortwob[v1]==v2 && fortwob[v2]==v1)
					{
						// rep1(p,n)
						// cout<<fortwob[p]<<" ";
						// cout<<endl;

						map<int,bool>::reverse_iterator j; 
	  
	   
					    for (j = notsetb.rbegin(); j != notsetb.rend(); j++)
					    { 
					        if(j->first!=v2 && (j->first!=v1))
							{
								v3=j->first;
								//cout<<v3<<endl;
								break;
							}
					    } 
					}
					else
					{
						i++;
						continue;
					}
					
				}
				cout<<v1<<" "<<v2<<" "<<v3<<endl; 
				// cout<<"v2 "<<v2<<endl; 
				// cout<<"v3 "<<v3<<endl; 
				k++;

				int x= b[v2];//2
				//cout<<"x "<<x<<endl; 
				int y=b[v3];//6
				//cout<<"y "<<y<<endl; 


				b[v2]=b[i], setb[v2]=true,countb--, notsetb.erase(v2);//a[8]=8 seta[8]=T

				b[v3]=x; //a[4]=2
				if(v3==x)
				{
					setb[v3]=true;
					countb--;
					notsetb.erase(v3);
				}

				b[v1]=y; //a[2]=6
				if(v1==y)
				{
				 setb[v1]=true;
				 countb--;
				 notsetb.erase(v1);
				}

				// rep1(i,n)
				// cout<<seta[i]<<" ";
				 //cout<<endl;

		}

		}
	}
	return 0;
}	