class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        
        int n = arr.size();
        int maxsum=0;
        int cursum=0;
        
        for(int i=0;i<k;i++){
            maxsum += arr[i];
        }
        
        cursum = maxsum;
        
        for(int i = k;i<n;i++){
            
            cursum += arr[i]- arr[i-k];
            
            maxsum = max(cursum,maxsum);
        }
        
        return maxsum;
        
    }
};