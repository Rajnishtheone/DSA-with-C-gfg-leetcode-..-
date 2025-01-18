class Solution {
public:
    int reverse(int x) {
        int ANS=0;
       while(x!=0){
        int rem = x%10;
         if(ANS < INT_MIN /10 || ANS > INT_MAX/10){
            return 0;
         } 
         ANS=ANS*10+rem;
         x=x/10;
        
       }
       return ANS;
    }
};