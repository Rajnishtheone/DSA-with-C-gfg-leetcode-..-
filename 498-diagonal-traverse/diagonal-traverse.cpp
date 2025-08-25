class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
     int m = mat.size();
        int n = mat[0].size();
        vector<int> result;
        
        // Approach 1: Diagonal-by-diagonal traversal
        for (int d = 0; d < m + n - 1; d++) {
            if (d % 2 == 0) {
                // Even diagonal: go from bottom-left to top-right
                for (int i = min(d, m - 1); i >= max(0, d - n + 1); i--) {
                    int j = d - i;
                    result.push_back(mat[i][j]);
                }
            } else {
                // Odd diagonal: go from top-left to bottom-right
                for (int i = max(0, d - n + 1); i <= min(d, m - 1); i++) {
                    int j = d - i;
                    result.push_back(mat[i][j]);
                }
            }
        }
        
        return result;
    }
};