#include<iostream>
#include<algorithm>
using namespace std;

 bool compare(pair<int,int> a,pair<int,int> b)
  {
  	return a.second<b.second;

  }

int main()
{ int t,n,a1,b;
	cin>>t;
	while(t--)
	{ cin>>n;
		pair<int,int>a[n];
		for(int i=0;i<n;i++)
		{ cin>>a1>>b;
			a[i]=make_pair(a1,b);

		}
		sort(a,a+n,compare);

		// for(int i=0;i<n;i++)
		// { cout<<a[i].first<<" "<<a[i].second<<endl;

		// }

		int ans=1,pos=0;
		for(int i=1;i<n;i++)
		{
			if(a[i].first>=a[pos].second)
			{ ans++;
				pos=i;

			}
		}
		cout<<ans<<endl;

	}
	return 0;

}