class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int n= arr.size();
        int f=-1,l=-1;
        
        for(int i =0; i<n;i++){
            if(arr[i]==x and f==-1){
                f=i;
                l=i;
            }
            
            if(arr[i]==x){
                l=i;
            }
            
        }
        
        return {f,l};
    }
};