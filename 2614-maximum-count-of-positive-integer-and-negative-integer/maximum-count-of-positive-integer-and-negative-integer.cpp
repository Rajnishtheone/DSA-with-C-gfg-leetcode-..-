class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n=nums.size();int c=0,f=0;
        for(int i=0;i<n;i++){
            if(nums[i]>0 && nums[i]!=0){
                c++;
            }
            else if(nums[i]<0 && nums[i]!=0){
                f++;
            }
        }
        if(c>=f){
            return c;
        }
        else return f;
        
    }
};