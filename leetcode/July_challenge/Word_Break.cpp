/*Given a non-empty string s and a dictionary wordDict containing a list of non-empty words, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences.

Note:

The same word in the dictionary may be reused multiple times in the segmentation.
You may assume the dictionary does not contain duplicate words.
Example 1:

Input:
s = "catsanddog"
wordDict = ["cat", "cats", "and", "sand", "dog"]
Output:
[
  "cats and dog",
  "cat sand dog"
]
*/
class Solution {
    unordered_map<string,vector<string>> mp;
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        if(mp.find(s)!=mp.end())
            return mp[s];
        
        vector<string>result;
        
        for(auto w : wordDict)
        {
            if(s.substr(0,w.length())==w)
            {
                if(w.length()==s.length())
                {
                    result.push_back(w);
                }
                else
                {
                    vector<string> tmp = wordBreak(s.substr(w.length()),wordDict);
                    
                    for(auto t : tmp)
                    result.push_back(w+ " " +t);
                }
            }
        }
        mp[s]=result;
        return result;
        
    }
};