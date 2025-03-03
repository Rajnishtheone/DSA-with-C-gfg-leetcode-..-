class Solution {
public:
    int lengthOfLongestSubstring(string s) {

          vector<int> lastIndex(256, -1); // Stores last seen index of each character
        int maxLength = 0;
        int left = 0; // Left pointer of the sliding window

        for (int right = 0; right < s.length(); right++) {
            // If character is repeated, move left pointer just past the last occurrence
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1;
            }

            // Update the last seen index of the character
            lastIndex[s[right]] = right;

            // Calculate the max length of substring
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
        
    }
};