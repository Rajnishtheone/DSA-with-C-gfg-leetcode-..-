class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n= nums.size();
        int i=0,j=1,k=2,count=0;
        while(k<n){
            if(nums[i]==0){
                nums[i]=1;
                nums[j]=nums[j]?0:1;
                nums[k]=nums[k]?0:1;
                count++;

            }
            i++;j++;k++;

        }
        return nums[i]+nums[j]==2?count:-1;

        
    }
};