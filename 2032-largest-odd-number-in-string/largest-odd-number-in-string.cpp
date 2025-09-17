class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();

        for(int i =n;i>0;i--){
            if((num[i-1]-'0')%2 == 0){
                continue;
            }
            else{
               return num.substr(0,i);
            }
        }
        return "";
    }
};