class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        for(int i=0;i<n;i++){
            if(n % 2 == 0){
                double mid = n/2;
                double sec_mid = mid-1;
                
                 double res=(double)(arr[mid]+arr[sec_mid])/2;
                 return res;
            }
            else{
                
                double res= (double)arr[n/2];
                return res;
            }
        }
        return 0;
    }
};