// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int low=0,high=arr.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[high]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        low=high;
        return low;
    }
};
