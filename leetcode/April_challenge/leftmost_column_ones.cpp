/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        
        vector<int> list;
        list =  binaryMatrix.dimensions();
        int rows = list[0]-1;
        int columns = list[1]-1;
        int row = 0;
        int col = columns;
        
        while(row <= rows && col >= 0)
        {
          
            if(binaryMatrix.get(row,col)==1)
                col--;
            else
                row++;
        }
        return col == columns ? -1 : col+1;
    }
};