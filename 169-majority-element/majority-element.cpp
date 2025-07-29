class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        unordered_map<int,int>sorted;
        for(int i : nums){
            sorted[i]++;
            if(sorted[i] > n/2)return i;
        }
        return false;
    }
};