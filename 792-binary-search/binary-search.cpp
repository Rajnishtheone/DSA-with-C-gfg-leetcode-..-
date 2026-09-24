class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n = nums.size();
          int s = 0;
          int l = n-1;
        while(s<=l){
            int mid = (s+l)/2;
            if(nums[mid]==target)return mid;

            if(nums[mid]<target){
                s=mid+1;
            }
            else{
              l= mid-1;  
            }
        }
        return -1;
    }
};