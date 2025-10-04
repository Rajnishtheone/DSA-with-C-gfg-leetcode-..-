class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> result;
        int n = nums.size();

        // Step 1: Sort the array
        sort(nums.begin(), nums.end());

        // Step 2: Fix one number and use two pointers
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Early termination: if the current number > 0, no solution
            // possible
            if (nums[i] > 0)
                break;

            int left = i + 1;
            int right = n - 1;
            int target = -nums[i];

            while (left < right) {
                int current_sum = nums[left] + nums[right];

                if (current_sum == target) {
                    // Found a triplet
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for the second element
                    while (left < right && nums[left] == nums[left + 1])
                        left++;

                    // Skip duplicates for the third element
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    // Move both pointers
                    left++;
                    right--;
                } else if (current_sum < target) {
                    left++; // Need bigger sum
                } else {
                    right--; // Need smaller sum
                }
            }
        }

        return result;
    }
};