class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum1=0,sum2=0;
        sum1=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum2=sum2+nums[i];
        }
        return sum1-sum2;

       
    }
};