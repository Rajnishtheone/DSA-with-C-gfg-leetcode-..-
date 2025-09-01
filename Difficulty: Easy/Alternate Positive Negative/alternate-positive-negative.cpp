// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int>result,neg,pos;
        for(int num:arr){
            if(num>=0)pos.push_back(num);
            else neg.push_back(num);
        }
        
        int i=0,j=0;
        while(i<pos.size() && j<neg.size()){
            result.push_back(pos[i++]);
            result.push_back(neg[j++]);
        }
         while(i<pos.size()) result.push_back(pos[i++]);
         while(j<neg.size()) result.push_back(neg[j++]);
        
        arr = result;
    }
};