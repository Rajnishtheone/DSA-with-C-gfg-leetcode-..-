class Solution {
  public:
    int findUnique(vector<int> &arr) {
        // code here
        int result=0;
        for(int i=0;i<arr.size();i++){
            result= result^arr[i];
        }
        
        return result;
    }
};