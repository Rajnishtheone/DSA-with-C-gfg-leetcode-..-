class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lastIndex[128]; 
        fill(lastIndex, lastIndex + 128, -1); // Initialize array to -1
        
        int maxLength = 0, left = 0; 
        
        for (int right = 0; right < s.length(); right++) {
            left = max(left, lastIndex[s[right]] + 1); // Update left pointer
            maxLength = max(maxLength, right - left + 1);
            lastIndex[s[right]] = right; // Store the last index of the character
        }
        
        return maxLength;
    }
};
