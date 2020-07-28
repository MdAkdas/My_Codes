/*You are given a char array representing tasks CPU need to do. It contains capital letters A to Z where each letter represents a different task. Tasks could be done without the original order of the array. Each task is done in one unit of time. For each unit of time, the CPU could complete either one task or just be idle.

However, there is a non-negative integer n that represents the cooldown period between two same tasks (the same letter in the array), that is that there must be at least n units of time between any two same tasks.

You need to return the least number of units of times that the CPU will take to finish all the given tasks.

 

Example 1:

Input: tasks = ["A","A","A","B","B","B"], n = 2
Output: 8
Explanation: 
A -> B -> idle -> A -> B -> idle -> A -> B
There is at least 2 units of time between any two same tasks.*/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> fr(26);
        
        for(auto ch : tasks)
            fr[ch-'A']++;
        
        sort(fr.begin(),fr.end());
        int ideal = (fr[25]-1)*n;
        
        for(int i =1;i<26-1 ;i++)
        {
            ideal = ideal - min(fr[25]-1,fr[i]); 
        }
        return tasks.size() + max(0,ideal);
    }
};