class Solution {
public:
    int maxSum(vector<int>& nums) {

       set<int> result;

        int sum = 0;
        int maxx = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            result.insert(nums[i]);
        }

        for (int j : result) {

            sum = sum + j;

            maxx = max(maxx, sum);

            if (sum < 0) {
                sum = 0;
            }
        }

        return maxx;
    }
};