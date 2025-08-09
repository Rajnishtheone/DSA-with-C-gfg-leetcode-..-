class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n=arr.size();
        d= d%n;
        if(n == 0)return;
        if(d==0)return;
        
        //first half
        
        int start = 0;
        int end=d-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
         start = d;
         end=n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
         start = 0;
         end=n-1;
        while(start<end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        
    }
};