// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<vector<int>>ans;
        
        for(int x : arr){
            freq[x]++;
        }
        
        for(auto &p : freq){
            int val = p.first;
            int count = p.second;
            if(val > 0){
                if(freq.find(-val) != freq.end()){
                    ans.push_back({-val,val});
                }
            }
            else if(val == 0){
                if(count >= 2)ans.push_back({0,0});
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};