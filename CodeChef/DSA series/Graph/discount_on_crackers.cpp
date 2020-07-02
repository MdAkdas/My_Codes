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


  void addEdge(T u,T v,bool bidir=false)
  { adjList[u].push_back(v);
   if(bidir)
    adjList[v].push_back(u);

}

void print()
    {  //itr over the map
      for(auto i: adjList)
      { 
        cout<<i.first<<"->";

           //i.second is LL
        for(T entry:i.second)
        {
          cout<<entry<<",";
        }
        cout<<endl;

      }
    }

    bool bfs(T src,T dist)
    {
     queue<T>q;

     map<T,bool> visited;

     q.push(src);
     visited[src]=true;

     while(!q.empty())
     {
      T node=q.front();
      //cout<<node<<" ";
      if(node==dist)
      {
        //cout<<"found"<<endl;
        return true;
        break;
      }
      q.pop();

      for(T neigbour: adjList[node])
        { if(!visited[neigbour])
         {
          q.push(neigbour);
          visited[neigbour]=true;
        }

      }
    }
    return false;
  }


};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  /*freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);*/
  int p;
  cin>>p;
  while(p--)
  {
    string s,t;
    cin>>s>>t;
    int m;
    cin>>m;

    graph<char>g;
    char st,en,mid;
    while(m--)
    {
      string mp;

      mp.clear();
      cin>>mp;
      st=mp[0];
      en = mp[mp.size()-1];
      //cin>>st>>en;
      g.addEdge(st,en);
  
    }
    //g.print();
    if(s.size()!=t.size())
      cout<<"NO"<<endl;

    int len = s.size();
    int flag=0;
    for(int i=0;i<len;i++)
    {
      if(s[i]!=t[i])
      {
        if(!g.bfs(s[i],t[i]))
        {
          flag=1;
          break;
        }
      }
    }
    if(flag)
      cout<<"NO"<<endl;
    else
      cout<<"YES"<<endl;

  }

  return 0;
}