class Solution {
public:
    void generatesubset(int j, vector<int>& nums, vector<vector<int>>& arr,
                        vector<int>& result) {

        arr.push_back(result);

        for (int i = j; i < nums.size(); i++) {

            if (i>j && nums[i] == nums[i - 1])
                continue;

            result.push_back(nums[i]);
            generatesubset(i + 1, nums, arr, result);
            result.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> arr;
        vector<int> result;
        sort(nums.begin(), nums.end());
        generatesubset(0, nums, arr, result);

        return arr;
    }
};