class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        if (x < 0) {
            return false;
        }
        long long res=0;
        while (x > 0) {
            int num = x% 10;
            res = (res * 10LL) + num;
            x = x / 10;
        }
        return temp==res;
    }
};