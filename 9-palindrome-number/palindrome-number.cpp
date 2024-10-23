class Solution {
public:
bool isPalindrome(int n) {
    long long reverse = 0;
    int temp = n;  // Copy of the original number

    // Find the reverse of the number
    while (temp > 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }

    // If reverse is equal to the original number, it's a palindrome
    return (reverse == n);
}

};