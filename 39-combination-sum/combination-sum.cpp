class Solution {
public:
    set<vector<int>> s;
    void getallcombination(vector<int>& candidates, int indx, int target,
                           vector<vector<int>>& ans, vector<int>& comb) {
        if (indx == candidates.size() || target < 0)
            return;

        if (target == 0) {
            if (s.find(comb) == s.end()) {
                ans.push_back(comb);
                s.insert(comb);
            }
        }

        comb.push_back(candidates[indx]);

        // single

        getallcombination(candidates, indx + 1, target - candidates[indx], ans,
                          comb);

        // multiple

        getallcombination(candidates, indx, target - candidates[indx], ans,
                          comb);

        // not included
        comb.pop_back();
        getallcombination(candidates, indx + 1, target, ans, comb);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> comb;
        vector<vector<int>> ans;

        getallcombination(candidates, 0, target, ans, comb);

        return ans;
    }
};