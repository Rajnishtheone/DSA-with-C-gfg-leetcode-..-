class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int i,frq=0,ans=0;

        for(i=0;i<n;i++){
            if(frq==0){
            ans=nums[i];
            }
            if(ans==nums[i])
            {
                frq++;
            }
            else 
            {
                frq--;
            }
        }       
        return ans;
    }
};