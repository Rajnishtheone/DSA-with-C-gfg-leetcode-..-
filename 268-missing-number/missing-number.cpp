class Solution {
public:
    int missingNumber(vector<int>& nums) {
 
 int n= nums.size();
 int ans1;
;


 ans1=(n*(n+1))/2;

int ans2=0;
 for(int i=0;i<nums.size();i++){
    ans2+=nums[i];
 }
 return ans1-ans2;

    }
};