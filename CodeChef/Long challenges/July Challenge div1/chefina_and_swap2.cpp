//https://hastebin.com/ugudunibug.cpp
#include<bits/stdc++.h>
using namespace std;

//using this template from internet
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pi(x)   printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define line    cout<<"\n";

#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)

const int mod = 1000000007;
const int N = 3e5, M = N;
#define PI 3.1415926535897932384626
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);






int a[N];
vi g[N];

bool comp(ll a,ll b)
{
	return a>b;
}

void solve() 
{
	ll n;
	cin>>n;
	ll a[n];
	ll b[n];

	map<ll,ll>mp;//for frequency of each elements in a and b

	ll minEle=INT_MAX; //min elemt frm both array

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mp[a[i]]++;
		
		minEle=min(minEle,a[i]);

	}

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		mp[b[i]]++;
		minEle=min(minEle,b[i]);
	}

	int oddFrq=0;
	for(auto el : mp)
	{
		if(el.S%2!=0)
		{
			oddFrq=1; 
			break;
		}
		//cout<<el.F<<" "<<el.S<<endl;
	}
	for( auto itr = mp.begin(); itr != mp.end(); ++itr)
	{
		itr->second = itr->second/2;
	} 

	if(oddFrq)//frq of a elmnt is odd -> -1
	{
		cout<<"-1"<<endl;
		
	}
	else
	{
		sort(a,a+n); //sort in inc ordr
		sort(b,b+n,comp);//sort in dec ordr

		/*vector<ll>extraA; //extra elmnt from a
		vector<ll>extraB; //extra elmnt from b
*/
		vector<ll>f1,f2;
		map<ll,ll>mp2;

		mp2=mp;
		/*for(auto el : mp2)
		{
			cout<<el.F<<" "<<el.S<<endl;
		}*/
		for(int i=0;i<n;i++)
		{
			//cout<<"mp2 "<<mp2[a[i]]<<endl;
			if(mp2[a[i]])
			{
				mp2[a[i]]--;
			}
			else
			{
				f1.push_back(a[i]);
			}
		}
		mp2=mp;
		for(int i=0;i<n;i++)
		{
			if(mp2[b[i]])
			{
				mp2[b[i]]--;
			}
			else
			{
				f2.push_back(b[i]);
			}
		}
		int count=0;

		for(int i=0;i<(int)f1.size();i++)
		{
			//cout<<f1[i]<<" extras  "<<f2[i]<<endl;
			if(f1[i]!=f2[i])
				count+=min(2*minEle,min(f1[i],f2[i]));
		}
		cout<<count<<endl;
	}
}

int main() 
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    #endif

	int t;
	cin >> t;
	while(t--) 
	{
		solve();

	}

	return 0;
}






/*int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0) 
    {
        if (exp & 1) result = ((ll)result * base) % mod;
        base = ((ll)base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void ipgraph(int n, int m)
{
    int i, u, v;
    while(m--)
    {
        cin>>u>>v;
        u--, v--;
        g[u].pb(v);
        g[v].pb(u);
    }
}

void dfs(int u, int par)
{
    for(int v:g[u])
    {
        if (v == par) continue;
        dfs(v, u);
    }
}
*/
