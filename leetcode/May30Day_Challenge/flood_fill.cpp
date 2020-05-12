/* An image is represented by a 2-D array of integers, each integer representing the pixel value of the image (from 0 to 65535).

Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.

To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.

At the end, return the modified image.

Example 1:
Input: 
image = [[1,1,1],[1,1,0],[1,0,1]]
sr = 1, sc = 1, newColor = 2
Output: [[2,2,2],[2,2,0],[2,0,1]] */

class Solution
{
    int M, N;
    void floodFillUtil(vector<vector<int>> &screen, int x, int y, int prevC, int newC)
    {
        // Base cases
        if (x < 0 || x >= M || y < 0 || y >= N)
            return;
        if (screen[x][y] != prevC)
            return;
        if (screen[x][y] == newC)
            return;

        // Replace the color at (x, y)
        screen[x][y] = newC;

        // Recur for north, east, south and west
        floodFillUtil(screen, x + 1, y, prevC, newC);
        floodFillUtil(screen, x - 1, y, prevC, newC);
        floodFillUtil(screen, x, y + 1, prevC, newC);
        floodFillUtil(screen, x, y - 1, prevC, newC);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newC)
    {

        int preC = image[sr][sc];
        M = image.size();
        N = image[0].size();

        floodFillUtil(image, sr, sc, preC, newC);
        return image;
    }
};