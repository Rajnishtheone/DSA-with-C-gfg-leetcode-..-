class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";

        sort(strs.begin(), strs.end());

        
        for(int i = 0; i < strs[0].size(); ++i){
            result += strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(result.back() != strs[j][i]){
                    result.pop_back();
                    return result;
                }
            }
        }

        return result;
        
    }
};