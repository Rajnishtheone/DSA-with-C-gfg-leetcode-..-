class Solution {
public:
    bool isVowel(char str) {
        if (str == 'a' || str == 'e' || str == 'i' || str == 'o' ||
            str == 'u') {
            return true;
        }
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char, int>mp;
        for (int i = 0; i < s.length(); i++) {
            mp[s[i]]++;
        }
        int max1 = 0;
        int max2 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isVowel(s[i])) {
                max1 = max(max1, mp[s[i]]);
            } else {
                max2 = max(max2, mp[s[i]]);
            }
        }
        return max1 + max2;
    }
};