class Solution {
public:
    bool isPrime[1000001]; 

    Solution() { 
        sieveOfEratosthenes();
    }

    void sieveOfEratosthenes() {
        fill(isPrime, isPrime + 1000001, true); 
        isPrime[0] = isPrime[1] = false; 

        for (int i = 2; i * i <= 1000000; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= 1000000; j += i) {
                    isPrime[j] = false; 
                }
            }
        }
    }

    vector<int> closestPrimes(int left, int right) {
        right = min(right, 1000000);  

        int prev = -1, first = -1, second = -1;
        int minDiff = INT_MAX;

        for (int i = left; i <= right; ++i) {
            if (isPrime[i]) { 
                if (prev != -1 && (i - prev) < minDiff) {
                    minDiff = i - prev;
                    first = prev;
                    second = i;
                }
                prev = i; 
            }
        }
        
        return (first != -1 && second != -1) ? vector<int>{first, second} : vector<int>{-1, -1};
    }
};