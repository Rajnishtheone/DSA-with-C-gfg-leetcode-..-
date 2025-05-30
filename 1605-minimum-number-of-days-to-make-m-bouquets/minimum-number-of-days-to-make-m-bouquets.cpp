class Solution {
public:
    // Helper function to check if we can make m bouquets in 'day' days
    bool canMake(vector<int>& bloomDay, int m, int k, int day) {
        int flowers = 0;
        int bouquets = 0;

        for (int i = 0; i < bloomDay.size(); ++i) {
            if (bloomDay[i] <= day) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;  // reset after making a bouquet
                }
            } else {
                flowers = 0;  // reset streak if a flower hasn't bloomed
            }
        }

        return bouquets >= m;
    }

    // Main function to find the minimum number of days
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = (long long)m * k;
        if (total > bloomDay.size()) return -1;  // not enough flowers

        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMake(bloomDay, m, k, mid)) {
                high = mid;  // try to find a smaller valid day
            } else {
                low = mid + 1;  // need more days
            }
        }

        return low;
    }
};
