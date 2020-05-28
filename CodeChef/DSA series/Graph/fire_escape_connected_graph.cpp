#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <cstring>
using namespace std;
#define MOD 1000000007

class graph
{
	int V; 
	list<int> *adjList;

public:
	graph(int V)
	{
		this->V=V;
		adjList = new list<int>[V];
	}
	~graph() 
	{ 
		delete[] adjList; 
	}

	void add_edge(int u,int v)
	{
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}

	void print()
	{
		for( int i=1;i<V;i++)
		{
			cout<<i<<" -> ";
			for(auto lp : adjList[i])
			{
				cout<<lp<<" ";
			}
			cout<<endl;
		}
	}

	void connected_component_dfs()
	{
		bool visited[V];
		memset(visited,false,sizeof(visited));
	
		vector<int>v;
		
		for(int i =1;i<V;i++)
		{	
			int length=0;
			//cout<<"starting at "<<i<<": ";
			if(!visited[i])
			{
				length=dfs(i,visited,length);
				if(length!=0)
					v.push_back(length);		
			}

		}
		long long product=1;	
		for(auto el : v)
		{
			//cout<<el<<" ";
			product=((product % MOD) * (el % MOD)) % MOD;
		}
		// cout<<endl;
		cout<<v.size()<<" "<<product<<endl;
		
	}

	int dfs(int v,bool visited[],int &length)
	{
		visited[v]=true;
		length++;
		//cout<<v<<" ";

		for(auto ngr : adjList[v])
		{
			if(visited[ngr]==false)
			{
				dfs(ngr,visited,length);
			}
		}
		//cout<<"returning length "<<length<<endl;
		return length;
	}	
};

int main()
{
	/*freopen("input.txt","r", stdin);
	freopen("output.txt","w", stdout);*/

	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		graph g(n+1);

		int u,v;
		for(int i=0;i<m;i++)
		{
			cin>>u>>v;
			g.add_edge(u,v);

		}
		g.print();
		g.connected_component_dfs();
	}
	return 0;
	
}