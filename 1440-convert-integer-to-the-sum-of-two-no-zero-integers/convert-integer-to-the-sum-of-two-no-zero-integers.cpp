class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int> res;
        for (int i = 1; i <= n; i++) {
            int temp = i;
            bool r = false;
            while (temp > 0) {
                if (temp % 10 == 0)
                    r = true;
                temp = temp / 10;
            }
            if (r)
                continue;
            for (int j = 1; j <= n; j++) {
                int temp2 = j;
                bool rs = false;
                while (temp2 > 0) {
                    if (temp2 % 10 == 0)
                        rs=true;
                    temp2 = temp2 / 10;
                }
                if (rs)
                    continue;

                if (i + j == n) {
                    res.push_back(i);
                    res.push_back(j);
                    return res;
                }
            }
        }
        return res;
    }
};