// User function template for C++
class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
          int rightsum=0,leftsum=0;
     int n=arr.size();
     int total=0;
     for(int i=0;i<n;i++){
        total=total+arr[i];
     }

     for(int i=0;i<n;i++){
        rightsum=total-leftsum-arr[i];

        if(leftsum==rightsum){
            return "true";
        }

        leftsum=leftsum+arr[i];
     }

     return "false";
    
    }
};