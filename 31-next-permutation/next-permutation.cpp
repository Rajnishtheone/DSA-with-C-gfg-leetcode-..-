class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i, j;
        
        // Step 1: Find first decreasing element from the right
        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) break;
        }

        // Step 2: If found, swap it with the next greater element
        if (i >= 0) { // Only swap if a breakpoint is found
            for (j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }

        // Step 3: Reverse the right part after swap index
        reverse(nums.begin() + i + 1, nums.end());
    }
};
