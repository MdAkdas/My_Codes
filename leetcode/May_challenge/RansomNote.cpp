/* Que- Given an arbitrary ransom note string and another string containing letters from all the magazines, write a function that will return true if the ransom note can be constructed from the magazines ; otherwise, it will return false.

Each letter in the magazine string can only be used once in your ransom note.

Note:
You may assume that both strings contain only lowercase letters.

canConstruct("a", "b") -> false
canConstruct("aa", "ab") -> false
canConstruct("aa", "aab") -> true*/




class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        int rl=ransomNote.size();
        int ml=magazine.size();
        map<char,int>mp;
        mp.clear();
        
        for(int i=0;i<ml;i++)
        {
            mp[magazine[i]]+=1;
        }
        for(int i=0;i<rl;i++)
        {
            if(mp.find(ransomNote[i])!=mp.end() &&  mp[ransomNote[i]] >0 )
            {
                mp[ransomNote[i]]-=1;
            }
                
            else
            {
                return false;
            }
        }
        return true;
        
        
    }
};