// User function Template for C++

class Solution {
  public:
  
  void generate(int n , string current , vector<string> &result,char last){
     
     if(current.length() == n){
         result.push_back(current);
         return;
     } 
     
     generate(n,current+'0',result,'0');
     
     
     if(last != '1'){
         generate(n,current+'1',result,'1');
     }
     
     
  }
  
  
  
    vector<string> generateBinaryStrings(int num) {
     
        vector<string>result;
        
        generate(num ,"", result,'0');
        
        return result;
        
        
    }
};