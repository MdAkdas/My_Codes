/*There are a total of n courses you have to take, labeled from 0 to n-1.

Some courses may have prerequisites, for example to take course 0 you have to first take course 1, which is expressed as a pair: [0,1]

Given the total number of courses and a list of prerequisite pairs, return the ordering of courses you should take to finish all courses.

There may be multiple correct orders, you just need to return one of them. If it is impossible to finish all courses, return an empty array.

Example 1:

Input: 2, [[1,0]] 
Output: [0,1]
Explanation: There are a total of 2 courses to take. To take course 1 you should have finished   
             course 0. So the correct course order is [0,1] .

*/
class Solution {
public:
    bool dfs(int u,vector<vector<int>>&adjList,vector<int>&s,vector<int>&visited)
    {
        visited[u]=1;
        for(int v : adjList[u])
        {
            if(visited[v]==1) return true; //found a cycle
            
            if(visited[v]==0 && dfs(v,adjList,s,visited)) return true;
        }
        visited[u]=2;
        s.push_back(u);
        return false;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adjList(numCourses);
        
        for(auto p : prerequisites)
        {
            adjList[p[1]].push_back(p[0]);
        }
        vector<int>s;
        vector<int>visited(numCourses,0); //can have 3 state. 0->not visited, 1->visited and in backedge, 
                                        //2-> visited
        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==0 && dfs(i,adjList,s,visited))
                return {};
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};