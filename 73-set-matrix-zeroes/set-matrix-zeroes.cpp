class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int col0 = 1;

        // Step 1: Mark the first row and first column
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) col0 = 0;  // Track if first column should be zeroed

            for (int j = 1; j < m; j++) {  // Start from j=1 to avoid overwriting col0
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Step 2: Set matrix cells to zero using markers (excluding first row & column)
        for (int i = n - 1; i >= 1; i--) {  // Start from bottom to avoid overwriting markers too early
            for (int j = m - 1; j >= 1; j--) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Zero out the first row if needed
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Step 4: Zero out the first column if needed
        if (col0 == 0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
