class Solution {
public:
    bool iszero(int temp) {
       
        while (temp > 0) {
            if (temp % 10 == 0)
                return false;
            temp = temp / 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        int j;
        for (int i = 1; i < n; i++) {
            j = n - i;
            if (iszero(i) && iszero(j)) {
                res = {i, j};
                break;
            }
        }
        return res;
    }
};