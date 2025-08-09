class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int max1=INT_MIN;
        int max2=INT_MIN;
        int n = arr.size();
        for(int i =0 ; i<n;i++){
            if(arr[i] > max1){
                max2 = max1;
                max1 = arr[i];
            }
            
            if(arr[i] > max2 && arr[i] < max1 ){
                max2 = arr[i];
            }
        }
        
        return (max2 == INT_MIN)? -1 : max2;
    }
};