class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max = 0, num = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                num++;
            }
            else  num =0;

            if (num > max) {
                max = num;
               
            }

            
        }

        return max;
    }
};