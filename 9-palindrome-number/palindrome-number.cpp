class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        if (x < 0) {
            return false;
        }
        long long res = 0;
        while (x > 0) {
            res = (res * 10LL) + (x % 10);
            x = x / 10;
        }
        return temp == res;
    }
};