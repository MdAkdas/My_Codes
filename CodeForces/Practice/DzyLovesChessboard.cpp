#include<bits/stdc++.h>
using namespace std;

#define fo(i,n) for(int i=0;i<n;i++)
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

void solve() 
{
    //int i, j, n, m;
  	int n,m;
  	cin>>n>>m;
  	char a[n][m];

  	fo(i,n)
  		fo(j,m)
  		cin>>a[i][j];

  	fo(i,n)
  	{
  		if(i%2!=0)
  		{
  			fo(j,m)
  			{
  				if(a[i][j]=='.')
  				{
  					if(j%2==0)
  						a[i][j]='B';
  					else
  						a[i][j]='W';
  				}
  			}
  		}
  		else
  		{
  			fo(j,m)
  			{
  				if(a[i][j]=='.')
  				{
  					if(j%2==0)
  						a[i][j]='W';
  					else
  						a[i][j]='B';
  				}
  			}
  		}
  	}

  	fo(i,n)
  	{
  		fo(j,m)
  		cout<<a[i][j];
  		cout<<endl;
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
    t=1;

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
