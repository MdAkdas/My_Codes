#include <iostream>
#include<list>
#include<map>
#include<queue>
using namespace std;

template<typename T>

 class graph
 {  
 	map<T,list<T>>adjList;

 public:
 	
 	
 	void addEdge(T u,T v,bool bidir=true)
 	{ adjList[u].push_back(v);
 		if(bidir)
 			adjList[v].push_back(u);

 	}

 	void print()
 	{  //itr over the map
 		for(auto i: adjList)
 		{ cout<<i.first<<"->";

 	       //i.second is LL
 	       for(T entry:i.second)
 	       {
 	       	cout<<entry<<",";
 	       }
 	       cout<<endl;

 	}
 }

 	void bfs(T src)
 	{
 		queue<T>q;
 		map<T,bool> visited;

 		q.push(src);
 		visited[src]=true;

 		while(!q.empty())
 		{
 			T node=q.front();
 			cout<<node<<" ";
 			q.pop();

 			for(T neigbour: adjList[node])
 			{ if(!visited[neigbour])
 				{
 					q.push(neigbour);
 					visited[neigbour]=true;
 				}

 			}
 		}
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
  	g.print();
  	return 0;
  }