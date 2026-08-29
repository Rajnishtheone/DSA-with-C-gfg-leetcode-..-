class Solution {
public:
    int house(vector<int>&dp,int n,vector<int>&nums){
        if(n==0)return nums[0];

         if(n==1){
            return max(nums[0],nums[1]);
         }

        if(dp[n] != -1){
            return dp[n];
        }

        dp[n] = max(house(dp,n-1,nums),nums[n]+house(dp,n-2,nums));

        return dp[n];
    }






    int rob(vector<int>& nums) {
        int n= nums.size();
        if(nums.empty())return 0;
        vector<int>dp(n+1,-1);

        return house(dp,n-1,nums);
    }
};