class Solution {
  public:
    int binaryToDecimal(string &b) {
        // Code here.
        
        // int len = b.length();
        // int i=0;int r=0;
        // for(int j = len-1;j>=0;j--){
        //     r=r+b[j]*pow(2,i);
        //     i++;
        
        // }
        // return r;
        
        
        int res=0;
        
        for(int i=0;i<b.length();i++){
            res=res*2+(b[i] -'0');
        }
        
        return res;
        
        
        
        
        
    }
};