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

    void bfs(T src)
    {
     queue<T>q;

     map<T,bool> visited;

     q.push(src);
     visited[src]=true;

     while(!q.empty())
     {
      T node=q.front();
      //cout<<node<<" ";
      if(src!=node)
        adjList[src].push_back(node);
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

  bool searchh(T src,T dist)
  {
    for(auto ch : adjList[src])
    {
      //cout<<ch<<" ";
      if(ch==dist)
      {
        //cout<<"Found"<<endl;
        return true;
      }
    }
    return false;
  }


};

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
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
      // string mp;

      // mp.clear();
      /*cin>>mp;
      st=mp[0];
      en = mp[mp.size()-1];*/
      cin>>st>>en;
      g.addEdge(st,en);

    }

    //g.print();
    //cout<<endl;
    if(s.size()!=t.size())
      cout<<"NO"<<endl;

    char ch='a';
    for(int i=0;i<26;i++)
    {
      //cout<<ch<<"-> ";
      g.bfs(ch);
      //cout<<endl;
      ch++;
    }
    // cout<<endl;
    // //g.print();
    // cout<<endl;

    int len = s.size();
    int flag=0;
    for(int i=0;i<len;i++)
    {
      if(s[i]!=t[i])
      {
        if(!g.searchh(s[i],t[i]))
        {
          //cout<<s[i]<<"-> "<<t[i]<<endl;
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