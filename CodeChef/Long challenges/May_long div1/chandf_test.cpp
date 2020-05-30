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
#define rep(i, n) for (int i = 0; i < n; i++)
#define REP(i, a, b) for (int i = a; i < b; i++)
#define rep1(i, b) for (int i = 1; i <= b; i++)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

const int inf = (int)1e9;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);

	ll t, n, i, j, p, q, flag = 0, temp;
	
	cin >> t;
	while (t--)
	{
		ll x, y, l, r, i;
		cin >> x >> y >> l >> r;
		if (r >= 2 * max(x, y))
		{
			//cout<<x<<" "<<y<<" "<<l<<" "<<r<<" ";
			if (x == 0 || y == 0)
				cout << "0" << endl;
			else
			{
				cout << (x | y) << endl;
			}
		}
		else
		{
			if (x == 0 || y == 0)
				cout << "0" << endl;
			else
			{
				bitset<62> xb(x);
				//cout << xb << endl;
				bitset<62> yb(y);
				//cout << yb << endl;
				bitset<62> kb1;
				bitset<62> kb2;
				//cout << endl;
				map<ll,ll>mp;

				//cout<<kb<<endl;

				bitset<62> rb(r);
				//cout <<"rgt "<< rb << endl;

				ll ans1 = (x&r)*(y&r);
				mp[r]=ans1;
				// cout<<rb.to_ulong()<<endl;
				for (int i =61;i>=0;i--)
				{
					kb2.reset();
					if(rb[i]==1)
					{
						/* kb1=r;
						ll z1=kb1.to_ullong();
						
						ll ans1 = (x&z1)*(y&z1);
						cout<<"z1 "<<z1<<endl;
						cout<<"kb1 "<<kb1<<endl;
						cout<<"ans1 "<<ans1<<endl; */
						if(i!=0)
						{
							kb2=r;
							kb2[i]=0;
							for(int j=i-1;j>=0;j--)
								kb2[j]=1;

							ll z2=kb2.to_ullong();

							
							//cout<<"kb2 "<<kb2<<endl;
							
							z2=(x|y)&z2;
							bitset<62>a(z2);
							//cout<<"z2  "<<a<<endl;
							//cout<<"z2 "<<z2<<endl; 
							
							
							ll ans2 = (x&z2)*(y&z2);
							//cout<<"ans2 "<<ans2<<endl;
							if(z2<=r)
							{
								mp[z2]=ans2;
							}
						}
						else
						{
							kb2=r;
							ll z2=kb2.to_ullong();

							//cout<<"z2 "<<z2<<endl;
							//cout<<"kb2 "<<kb2<<endl;
							
							z2=(x|y)&z2;
							bitset<62>v(z2);
							//cout<<"z2  "<<v<<endl;
							//cout<<"z2 "<<z2<<endl;
							

							ll ans2 = (x&z2)*(y&z2);
							//cout<<"ans2 "<<ans2<<endl;
							if(z2<=r)
							{
								mp[z2]=ans2;
							}
							
						}
								
					}
					else
					{
							kb2=r;
							kb2[i]=0;
							for(int j=i-1;j>=0;j--)
								kb2[j]=0;

							ll z2=kb2.to_ullong();

							
							//cout<<"kb2 "<<kb2<<endl;
							
							z2=(x|y)&z2;
							bitset<62>a(z2);
							//cout<<"z2  "<<a<<endl;
							//cout<<"z2 "<<z2<<endl;
							
							
							ll ans2 = (x&z2)*(y&z2);
							//cout<<"ans2 "<<ans2<<endl;
							if(z2<=r)
							{
								mp[z2]=ans2;
							}
					}
					
				}
				ll val = 0;
				ll k = 0;
				for(auto fk : mp)
				{
					if(fk.second>val)
					{
						val= fk.second;
						k = fk.first;
					}
					//cout<<fk.first<<" "<<fk.second<<endl;
				}
				//cout<<endl;
				cout<<k<<endl;
			}

			//cout<<kb<<endl;
			// cout<<kb.to_ulong()<<endl<<endl;;
		}
	}
return 0;
}