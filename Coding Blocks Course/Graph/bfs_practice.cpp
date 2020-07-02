#include <iostream>
#include <map>
#include <list>
#include <queue>
#include <climits>
using namespace std;

template<typename T >
class graph
{
	map<T,list<T>>adjList;
public:
	void addEdge(T u, T v, bool bidir=true)
	{
		adjList[u].push_back(v);
		if(bidir==true)
			adjList[v].push_back(u);
	}

	void printGraph()
	{
		for(auto s : adjList)
		{
			cout<<s.first<<"-> ";
			for(auto e : s.second)
				cout<<e<<" ";
			cout<<endl;
		}
		cout<<endl;

	}
	void bfs(T source)
	{
		queue<T> q;
		map<T,int>dist;

		map<T,T>p;
		map<T,int>d;

		q.push(source);
		
		/*p[source] = -1;*/

		for(auto node_pair : adjList)
		{
			T node = node_pair.first;
			dist[node] = INT_MAX;
		}
		dist[source]=0;
		while(!q.empty())
		{
			T node = q.front();
			//cout<<node<<" ";
			q.pop();

			for(auto Neighbour : adjList[node])
			{
				if(dist[Neighbour]==INT_MAX)
				{
					q.push(Neighbour);
					dist[Neighbour]=dist[node]+1;
					/*d[Neighbour] = d[node] + 1;
           			p[Neighbour] = node;*/
				}
			}
		}
		for(auto node_pair : adjList)
		{
			T node= node_pair.first;
			int d=dist[node];

			cout<<"node "<<node<<" dist from source "<<d<<endl;
		}
		/*for(auto dr : d)
		{
			cout<<dr.first<<" "<<dr.second<<endl;
		}*/

	}	
};

int main()
{
 graph<string>g;
 g.addEdge("Putin","Trump",false);
 g.addEdge("Putin","Modi",false);
 g.addEdge("Putin","Trump",false);
 g.addEdge("Modi","Yogi",false);
 g.addEdge("Modi","Pop",false);
 g.addEdge("Yogi","Prabhu",false);
 g.addEdge("Prabhu","modi",false);
 g.printGraph();
 g.bfs("Modi");
 return 0;
}