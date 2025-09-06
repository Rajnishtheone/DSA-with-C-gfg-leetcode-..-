class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size()-1;
        int end=n;
        int start=0;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }


        }
        return start;
    }
};