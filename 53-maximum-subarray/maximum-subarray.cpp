class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int n = nums.size();

        int sum = nums[0];
        int maxx = nums[0];

        for (int i = 1; i < n; i++) {
            if (sum < 0) {
                sum = 0;
            }

            sum = sum + nums[i];

            maxx = max(sum, maxx);
        }
        return maxx;
    }
};