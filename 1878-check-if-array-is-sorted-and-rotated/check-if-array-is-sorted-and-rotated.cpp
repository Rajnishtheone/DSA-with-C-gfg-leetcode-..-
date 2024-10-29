class Solution {
public:
    bool check(vector<int>& nums) {
        int i;int f= 0;
        int n=nums.size();
        for(i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                f++;
            }
        } 
        if(nums[n-1]>nums[0]){
            f++;
        }
       return f <=1;
    }
};