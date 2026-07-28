class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        
        unordered_set<int>m;
        
        for(int i : a){
          m.insert(i);  
        }
         for(int i : b){
          m.insert(i);  
        }
        
        vector<int>result;
        
        for(int i : m){
            result.push_back(i);
        }
        
        return result;
    }
};