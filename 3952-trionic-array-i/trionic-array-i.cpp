class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n==3){
            return false;
        }
        bool res = true;
        int p=1;
        if (nums[p] <= nums[0]){
            return false;
        }
        while (p + 1 < n - 2 && nums[p+1] > nums[p]){
            p++;
        }
        int q = p + 1;
        if (q >= n - 1 || nums[q] >= nums[p]){
            return false;
        }
        while (q + 1 < n - 1 && nums[q+1] < nums[q]){
            q++;
        }
        for (int i = q+1; i<=n-1; i++){
            if (!(nums[i] > nums[i-1])){
                return false;
            }
        }

        return true;
    }
};