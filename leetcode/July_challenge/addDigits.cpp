/*Given a non-negative integer num, repeatedly add all its digits until the result has only one digit.

Example:

Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.*/

class Solution {
public:
    int addDigits(int num) {
//         if(num==0)
//             return 0;
        
//         return (num-1)%9  + 1 ;
        
        if(num<10)
            return num;
        
        int res=0;
        while(num)
        {
            res+=num%10;
            num/=10;
        }
        
        return addDigits(res);
        
    }
};