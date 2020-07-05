class Solution {
public:
    int BrianAlgo(int n)
    {
        if(n==0)
            return 0;
        
        return (n&1) + BrianAlgo(n>>1);
    }
    int hammingDistance(int x, int y) {
        int z = x xor y;
        int noBits = BrianAlgo(z);
        return noBits;
        
    }
};