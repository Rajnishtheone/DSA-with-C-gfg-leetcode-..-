class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;


        while (low < high) {
            int mid = (low + high) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }


            if(mid%2==1){
                mid--;//force mid to be even 
            }

            if(nums[mid]==nums[mid+1]){
                low=mid+2;
            }



            // if ((mid % 2 == 1 && nums[mid - 1] == nums[mid]) ||
            //     (mid % 2 == 0 && nums[mid + 1] == nums[mid])){
            //         low=mid+1;
            //     }
                else{
                    high=mid;
                }
        }

        return nums[low];
    }
};