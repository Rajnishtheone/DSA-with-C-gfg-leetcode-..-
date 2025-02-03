class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
          int n = nums.size();
    if (n == 1) return 1;

    int inc = 1, dec = 1, max_len = 1;

    for (int i = 1; i < n; ++i) {
        if (nums[i] > nums[i - 1]) {
            inc++;
            dec = 1;
        } else if (nums[i] < nums[i - 1]) {
            dec++;
            inc = 1;
        } else {
            inc = dec = 1;
        }
        max_len = std::max(max_len, std::max(inc, dec));
    }

    return max_len;
    }
};