class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> count;

        // Count the frequency of each element in both baskets
        for (int x : basket1) count[x]++;
        for (int x : basket2) count[x]--;

        // Step 1: Check if total frequency of any fruit is odd
        vector<int> excess1, excess2;
        for (auto& [fruit, freq] : count) {
            if (freq % 2 != 0) return -1; // Impossible to make baskets equal

            int absFreq = abs(freq) / 2;
            if (freq > 0)
                excess1.insert(excess1.end(), absFreq, fruit);
            else if (freq < 0)
                excess2.insert(excess2.end(), absFreq, fruit);
        }

        if (excess1.empty()) return 0; // Already equal

        // Sort both excess lists for greedy matching
        sort(excess1.begin(), excess1.end());
        sort(excess2.begin(), excess2.end(), greater<int>());

        int n = excess1.size();
        int minFruit = min(*min_element(basket1.begin(), basket1.end()), 
                           *min_element(basket2.begin(), basket2.end()));

        long long cost = 0;
        for (int i = 0; i < n; ++i) {
            // Greedy: choose min of direct swap or double-swap through minFruit
            cost += min(1LL * min(excess1[i], excess2[i]), 2LL * minFruit);
        }

        return cost;
    }
};
