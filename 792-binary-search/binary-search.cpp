class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0,e=n-1,mid;
        
        for(int i=0;i<n;i++){
            
            mid=(s+e)/2;
            
            if(nums[mid]==target){
                return mid;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
           
        }
        return -1;

       
        
    }
};