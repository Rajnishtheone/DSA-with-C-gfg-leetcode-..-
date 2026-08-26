class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        map<int ,int>m;
        
        for(int i=0;i<n;i++){
           m[arr[i]]++;
           
        }
        
        vector<int>ans;
        
        for(auto & i : m){
            if(i.second>=2){
                ans.push_back(i.first);
            }
        }
        
        return ans;
        
        
    }
};