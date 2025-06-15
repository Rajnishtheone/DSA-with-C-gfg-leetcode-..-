class Solution {
public:
    string frequencySort(string s) {
        // Step 1: Count frequency of each character
        unordered_map<char, int> freq;
        for (char ch : s) {
            freq[ch]++;
        }

        // Step 2: Use max heap to sort characters by frequency
        priority_queue<pair<int, char>> maxHeap;
        for (auto& entry : freq) {
            maxHeap.push({entry.second, entry.first}); // (frequency, character)
        }

        // Step 3: Build result string using characters from heap
        string result;
        while (!maxHeap.empty()) {
            auto [count, ch] = maxHeap.top();
            maxHeap.pop();
            result.append(count, ch); // append character 'count' times
        }

        return result;
    }
};