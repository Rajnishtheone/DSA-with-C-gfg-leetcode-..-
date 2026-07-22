class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int>maxheap;
        
        for(auto val:arr){
           
           maxheap.push(val);
           
           if(maxheap.size()>k){
                maxheap.pop();
            }
         
        }
        
        return maxheap.top();
        
    }
};