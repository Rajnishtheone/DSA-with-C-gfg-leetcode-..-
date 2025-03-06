class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int expected_sum = n * n * (n * n + 1) / 2;
        int actual_sum = 0;
        
        // To track repeated number
        unordered_set<int> seen;
        int a = -1;  // Repeated number (a)
        
        // Traverse through the grid to calculate the sum and find the repeated number
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int num = grid[i][j];
                actual_sum += num;
                if (seen.count(num)) {
                    a = num;  // Found the repeated number
                }
                seen.insert(num);
            }
        }
        
        // The missing number is the difference between expected and actual sum
        int b = expected_sum - actual_sum + a; // b = a - (actual_sum - expected_sum)
        
        return {a, b}; // Return vector of a and b
    }
};
