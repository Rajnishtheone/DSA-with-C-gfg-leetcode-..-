class Solution {
public:
    int myAtoi(string s) {
        
        int i=0; int sign=1;
        long result=0;
        int n = s.size();


        while(i<n && s[i] == ' '){
            i++;
        }

        if(i<n && (s[i]=='-' || s[i]=='+')){
            sign=(s[i]=='-')? -1 :1;
            i++;
        }

           // ✅ Step 3: Check that next character is a digit
        if (i >= n || !isdigit(s[i])) {
            return 0;
        }

        while(i<n && isdigit(s[i])){
            int digit = s[i] - '0';

            if(result > (INT_MAX-digit)/10){
                return (sign==1)?INT_MAX:INT_MIN;
            }

            result = result*10+digit;
            i++;
        }

        return static_cast<int>(result*sign);
    }
};