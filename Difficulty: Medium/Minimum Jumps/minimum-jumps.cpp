class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
         
         int n = arr.size();
         
         if(n==1)return 0;
         
         if(n==0)return -1;
         
         if(arr[0]==0)return -1;
         
         int jump=0;
         int mj=0;
         int cj=0;
         
         for(int i=0;i<n;i++){
             mj=max(mj,arr[i]+i);
             
             if(i==cj){
                 cj=mj;
                 jump++;
             }
             
             if(cj>= n-1){
                 return jump;
             }
             
             if(cj==i){
                 return -1;
             }
         }
         
         return -1;
    }
};
