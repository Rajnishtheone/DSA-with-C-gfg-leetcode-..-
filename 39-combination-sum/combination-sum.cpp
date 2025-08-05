class Solution {
public:
    void backtrack(int start , vector<int>&candidate,int target,int sum,vector<vector<int>>&result,vector<int>path){
        if(sum == target){
            result.push_back(path);
            return;
        }
        if(sum > target){
            return;
        }
        for(int i=start;i<candidate.size();i++){
            path.push_back(candidate[i]);
            backtrack(i,candidate,target,sum+candidate[i],result,path);
            path.pop_back();
        }
    }


    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>result;
        vector<int>path;
        backtrack(0,candidates,target,0,result,path);
        return result;
    }
};