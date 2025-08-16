class Solution {
public:
    int maximum69Number (int num) {
        string numStr = to_string(num); // Convert the integer to string
        for (char &ch : numStr) {
            if (ch == '6') {
                ch = '9'; // Change the first '6' to '9'
                break;    // Only one change allowed
            }
        }
        return stoi(numStr); // Convert back to integer
    }
};
