class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mfar = nums[0];
        int mend = 0;

        for(int i = 0; i < nums.size(); ++i){
            mend = mend + nums[i];

            if(mend > mfar){
                mfar = mend;
            }
            if(mend < 0){
                mend = 0;
            }
        }
        return mfar;
    }
};