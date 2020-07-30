#include<iostream>
#include<map>
#include<list>
#include<vector>
using namespace std;

class graph
{
    int V;
    list<int>*l;

    public:
        graph(int v)
        {
            //cout<<"umm"<<endl;
            V=v;
            l=new list<int>[v];
        }

        void addEdge(int u,int w)
        {
            l[u].push_back(w);
            l[w].push_back(u);
        }
        void print()
        {
            for(int i=1;i<V;i++)
            {
                cout<<i<<"-> ";

                for(auto el : l[i])
                {
                    cout<<el<<",";
                }
                cout<<endl;
            }
        }
        void def_helper(int u,vector<bool>&visited)
        {
            visited[u]=true;

            for(int v : l[u])
            {
                if(!visited[v])
                    def_helper(v,visited);
            }
        }
        void dfs()
        {
            vector<int>vec;
            vector<bool>visited(V,false);


            for(int i=1;i<V;i++)
            {
                if(!visited[i])
                {
                    //cout<<i<<endl;
                    vec.push_back(i);
                    def_helper(i,visited);
                }
            }
            if(vec.size()<=1)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<vec.size()-1<<endl;
                for(int i=1;i<(int)vec.size();i+=1)
                {
                    cout<<vec[i-1]<<" "<<vec[i]<<endl;
                }
            }
        }

};


int main()
{
    int n,m;
    cin>>n>>m;

    graph g(n+1);
    while(m--)
    {
        int u,v;
        cin>>u>>v;
        g.addEdge(u,v);
    }
    //g.print();
    g.dfs();
    return 0 ;
}