class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        
        int n = nums.size();
        int Left[n];
        int Right[n];
        vector<int> answer;
        answer.clear();
        
        Left[0] = 1;
        for (int i = 1; i < n; i++) 
        {
            Left[i] = nums[i - 1] * Left[i - 1];
        }

        Right[n - 1] = 1;
        for (int i = n - 2; i >= 0; i--)
        {         
            Right[i] = nums[i + 1] * Right[i + 1];
        }

        for (int i = 0; i < n; i++) 
        {
            answer.push_back(Left[i] * Right[i]);
        }

        return answer;
    }

};