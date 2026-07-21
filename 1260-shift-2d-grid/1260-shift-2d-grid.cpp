#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();       // rows
        int n = grid[0].size();    // cols
        int total = m * n;
        
        vector<int> flat(total);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                flat[i * n + j] = grid[i][j];
            }
        }
        
        k = k % total;
        
        vector<int> shifted(total);
        for (int idx = 0; idx < total; idx++) {
            int newIdx = (idx + k) % total;
            shifted[newIdx] = flat[idx];
        }
        
        vector<vector<int>> result(m, vector<int>(n));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = shifted[i * n + j];
            }
        }
        
        return result;
    }
};