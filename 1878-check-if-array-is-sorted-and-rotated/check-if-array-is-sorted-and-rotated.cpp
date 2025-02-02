class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        int i;
        for(i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                f++;
            }
        }
        if(nums[n-1]>nums[0]){
            f++;
        }
        return f<=1;
        
    }
};