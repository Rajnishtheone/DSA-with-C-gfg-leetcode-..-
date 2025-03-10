class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;

        for(int i = 0; i < nums.size(); ++i){
            umap.insert({nums[i], i});
        }

        return umap.size() != nums.size();
    }
};