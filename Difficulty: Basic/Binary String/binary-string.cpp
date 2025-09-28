class Solution {
  public:
    int binarySubstring(string& s) {
        int count =0;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == '1'){
                if(count>0){
                    ans=ans+count;
                    count++;
                }
                else{
                    count++;
                }
            }
        }
        return ans;
        
    }
};