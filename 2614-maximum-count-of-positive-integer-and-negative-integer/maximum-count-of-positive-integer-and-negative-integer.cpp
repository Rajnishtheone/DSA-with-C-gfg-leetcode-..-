class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int positiveindex=lower_bound(nums.begin(),nums.end(),1)-nums.begin();
        int negativeindex=lower_bound(nums.begin(),nums.end(),0)-nums.begin();
        int pi=n-positiveindex;
        int ni=negativeindex;
         
         return max(pi,ni);
        
    }
};