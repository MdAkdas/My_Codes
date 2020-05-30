class Solution {
public:
    int msbPos(long long n) 
    { 
        int msb_p = -1; 
        while (n) 
        { 
            n = n>>1; 
            msb_p++; 
        } 
        return msb_p; 
    }
    
    int rangeBitwiseAnd(int x, int y) 
    {
        
     long long res = 0; 
  
     while (x && y) 
     { 
        
        int msb_p1 = msbPos(x); 
        int msb_p2 = msbPos(y); 
  
        
        if (msb_p1 != msb_p2) 
            break; 
  
       
        long long msb_val =  (1 << msb_p1); 
        res = res + msb_val; 
  
       
        x = x - msb_val; 
        y = y - msb_val; 
    } 
  
    return res; 
    }
};