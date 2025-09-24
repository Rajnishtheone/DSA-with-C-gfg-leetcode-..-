class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if (numerator == 0) return "0";

        string result;

        // Handle sign
        if ((numerator < 0) ^ (denominator < 0)) {
            result += "-";
        }

        // Convert to long long and take absolute values safely
        long long n = llabs((long long)numerator);
        long long d = llabs((long long)denominator);

        // Integer part
        result += to_string(n / d);
        long long remainder = n % d;

        if (remainder == 0) return result;

        result += ".";

        // Map to store previously seen remainders and their positions
        unordered_map<long long, int> remainderMap;

        while (remainder != 0) {
            if (remainderMap.count(remainder)) {
                // Repeating part detected
                result.insert(remainderMap[remainder], "(");
                result += ")";
                break;
            }

            // Store current remainder position
            remainderMap[remainder] = result.size();

            remainder *= 10;
            result += to_string(remainder / d);
            remainder %= d;
        }

        return result;
    }
};
