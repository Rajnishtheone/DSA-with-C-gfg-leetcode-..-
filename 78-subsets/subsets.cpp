class Solution {
public:
    void generatesubset(int j,vector<vector<int>> & arr, vector<int> &result,vector<int> &nums){
        arr.push_back(result);

        for(int i=j;i<nums.size();i++){

            result.push_back(nums[i]);

            generatesubset(i+1,arr,result,nums);
            result.pop_back();
            
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>arr;
        vector<int>result;
        int i =0;
        generatesubset(i,arr,result,nums);

        return arr;
    }
};