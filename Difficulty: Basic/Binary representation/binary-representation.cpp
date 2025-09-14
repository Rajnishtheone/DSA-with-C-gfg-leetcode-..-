class Solution {
  public:
    string getBinaryRep(int N) {
        // Write Your Code here
        string res = "00000000000000000000000000000000";
        int i = res.length()-1;
        
        while(N > 0){
            if(N % 2 == 1){
                res[i]='1';
            }
            else{
                res[i]='0';
            }
            
            i--;
            N=N/2;
        }
        
        return res;
    }
};