class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();int total=0;
        for(int num:nums){
            total=total+num;
        }
        int leftsum=0;
        int rightsum=0;
        for(int i=0;i<n;i++){
           rightsum = total - leftsum - nums[i];
           if(leftsum == rightsum)return i;
           leftsum=leftsum+nums[i];
        }

        return -1;
    }
};