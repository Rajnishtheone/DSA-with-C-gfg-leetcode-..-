class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n == 0)return {};
        int j=0;
        for(int i=1;i<n;i++){
            if(arr[i] != arr[j]){
                j++;
                arr[j]=arr[i];
            }
        }
        
        arr.resize(j+1);
        return arr;
    }
};