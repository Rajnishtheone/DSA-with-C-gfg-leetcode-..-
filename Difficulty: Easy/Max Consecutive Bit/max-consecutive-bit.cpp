class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int n = arr.size();
        int num=0;int maxx=0; int num2=0;int max2=0;int result=0;
        for(int i=0;i<n;i++){
            if(arr[i] == 1){
                num++;
            }
            else{
                num=0;
            }
            
            if(num>maxx){
                maxx=num;
            }
            
            if(arr[i] == 0){
                num2++;
            }
            else{
                num2=0;
            }
            if(num2>max2){
                max2=num2;
            }
            
            result = max(maxx,max2);
            
            
        }
        
        return result;
        
    }
};