class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>pos,neg;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                neg.push_back(nums[i]);
            }
            else{
                pos.push_back(nums[i]);

            }
        }

        int i=0,j=0;
        while(i<pos.size()){
            nums[j]=pos[i];
            j++;
            nums[j]=neg[i];
            j++;
            i++;
        }
        return nums;
        
    }
};