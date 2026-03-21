class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int rowStart = x;
        int rowEnd = x + k - 1;

        while(rowStart < rowEnd){
            int colEnd = y+k;
            for(int i = y; i< colEnd; i++){
                swap(grid[rowStart][i],grid[rowEnd][i]);
            }
            rowStart++;
            rowEnd--;
        }
        return grid;
    }
};