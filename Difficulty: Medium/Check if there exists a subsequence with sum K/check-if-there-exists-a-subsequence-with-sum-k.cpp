class Solution {
  public:
  
  bool helper(vector<int>&arr,int n,int target,int index){
    if(target == 0)return true;
    
    if(index == n) return false;
    
    if(arr[index] <= target){
       if( helper(arr,n,target-arr[index],index+1)){
           return true;
       }
        
    } 
  
      return helper(arr,n,target,index+1);
  }
    bool checkSubsequenceSum(int n, vector<int>& arr, int k) {
        // Code here
       return  helper(arr,n,k,0);
        
    }
};